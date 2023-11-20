#include "Ejercicio01.h"


int partition(int nums[], int n) {
    int pivot = nums[n - 1];
    int i = -1;

    for (int j = 0; j < n; j++)
    {
        if (nums[j] < pivot) {
            i++;
            int aux = nums[i];
            nums[i] = nums[j];
            nums[j] = aux;
        }
    }

    i++;
    int aux = nums[i];
    nums[i] = nums[n - 1];
    nums[n - 1] = aux;

    return i;
}

void quicksort(int nums[], int n) {
    if (n <= 1)
        return;
    int pi = partition(nums, n);
    quicksort(nums, pi);
    quicksort(nums + pi + 1, n - pi - 1);
}


int Ejercicio01::findMin(int nums[], int n)
{
    quicksort(nums, n);
    return nums[0];
}

