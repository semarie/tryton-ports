# $OpenBSD$

MODPY_EGG_VERSION =	5.0.1
TRYTON_MODULE =		account_statement

TRYTON_DEPENDS +=	account
TRYTON_DEPENDS += 	account_invoice
TRYTON_DEPENDS +=	bank
TRYTON_DEPENDS +=	company
TRYTON_DEPENDS +=	currency
TRYTON_DEPENDS +=	party

RUN_DEPENDS +=		databases/py-sql${MODPY_FLAVOR}

.include <bsd.port.mk>
