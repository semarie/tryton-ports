# $OpenBSD: Makefile,v 1.3 2020/07/03 21:12:31 sthen Exp $

MODPY_EGG_VERSION =	5.2.2
TRYTON_MODULE =		analytic_account

TRYTON_DEPENDS +=	account \
			company \
			currency \
			party

RUN_DEPENDS +=		databases/py-sql${MODPY_FLAVOR}

.include <bsd.port.mk>
