#include "sort.h"

/**
 * bubble_sort - A function that sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: The array to be printed
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
        int t;
	      size_t b = 0;
	      size_t s;

	      if (array == NULL || size < 2)
	      {
		            return;
	      }

	      while (b < size)
	      {
		            for (s = 0; s < size - 1; s++)
		            {
			                  if (array[s] > array[s + 1])
			                  {
				                        t = array[s];
				                        array[s] = array[s + 1];
				                        array[s + 1] = t;
				                        print_array(array, size);
			                  }
		            }
                b++;
	      }
}
