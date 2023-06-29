#include <cassert>

#include <csvp.hpp>

#include "tests.hpp"


void TESTCASE_csvp_getTwo__2_should_be_returned()
{
    log_testcase_entry(__FILE__, __func__);
    assert(csvp::getTwo() == 2);
}