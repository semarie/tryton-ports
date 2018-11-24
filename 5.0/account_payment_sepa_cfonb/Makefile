# $OpenBSD$

MODPY_EGG_VERSION =	5.0.0
TRYTON_MODULE =		account_payment_sepa_cfonb

TRYTON_DEPENDS +=	account_payment
TRYTON_DEPENDS +=	account_payment_sepa
TRYTON_DEPENDS +=	company
TRYTON_DEPENDS +=	bank
TRYTON_DEPENDS +=	party

RUN_DEPENDS +=		www/py-genshi${MODPY_FLAVOR}
RUN_DEPENDS +=		textproc/py-lxml${MODPY_FLAVOR}

TEST_DEPENDS +=		devel/py-mock${MODPY_FLAVOR}

.include <bsd.port.mk>
