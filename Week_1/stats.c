/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief This program finds information on a given array and prints it
 *
 * The main purpose of this program is to take an array which is declared in
 * the main function, and find common features of the dataset. It can find
 * mean, median, maximum, and minimum numbers within the dataset. It can also
 * print and sort the array using bubble sort.
 * 
 * There is also one final function that will print the entire array to the
 * screen, and another function that prints the mean, median, maximum, and
 * minimum to the screen.
 * 
 * Within the main function, it will call the array_sort, print_array, and 
 * print_statistics function. This way, all functions are tested to see if
 * they properly worked.
 *
 * @author Michael Sullivan
 * @date 7/12/23
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};


  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  sort_array(test, SIZE);
  print_array(test, SIZE);
  print_statistics(test, SIZE);

}

void print_statistics(unsigned char* array, unsigned int size){

  printf("Minimum: %d\n", find_minimum(array, size));
  printf("Maximum: %d\n", find_maximum(array, size));
  printf("Mean: %.2f\n", find_mean(array, size));
  printf("Median: %.2f\n", find_median(array, size));

}

void print_array(unsigned char* array, unsigned int size){

  for(int i = 0; i < size; i++){
      printf("%d: %d\n", i, array[i]);
  }

}

double find_median(unsigned char* array, unsigned int size){
  
  sort_array(array, size);

  if(size % 2 == 0){
    return ((array[size/2] + array[size/2 + 1])/2.0);
  }
  else{
    return (array[size/2 + 1]);
  }

}

double find_mean(unsigned char* array, unsigned int size){

  unsigned int total = 0;

  for(unsigned int i = 0; i < size; i++){
    total += array[i];
    printf("Adding %d to %d on number %d \n", array[i], total, i);
  }
  return (double)total / size;

}

int find_maximum(unsigned char* array, unsigned int size){

  int max = 0;

  for(int i = 0; i < size; i++){
    if(array[i] > max){
      max = array[i];
    }
  }

  return max;
}

int find_minimum(unsigned char* array, unsigned int size){

  int min = array[0];

  for(int i = 0; i < size; i++){
    if(array[i] < min){
      min = array[i];
    }
  }

  return min;
}

void sort_array(unsigned char* array, unsigned int size){

  unsigned char temp;

  for(int i = 0; i < size - 1; i++){
    for(int j = 0; j < size - i - 1; j++){
      if(array[j] >= array[j + 1]){
        temp = array[j];
        array[j] = array[j + 1];
        array[j+1] = temp;
      }
    }
  }


}
/* Add other Implementation File Code Here */
