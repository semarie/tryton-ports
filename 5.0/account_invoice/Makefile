# $OpenBSD$

MODPY_EGG_VERSION =	5.0.0
TRYTON_MODULE =		account_invoice

TRYTON_DEPENDS +=	account
TRYTON_DEPENDS +=	account_product
TRYTON_DEPENDS +=	company
TRYTON_DEPENDS +=	party
TRYTON_DEPENDS +=	product

RUN_DEPENDS +=		devel/py-dateutil${MODPY_FLAVOR}
RUN_DEPENDS +=		databases/py-sql${MODPY_FLAVOR}

.include <bsd.port.mk>
