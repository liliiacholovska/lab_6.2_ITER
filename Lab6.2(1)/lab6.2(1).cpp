#include <iostream>
#include <climits>

using namespace std;

void fillArray(int arr[], int n) {
    cout << "Enter " << n << " elements for the array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i]; 
    }
}

void printArray(const int arr[], int n) {
    cout << "Array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void findMinMax(const int arr[], int n, int& min, int& max) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
}

int main() {
    int n; 
    cout << "Enter the size of the array: ";
    cin >> n;
    
    if (n <= 0) {
        cerr << "Invalid array size\n";
        return 1;
    }

    int* arr = new int[n];

    fillArray(arr, n);
    printArray(arr, n);

    int minValue = INT_MAX, maxValue = INT_MIN;
    findMinMax(arr, n, minValue, maxValue);

    cout << "Min: " << minValue << endl;
    cout << "Max: " << maxValue << endl;

    delete[] arr;

    return 0;
}