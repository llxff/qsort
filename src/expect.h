#ifndef TASK_EXPECT_H
#define TASK_EXPECT_H

#define expect_true(caption, condition) _expect_true(caption, condition, __LINE__)
#define match_array(caption, expected, actual, count) _match_array(caption, expected, actual, count, __LINE__)

void _expect_true(char caption[], int condition, int line);
void _match_array(char caption[], int expected[], int actual[], int count, int line);

extern int tests_failed;

int tests_result_code();

#endif
