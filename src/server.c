//
// Created by Tatsiana Shybko 28.02.2023
//

// Sort function for main.c


#include <stdio.h>
#include <stdlib.h> 

void sort(int *a) {
  for (int i = 0; i < 22; i++) {
    // сравниваем два соседних элемента.
    for (int j = 0; j < 22 - i; j++) {
      if (a[j] < a[j + 1]) {
        // если они идут в неправильном порядке, то меняем их местами.
        int tmp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = tmp;
      }
    }
  }
}