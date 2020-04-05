# $OpenBSD: Makefile,v 1.3 2019/04/28 20:51:47 sthen Exp $

MODPY_EGG_VERSION =	5.0.3
TRYTON_MODULE =		account_dunning

TRYTON_DEPENDS += 	account \
			company \
			party

RUN_DEPENDS +=		databases/py-sql${MODPY_FLAVOR}

.include <bsd.port.mk>
