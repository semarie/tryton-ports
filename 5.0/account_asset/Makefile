# $OpenBSD$

MODPY_EGG_VERSION =	5.0.0
TRYTON_MODULE =		account_asset

TRYTON_DEPENDS +=	account
TRYTON_DEPENDS +=	account_product
TRYTON_DEPENDS +=	product
TRYTON_DEPENDS +=	account_invoice

RUN_DEPENDS +=		devel/py-cached-property${MODPY_FLAVOR}
RUN_DEPENDS +=		devel/py-dateutil${MODPY_FLAVOR}

TRYTON_TEST_DEPENDS +=	purchase

.include <bsd.port.mk>
