# $OpenBSD: Makefile,v 1.4 2020/07/03 21:12:34 sthen Exp $

MODPY_EGG_VERSION =	5.2.3
TRYTON_MODULE =		stock_supply

TRYTON_DEPENDS +=	account \
			party \
			product \
			purchase \
			purchase_request \
			stock

RUN_DEPENDS +=		databases/py-sql${MODPY_FLAVOR}

.include <bsd.port.mk>
