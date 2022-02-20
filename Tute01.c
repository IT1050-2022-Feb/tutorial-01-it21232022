/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int num1, num2;
  float sum, avg;
  printf("Enter the mark 1st subject :");
  scanf("%d", &num1);
  printf("Enter the mark 2nd subject :");
  scanf("%d", &num2);
  sum = num1 + num2;
  avg = sum/2;
  printf("Average of two subjects = %.1f\n", avg);
  
  return 0;
}

