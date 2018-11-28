# $OpenBSD$

MODPY_EGG_VERSION =	5.0.0
TRYTON_MODULE =		account_payment_sepa

TRYTON_DEPENDS +=	party \
			currency

RUN_DEPENDS +=		devel/py-stdnum${MODPY_FLAVOR} \
			databases/py-sql${MODPY_FLAVOR}

.include <bsd.port.mk>
