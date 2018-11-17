# $OpenBSD$

MODPY_EGG_VERSION =	5.0.0
TRYTON_MODULE =		purchase

TRYTON_DEPENDS +=	account
TRYTON_DEPENDS += 	account_invoice
TRYTON_DEPENDS +=	account_invoice_stock
TRYTON_DEPENDS +=	account_product
TRYTON_DEPENDS +=	company
TRYTON_DEPENDS +=	currency
TRYTON_DEPENDS +=	party
TRYTON_DEPENDS +=	product
TRYTON_DEPENDS +=	stock

RUN_DEPENDS +=		databases/py-sql${MODPY_FLAVOR}

.include <bsd.port.mk>
