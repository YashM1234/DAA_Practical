//Aim: Write a program to implement binary search using divide and conquer strategy.
#include <stdio.h>

int binarySearch(int array[], int find, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

    // If found at mid, then return it
    if (array[mid] == find)
      return mid;

    // Search the left half
    if (array[mid] > find)
      return binarySearch(array, find, low, mid - 1);

    // Search the right half
    return binarySearch(array, find, mid + 1, high);
  }

  return -1;
}

int main(void) {
  int array [50], n, i, find;
  printf("Enter the number of element you want to insert: ");
  scanf("%d", &n);
  printf("Enter any %d numbers: ", n);
  for(i=0;i<n;i++)
  {
      scanf("%d", &array[i]);
  }
  printf("Enter the element you want to find: ");
  scanf("%d",&find);
  int result = binarySearch(array, find, 0, n - 1);
  if (result == -1)
    printf("Element not found!");
  else
    printf("Element is present at index %d", result);
}