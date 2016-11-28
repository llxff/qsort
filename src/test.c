#include <stdlib.h>

#include "expect.h"
#include "qsort.h"

void test_qsort() {
  expect_true("should be true", 1);
}

int main(int argc, char *argv[])
{
  test_qsort();

  return tests_result_code();
}
