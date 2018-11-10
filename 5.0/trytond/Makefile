# $OpenBSD$

COMMENT =		3-tiers general purpose business application framework

MODPY_EGG_VERSION =	5.0.0
DISTNAME =		trytond-${MODPY_EGG_VERSION}

TRYTON_PY =		Yes

SUBST_VARS +=		TRYTON_VERSION

RUN_DEPENDS +=		databases/py-psycopg2${MODPY_FLAVOR}
RUN_DEPENDS += 		textproc/py-lxml${MODPY_FLAVOR}
RUN_DEPENDS +=		print/py-relatorio${MODPY_FLAVOR}
RUN_DEPENDS +=		www/py-genshi${MODPY_FLAVOR}
RUN_DEPENDS +=		devel/py-dateutil${MODPY_FLAVOR}
RUN_DEPENDS +=		textproc/py-polib${MODPY_FLAVOR}
RUN_DEPENDS +=		databases/py-sql${MODPY_FLAVOR}
RUN_DEPENDS +=		www/py-werkzeug${MODPY_FLAVOR}
RUN_DEPENDS +=		devel/py-wrapt${MODPY_FLAVOR}
RUN_DEPENDS +=		security/py-passlib${MODPY_FLAVOR}
#RUN_DEPENDS +=		graphics/pydot	# optional, port is py2 only
#RUN_DEPENDS +=		levenshtein	# optional, not ported
#RUN_DEPENDS +=		bcrypt		# optional, not ported
RUN_DEPENDS +=		converters/py-html2text${MODPY_FLAVOR}


post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/trytond
	${SUBST_CMD} -m 0444 -c ${FILESDIR}/server.conf \
		${PREFIX}/share/examples/trytond/server.conf
	${SUBST_CMD} -m 0444 -c ${FILESDIR}/logging.conf \
		${PREFIX}/share/examples/trytond/logging.conf

.include <bsd.port.mk>
