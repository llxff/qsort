#include <stdio.h>

#include "expect.h"

int tests_failed = 0;

void _expect_true(char caption[], int condition, int line) {
  if(condition) {
    printf("\033[0;32m");
  }
  else {
    tests_failed = 1;
    printf("[%d] ", line);
    printf("\033[0;31m");
  }

  printf("%s", caption);
  printf("\033[0m\n");
}

void _match_array(char caption[], int expected[], int actual[], int count, int line) {
  int i;
  
  for(i = 0; i < count; i++) {
    if(expected[i] != actual[i]) {
      _expect_true(caption, 0, line);
      return;
    }
  }

  _expect_true(caption, 1, line);
}

int tests_result_code() {
  return tests_failed;
}
