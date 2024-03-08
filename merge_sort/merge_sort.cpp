#include <bits/stdc++.h>

void merge(int arr[], int left, int mid, int right) {
  // Create temporary arrays to hold left and right subarrays
  int n1 = mid - left + 1;
  int n2 = right - mid;
  int leftArr[n1], rightArr[n2];

  // Copy data to temporary arrays
  for (int i = 0; i < n1; i++) {
    leftArr[i] = arr[left + i];
  }
  for (int j = 0; j < n2; j++) {
    rightArr[j] = arr[mid + 1 + j];
  }

  // Merge the temporary arrays back into arr[left..right]
  int i = 0, j = 0, k = left;
  while (i < n1 && j < n2) {
    if (leftArr[i] <= rightArr[j]) {
      arr[k] = leftArr[i];
      i++;
    } else {
      arr[k] = rightArr[j];
      j++;
    }
    k++;
  }

  // Copy the remaining elements of leftArr[] if there are any
  while (i < n1) {
    arr[k] = leftArr[i];
    i++;
    k++;
  }

  // Copy the remaining elements of rightArr[] if there are any
  while (j < n2) {
    arr[k] = rightArr[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int left, int right) {
  if (left < right) {
    // Find the middle point
    int mid = floor((right + left) / 2);

    // Sort first and second halves
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    // Merge the sorted halves
    merge(arr, left, mid, right);
  }
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

int main() {
  int arr[] = {6, 5, 3, 1, 8, 7, 2};
  int n = sizeof(arr) / sizeof(arr[0]);

  std::cout << "Unsorted array: ";
  printArray(arr, n);

  mergeSort(arr, 0, n - 1);

  std::cout << "Sorted array: ";
  printArray(arr, n);

  return 0;
}
