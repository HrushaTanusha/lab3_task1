//
// Created by Tatsiana Shybko 28.02.2023
//


// Client file

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void) {
  printf("The number of students is: %i", 23);
  
  static int students1[23];
  srand(time(NULL));
  printf("\nThe growth of first grade students: ");
  for (int i = 0; i < 23; i++) {
    students1[i] = rand() % 1000;
    printf("\n%i", students1[i]);
  }
  sort(students1);
  
  sleep(1);
  
  static int students2[23];
  srand(time(NULL));
  printf("\nThe growth of second grade students: ");
  for (int i = 0; i < 23; i++) {
    students2[i] = rand() % 1000;
    printf("\n%i", students2[i]);
  }
  sort(students1);
  
  if (students1[2] > students2[2]) {
    printf("\n%i > %i \nfrom first class", students1[2], students2[2]);
  } else if (students1[2] < students2[2]) {
    printf("\n%i < %i \nfrom second class", students1[2], students2[2]);
  } else if (students1[2] == students2[2]) {
    printf("\n%i = %i \nfirst = second", students1[2], students2[2]);
  }

  return 0;
}