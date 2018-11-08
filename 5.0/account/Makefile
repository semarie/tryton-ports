# $OpenBSD$

MODPY_EGG_VERSION =	5.0.0
TRYTON_MODULE =		account

TRYTON_DEPENDS +=	party
TRYTON_DEPENDS += 	currency
TRYTON_DEPENDS +=	company

RUN_DEPENDS +=		devel/py-dateutil${MODPY_FLAVOR}
RUN_DEPENDS +=		databases/py-sql${MODPY_FLAVOR}
RUN_DEPENDS +=		devel/py-simpleeval${MODPY_FLAVOR}

.include <bsd.port.mk>
