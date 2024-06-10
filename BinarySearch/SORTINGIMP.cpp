#include <iostream>
#include <vector>
#include <algorithm>

// 1. Adding two given sorted arrays to a third array without sorting the result
void mergeArrays(const std::vector<int>& arr1, const std::vector<int>& arr2, std::vector<int>& arr3) {
    arr3.clear();
    arr3.insert(arr3.end(), arr1.begin(), arr1.end());
    arr3.insert(arr3.end(), arr2.begin(), arr2.end());
}

// 2. Adding two given sorted arrays to a third array in a sorted manner
void mergeArraysSorted(const std::vector<int>& arr1, const std::vector<int>& arr2, std::vector<int>& arr3) {
    arr3.clear();
    std::merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), std::back_inserter(arr3));
}

// 3. Merging two given sorted arrays in place without using a third array
void mergeInPlace(std::vector<int>& arr1, const std::vector<int>& arr2) {
    int m = arr1.size();
    int n = arr2.size();
    arr1.resize(m + n); // Resize arr1 to hold both arrays
    int i = m - 1, j = n - 1, k = m + n - 1;
    
    // Start merging from the end of both arrays
    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[k--] = arr1[i--];
        } else {
            arr1[k--] = arr2[j--];
        }
    }
    // Copy any remaining elements of arr2
    while (j >= 0) {
        arr1[k--] = arr2[j--];
    }
}

int main() {
    std::vector<int> arr1 = {1, 3, 5, 7};
    std::vector<int> arr2 = {2, 4, 6, 8};
    std::vector<int> arr3;

    // 1. Adding to given sorted arrays to a third array without sorting
    mergeArrays(arr1, arr2, arr3);
    std::cout << "Merged without sorting: ";
    for (int num : arr3) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 2. Adding to given sorted arrays to a third array in sorted manner
    mergeArraysSorted(arr1, arr2, arr3);
    std::cout << "Merged in sorted manner: ";
    for (int num : arr3) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 3. Merging two given sorted arrays in place without using a third array
    mergeInPlace(arr1, arr2);
    std::cout << "Merged in place: ";
    for (int num : arr1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
