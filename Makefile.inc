# $OpenBSD$

CATEGORIES ?=		productivity \
			productivity/tryton

HOMEPAGE ?=		https://www.tryton.org/

MAINTAINER ?=		Sebastien Marie <semarie@online.fr>

# GPLv3
PERMIT_PACKAGE_CDROM ?=	Yes

MASTER_SITES =		https://downloads.tryton.org/${MODPY_EGG_VERSION:C/^([0-9]+\.[0-9]+).*/\1/}/
DIST_SUBDIR =		tryton

.if defined(TRYTON_MODULE)
TRYTON_PY =		Yes

COMMENT ?=		trytond ${TRYTON_MODULE} module
DISTNAME ?=		trytond_${TRYTON_MODULE}-${MODPY_EGG_VERSION}
PKGNAME ?=		trytond-module-${TRYTON_MODULE}-${MODPY_EGG_VERSION}

RUN_DEPENDS +=		productivity/tryton/${TRYTON_VERSION}/trytond${TRYTON_VERSION_COMPAT}
.  if defined(TRYTON_DEPENDS)
.    for _m in ${TRYTON_DEPENDS}
RUN_DEPENDS +=		productivity/tryton/${TRYTON_VERSION}/${_m}${TRYTON_VERSION_COMPAT}
.    endfor
.  endif

TEST_DEPENDS +=		productivity/tryton/${TRYTON_VERSION}/proteus${TRYTON_VERSION_COMPAT}
.endif

.if defined(TRYTON_PY) && ${TRYTON_PY:L} == "yes"
MODULES +=		lang/python
MODPY_VERSION ?=	${MODPY_DEFAULT_VERSION_3}
MODPY_SETUPTOOLS ?=	Yes
TEST_DEPENDS +=		${RUN_DEPENDS} \
			${FULLPKGNAME}:${BUILD_PKGPATH}
TEST_ENV +=		DB_NAME=:memory:
.endif
