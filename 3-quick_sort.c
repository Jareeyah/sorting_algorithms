#include "sort.h"

/**
 * swap_int - This program swaps two integers
 * @first: The first value
 * @sec: The second value
 * Return: Nothing
 */
void swap_int(int *first, int *sec)
{
        int temp;

	      temp = *first;
	      *first = *sec;
	      *sec = temp;
}
/**
 * dvide_array - This program divides an array
 * @array: The array to be dividedT
 * @size: The size of the array
 * @first: The first value
 * @sec: The second value
 * Return: the int
 */
int divide_array(int *array, int first, int sec, size_t size)
{
        int p = array[sec];
	      int i = first - 1, j;

	      for (j = first; j <= sec; j++)
	      {
		            if (array[j] <= p)
		            {
			                  i++;
			                  if (i != j)
			                  {
				                        swap_int(&array[i], &array[j]);
				                        print_array(array, size);
			                  }
		            }
	      }
        return (i);
}
/**
 * sort_array - A program that sorts an array
 * @array: The array to be sorted
 * @size: The size of the array
 * @first: The first value of an array
 * @sec: The second value of an array
 * Return: Nothing
 */
void sort_array(int *array, int first, int sec, size_t size)
{
        int x;

	      if (first < sec)
	      {
		            x = divide_array(array, first, sec, size);
		            sort_array(array, first, x - 1, size);
		            sort_array(array, x + 1, sec, size);
	      }
}
/**
 * quick_sort - A function that sorts an array of integers
*  in ascending order
 * @array: Array to sort
 * @size: Size of The Array
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
        sort_array(array, 0, size - 1, size);
}