# $OpenBSD: Makefile,v 1.4 2019/04/28 20:51:48 sthen Exp $

MODPY_EGG_VERSION =	5.0.3
TRYTON_MODULE =		account_payment_clearing

TRYTON_DEPENDS +=	account_payment

TEST_DEPENDS +=		devel/py-dateutil${MODPY_FLAVOR}

TRYTON_TEST_DEPENDS +=	account_statement

.include <bsd.port.mk>
