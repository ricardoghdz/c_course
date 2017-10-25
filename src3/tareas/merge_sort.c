// MergeSort(arr[], l,  r)
// If r > l
//      1. Find the middle point to divide the array into two halves:
//              middle m = (l+r)/2
//      2. Call mergeSort for first half:
//              Call mergeSort(arr, l, m)
//      3. Call mergeSort for second half:
//              Call mergeSort(arr, m+1, r)
//      4. Merge the two halves sorted in step 2 and 3:
//              Call merge(arr, l, m, r)

#include<stdio.h>
#include<ctype.h>
#include<cs50.h>

int *merge_sort(int *array, int l, int r);
int *merge_arrays(int *left_array, int *right_array);

int main(void) {

}

int *merge_sort(int *array, int l, int r) {
    int middle = (l + r)/2;
    int *left_array = merge_sort(array, l, middle);
    int *right_array = merge_sort(array, middle + 1, r);
    int *sorted_array = merge_arrays(left_array, right_array);

}

int *merge_arrays(int *left_array, int *right_array) {
    return {0,1,2,3,4,5};
}
