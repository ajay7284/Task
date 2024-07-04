#include <iostream>

using namespace std;

int removeDuplicates(int nums[], int n) {
  // Handle empty or single element cases
  if (n == 0 || n == 1) {
    return n;
  }

  // Initialize a write pointer to track the position of unique elements
  int j = 0;
  for (int i = 0; i < n - 1; i++) {
    // If current element is different from next, it's unique, copy it
    if (nums[i] != nums[i + 1]) {
      nums[j] = nums[i];
      j++;
    }
  }

  // Copy the last element as it might be unique
  nums[j] = nums[n - 1];
  j++;

  // Return the number of unique elements (write pointer position)
  return j;
}

int main() {
  int nums[] = {1, 1, 2};
  int k = removeDuplicates(nums, sizeof(nums) / sizeof(nums[0]));
  cout << "Unique elements: " << k << ", Modified array: ";
  for (int i = 0; i < k; i++) {
    cout << nums[i] << " ";
  }
  // Print remaining elements with underscores (assuming undefined behavior)
  for (int i = k; i < sizeof(nums) / sizeof(nums[0]); i++) {
    cout << "_" << " ";
  }
  cout << endl;

  // Another example
  int nums2[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
  k = removeDuplicates(nums2, sizeof(nums2) / sizeof(nums2[0]));
  cout << "Unique elements: " << k << ", Modified array: ";
  for (int i = 0; i < k; i++) {
    cout << nums2[i] << " ";
  }
  for (int i = k; i < sizeof(nums2) / sizeof(nums2[0]); i++) {
    cout << "_" << " ";
  }
  cout << endl;

  return 0;
}
