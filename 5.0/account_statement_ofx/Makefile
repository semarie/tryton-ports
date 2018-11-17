# $OpenBSD$

MODPY_EGG_VERSION =	5.0.0
TRYTON_MODULE =		account_statement_ofx

TRYTON_DEPENDS +=	account_statement
TRYTON_DEPENDS += 	bank
TRYTON_DEPENDS +=	party

RUN_DEPENDS +=		textproc/py-ofxparse${MODPY_FLAVOR}

.include <bsd.port.mk>
