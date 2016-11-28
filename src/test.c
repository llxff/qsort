#include <stdlib.h>

#include "expect.h"
#include "qsort.h"

void test_empty_array_length() {
  int array[] = {};
  expect_true("should return 0 if array is empty", length(array) == 0);
}

void test_length_of_array_with_elements() {
  int array[4] = {1, 2, 3, 4};
  expect_true("should return array length", length(array) == 4);
}

void test_my_qsort_with_sorted_elements() {
  int array[3] = {1, 2, 3};
  int expected[3] = {1, 2, 3};

  my_qsort(array, 3);

  match_array("should not modify array", expected, array, 3);
}

void test_my_qsort_with_two_not_sorted_elements() {
  int array[2] = {2, 1};
  int expected[2] = {1, 2};

  my_qsort(array, 2);

  match_array("should order array with two elements", expected, array, 2);
}

void test_my_qsort_with_several_not_sorted_elements() {
  int array[10] = {5, 1, 4, 6, 3, 2, 9, 8, 7, 0};
  int expected[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  my_qsort(array, 10);

  match_array("should order array", expected, array, 10);
}

int main(int argc, char *argv[])
{
  test_empty_array_length();
  test_length_of_array_with_elements();
  test_my_qsort_with_sorted_elements();
  test_my_qsort_with_two_not_sorted_elements();
  test_my_qsort_with_several_not_sorted_elements();

  return tests_result_code();
}
