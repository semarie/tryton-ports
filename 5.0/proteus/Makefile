# $OpenBSD$

COMMENT =		library to access Tryton models like a client

MODPY_EGG_VERSION =	5.0.0
DISTNAME =		proteus-${MODPY_EGG_VERSION}

TRYTON_PY =		Yes

RUN_DEPENDS +=		productivity/tryton/${TRYTON_VERSION}/trytond
RUN_DEPENDS +=		devel/py-dateutil${MODPY_FLAVOR}

TEST_DEPENDS +=		productivity/tryton/${TRYTON_VERSION}/party

# TODO
# - provide a simple script based on ipython-3 for interactive usage ?

.include <bsd.port.mk>
