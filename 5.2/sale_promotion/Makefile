# $OpenBSD: Makefile,v 1.3 2019/04/03 06:27:29 semarie Exp $

MODPY_EGG_VERSION =	5.2.0
TRYTON_MODULE =		sale_promotion

TRYTON_DEPENDS +=	company \
			product \
			product_price_list \
			sale \
			sale_price_list

RUN_DEPENDS +=		devel/py-simpleeval${MODPY_FLAVOR}

.include <bsd.port.mk>
