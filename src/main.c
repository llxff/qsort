#include <stdio.h>
#include <string.h>

#include "qsort.h"

void inspect(int * array, int count) {
  if(count == 0) {
    printf("[]\n\n");
  }
  else
  {
    printf("[");

    for(int i = 0; i < count; i++) {
      printf("%d", array[i]);

      if(i != count - 1) {
        printf(",");
      }
    }

    printf("]\n\n");
  }
}

int main(int argc, char *argv[])
{
  printf("\033[0;33mCtrl + C for exit\033[0m\n\n");
  printf("\033[0;33mEnter size of array:\033[0m\n");

  int count;
  scanf("%d", &count);

  int array[count];

  for(int i = 0; i < count; i++) {
    array[i] = random_between(-500000, 500000);
  }

  inspect(array, count);

  printf("\n\033[0;33mSorting array...\033[0m\n");

  quick_sort(array, count);

  print_counters();

  printf("\n\033[0;33mResult:\033[0m\n");
  inspect(array, count);

  return 0;
}
