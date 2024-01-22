#include <iostream>
#include <vector>

int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (i <= j) {
        while (i <= j && arr[i] <= pivot) {
            ++i;
        }

        while (i <= j && arr[j] > pivot) {
            --j;
        }

        if (i <= j) {
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[low], arr[j]);
    return j;
}

void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

void quickSort(std::vector<int>& arr) {
    int low = 0;
    int high = arr.size() - 1;
    quickSort(arr, low, high);
}

int main() {
    std::vector<int> arr = {64, 25, 12, 22, 11};

    std::cout << "Original array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    quickSort(arr);

    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
