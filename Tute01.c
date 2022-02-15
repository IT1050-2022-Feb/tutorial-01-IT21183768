/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

//IT21183768
#include <stdio.h>

int main()
{
  int marks1, marks2;
  float average;

  printf( "Enter The Number 1 : " );
  scanf( "%d", &marks1 );

  printf( "Enter The Number 2 : " );
  scanf( "%d", &marks2 );

  average = (marks1 + marks2) / 2.0;

  printf( "Your Average marks is : %.2f", average );
  
  return 0;
}

