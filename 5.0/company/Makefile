# $OpenBSD: Makefile,v 1.3 2019/04/28 20:51:49 sthen Exp $

MODPY_EGG_VERSION =	5.0.2
TRYTON_MODULE =		company

TRYTON_DEPENDS +=	party \
			currency

RUN_DEPENDS +=		devel/py-tz${MODPY_FLAVOR}

.include <bsd.port.mk>
