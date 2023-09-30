#include "sort.h"
/**
 * selection_sort - A function that sorts an array of integers in ascending order
 * @array: The array to be printed
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
          unsigned int s, e, small, h;

	        if (size < 2)
		      return;
	        for (s = 0; s < size - 1; s++)
	        {
		              small = s;
		              for (e = s + 1; e < size; e++)
		              {
			            if (array[e] < array[small])
			            {
				                  small = e;
			            }
		              }
		              if (small != s)
		              {
			            h = array[s];
			            array[s] = array[small];
			            array[small] = h;
			            print_array(array, size);
		              }
	        }
}