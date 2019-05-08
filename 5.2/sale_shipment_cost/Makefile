# $OpenBSD: Makefile,v 1.4 2019/04/22 11:22:50 semarie Exp $

MODPY_EGG_VERSION =	5.2.0
TRYTON_MODULE =		sale_shipment_cost

TRYTON_DEPENDS +=	account_invoice \
			carrier \
			currency \
			sale \
			stock

TRYTON_TEST_DEPENDS +=	account \
			party \
			sale_promotion

.include <bsd.port.mk>
