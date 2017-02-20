#include "parser.h"
#include "unity.h"

void test_get_colon()
{
  char chordname[] = "cis:7";
  TEST_ASSERT_NOT_NULL(get_colon(chordname));
  TEST_ASSERT_EQUAL(':', *get_colon(chordname));
}

void test_get_slash()
{
  char chordname[] = "cis:7/f";
  TEST_ASSERT_NOT_NULL(get_slash(chordname));
  TEST_ASSERT_EQUAL('/', *get_slash(chordname));
}


void test_get_root_size()
{
  char chordname1[] = "cis2:7/f";
  TEST_ASSERT_EQUAL(4, get_root_size(chordname1));
  char chordname2[] = "cisis2/f";
  TEST_ASSERT_EQUAL(6, get_root_size(chordname2));
  char chordname3[] = "c4";
  TEST_ASSERT_EQUAL(2, get_root_size(chordname3));
}

void main(void)
{
  RUN_TEST(test_get_colon, 1);
  RUN_TEST(test_get_slash, 1);
  RUN_TEST(test_get_root_size, 1);
}
