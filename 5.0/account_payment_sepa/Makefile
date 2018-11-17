# $OpenBSD$

MODPY_EGG_VERSION =	5.0.0
TRYTON_MODULE =		account_payment_sepa

TRYTON_DEPENDS +=	party
TRYTON_DEPENDS += 	currency

RUN_DEPENDS +=		devel/py-stdnum${MODPY_FLAVOR}
RUN_DEPENDS +=		databases/py-sql${MODPY_FLAVOR}

.include <bsd.port.mk>
