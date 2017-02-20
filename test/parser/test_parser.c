#include "parser.h"
#include "unity.h"

void test_get_colon()
{
  char chordname[] = "cis:7";
  TEST_ASSERT_NOT_NULL(get_colon(chordname));
}


void main(void)
{
  RUN_TEST(test_get_colon, 1);

}
