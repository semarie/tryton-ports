# $OpenBSD$

MODPY_EGG_VERSION =	5.0.0
TRYTON_MODULE =		account_payment

TRYTON_DEPENDS +=	account
TRYTON_DEPENDS +=	company
TRYTON_DEPENDS += 	currency
TRYTON_DEPENDS += 	party

RUN_DEPENDS +=		databases/py-sql${MODPY_FLAVOR}

TRYTON_TEST_DEPENDS +=	account_invoice

.include <bsd.port.mk>
