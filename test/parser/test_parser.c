#include "parser.h"
#include "unity.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_myfunc(void)
{
  TEST_ASSERT_EQUAL(0, myfunc());
}

void main(void)
{
  RUN_TEST(test_myfunc, 1);

}
