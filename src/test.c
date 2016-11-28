#include <stdlib.h>

#include "expect.h"
#include "qsort.h"

void test_empty_array_length() {
  int array[] = {};
  expect_true("should return 0 if array is empty", length(array) == 0);
}

void test_length_of_array_with_elements() {
  int array[] = {1, 2, 3, 4};
  expect_true("should return array length", length(array) == 4);
}

int main(int argc, char *argv[])
{
  test_empty_array_length();
  test_length_of_array_with_elements();

  return tests_result_code();
}
