#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "qsort.h"

int comparison_amount = 0;
int swap_amount = 0;

void quick_sort(int array[], int count) {
  comparison_amount = 0;
  swap_amount = 0;

  _quick_sort(array, 0, count - 1);
}

void print_counters() {
  printf("Comparison amount: %d\r\n", comparison_amount);
  printf("Swap amount: %d\r\n", swap_amount);
}

void _quick_sort(int * array, int from, int to) {
  int basic_index = _random_between(from, to);
  int basic = array[basic_index];

  int f = from, t = to;

  do {
    while(array[f] < basic) f++, comparison_amount++;
    while(array[t] > basic) t--, comparison_amount++;

    if(f <= t) {
      _swap(array, f, t);

      f++;
      t--;
    }
  } while (f < t);


  if (from < t) _quick_sort(array, from, t);
  if (f < to) _quick_sort(array, f, to);
}

int _random_between(int lo, int hi) {
  time_t t;
  srand((unsigned) time(&t));

  return ((rand() % (hi-lo+1)) + lo);
}

void _swap(int * array, int i1, int i2) {
  int i1_value = array[i1];

  array[i1] = array[i2];
  array[i2] = i1_value;

  swap_amount++;
}


