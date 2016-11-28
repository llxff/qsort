#ifndef TASK_QSORT_H
#define TASK_QSORT_H

#define length(x) (sizeof(x)/sizeof(int))

void quick_sort(int array[], int count);

void print_counters();

void _quick_sort(int * array, int from, int to);

int _random_between(int lo, int hi);

void _swap(int * array, int i1, int i2);

#endif
