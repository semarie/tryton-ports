# $OpenBSD$

MODPY_EGG_VERSION =	5.0.0
TRYTON_MODULE =		account_invoice_stock

TRYTON_DEPENDS +=	account_invoice
TRYTON_DEPENDS += 	stock
TRYTON_DEPENDS +=	product

RUN_DEPENDS +=		devel/py-dateutil${MODPY_FLAVOR}
RUN_DEPENDS +=		databases/py-sql${MODPY_FLAVOR}
RUN_DEPENDS +=		devel/py-simpleeval${MODPY_FLAVOR}

.include <bsd.port.mk>
