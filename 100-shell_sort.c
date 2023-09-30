#include "sort.h"
/**
 * shell_sort - A function that sorts an array of integers in ascending order
 * @array: The array to be printed
 * @size: The size of the array
 */
void shell_sort(int *array, size_t size)
{
        size_t s, t;
	      int i;
	      size_t g = 1;

	      if (array == NULL || size < 2)
	      {
		            return;
	      }
	      while (g < (size / 3))
	      {
		            g = g * 3 + 1;
	      }
	      while (g >= 1)
	      {
		            for (s = g; s < size; s++)
		            {
			                  for (t = s; t >= g && array[g] < array[t - g]; t -= g)
			                  {
				                        i = array[t];
				                        array[t] = array[t - g];
				                        array[t - g] = i;
			                  }
		            }
		            g = g / 3;
		            print_array(array, size);
	       }
}