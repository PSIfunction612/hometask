//
// Created by psifunction on 20.10.2020.
//
#define BOOST_TEST_MODULE hello_test

#include <boost/test/auto_unit_test.hpp>
#include "lib.h"

BOOST_AUTO_TEST_SUITE(hello_test)

    BOOST_AUTO_TEST_CASE(hello_test_version) {
        BOOST_CHECK(version() > 0);
    }

BOOST_AUTO_TEST_SUITE_END()
