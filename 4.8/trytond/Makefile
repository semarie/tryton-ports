# $OpenBSD$

COMMENT =		3-tiers general purpose business application framework

MODPY_EGG_VERSION =	4.8.4
DISTNAME =		trytond-${MODPY_EGG_VERSION}

TRYTON_PY =		Yes

RUN_DEPENDS +=		databases/py-psycopg2${MODPY_FLAVOR}
#RUN_DEPENDS +=		databases/py-mysql${MODPY_FLAVOR} # port py2 only
RUN_DEPENDS += 		textproc/py-lxml${MODPY_FLAVOR}
RUN_DEPENDS +=		print/py-relatorio${MODPY_FLAVOR}
RUN_DEPENDS +=		www/py-genshi${MODPY_FLAVOR}
RUN_DEPENDS +=		devel/py-dateutil${MODPY_FLAVOR}
RUN_DEPENDS +=		textproc/py-polib${MODPY_FLAVOR}
RUN_DEPENDS +=		databases/py-sql${MODPY_FLAVOR}
RUN_DEPENDS +=		www/py-werkzeug${MODPY_FLAVOR}
RUN_DEPENDS +=		devel/py-wrapt${MODPY_FLAVOR}
#RUN_DEPENDS +=		graphics/pydot	# optional, port is py2 only
#RUN_DEPENDS +=		levenshtein	# optional, not ported
#RUN_DEPENDS +=		bcrypt		# optional, not ported
RUN_DEPENDS +=		converters/py-html2text${MODPY_FLAVOR}

TEST_DEPENDS +=		devel/py-mock${MODPY_FLAVOR}
# TODO: test dependencies
# ipaddress
# python-magic

.include <bsd.port.mk>
