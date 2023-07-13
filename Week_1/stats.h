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
 * @file stats.h
 * @brief Header file for all the different functions
 *
 * This file is mainly to contain the function declarations of the different
 * functions that we used in the assignment. Each function is commented with
 * descriptions and purpose.
 *
 * @author Michael Sullivan
 * @date 7/12/23
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

void print_statistics(unsigned char* array, unsigned int size);

/**
 * @brief 
 *
 * The purpose of this function is to test and print all the different
 * arithmetic functions that we created.
 * 1st: Minimum
 * 2nd: Maximum
 * 3rd: Mean
 * 4th: Median
 * All of these are printed to the screen
 * 
 * @param <array> input array which will be used for all the print statements
 * @param <size> size of the input array
 *
 * @return <void> Return void since we are just printing
 */

void print_array(unsigned char* array, unsigned int size);

/**
 * @brief 
 *
 * The purpose of this function is to test and print all the different
 * values of the passed array.
 *
 * @param <array> input array which will be used to print
 * @param <size> size of the input array
 *
 * @return <void> Return void since we are just printing
 */

double find_median(unsigned char* array, unsigned int size);

/**
 * @brief 
 *
 * The purpose of this function is to find and return the median of the passed
 * in array and return it.
 *
 * @param <array> input array which will be used to calculate
 * @param <size> size of the input array
 *
 * @return <double> Return the median which could be fractional
 */

double find_mean(unsigned char* array, unsigned int size);

/**
 * @brief 
 *
 * The purpose of this function is to find and return the mean of the passed
 * in array and return it.
 *
 * @param <array> input array which will be used to calculate
 * @param <size> size of the input array
 *
 * @return <double> Return the mean which could be fractional
 */

int find_maximum(unsigned char* array, unsigned int size);

/**
 * @brief 
 *
 * The purpose of this function is to find and return the maximum of the
 * passed in array and return it.
 *
 * @param <array> input array which will be used to calculate
 * @param <size> size of the input array
 *
 * @return <int> Return the maximum value 
 */

int find_minimum(unsigned char* array, unsigned int size);

/**
 * @brief 
 *
 * The purpose of this function is to find and return the minimum of the
 * passed in array and return it.
 *
 * @param <array> input array which will be used to calculate
 * @param <size> size of the input array
 *
 * @return <int> Return the minimum value
 */

void sort_array(unsigned char* array, unsigned int size);

/**
 * @brief 
 *
 * The purpose of this function is to take in an array and sort it using
 * bubble sort. The array is passed by reference so we directly change
 * and sort the array that is passed through.
 *
 * @param <array> input array which will be used to calculate
 * @param <size> size of the input array
 *
 * @return <void> Array is changed by reference so no need to return
 */

#endif /* __STATS_H__ */
