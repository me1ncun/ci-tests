AC_PREREQ([2.69])
AC_INIT([program], [1.0], [shapovalov.denis@lll.kpi.ua])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
PKG_PROG_PKG_CONFIG
PKG_CHECK_MODULES([PROGRAM], [glib-2.0])
PKG_CHECK_MODULES([GTEST], [gtest])
AC_CHECK_HEADERS([gtest/gtest.h])
AC_SEARCH_LIBS([gtest], [gtest])
AC_PROG_CXX
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
