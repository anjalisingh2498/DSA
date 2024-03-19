// Time Complexity: O(N log(N))
// Auxiliary Space: O(n)

/*
- The Merge Sort algorithm is a sorting algorithm that is based on the Divide and Conquer paradigm.
- In this algorithm, the array is initially divided into two equal halves and then they are combined in a sorted manner.
- It is stable sort algorithm and does not happen in-place and requires extra array to store the elements.

--> Merge Sort Working Process:

- Think of it as a recursive algorithm continuously splits the array in half until it cannot be further divided.
- This means that if the array becomes empty or has only one element left, the dividing will stop, i.e. it is the base case to stop the recursion.
- If the array has multiple elements, split the array into halves and recursively invoke the merge sort on each of the halves.
- Finally, when both halves are sorted, the merge operation is applied. 
- Merge operation is the process of taking two smaller sorted arrays and combining them to eventually make a larger one.
*/


#include <iostream>
using namespace std;

void merge(int arr[], int l, int r, int mid) {
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2]; // temp arrays

    for (int i = 0; i < n1; i++) {
        a[i] = arr[l + i];  
    }
    for (int i = 0; i < n2; i++) {
        b[i] = arr[mid + 1 + i];  
    }

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            arr[k] = a[i];
            k++;
            i++;
        } else {
            arr[k] = b[j];
            k++;
            j++;  
        }
    }

    while (i < n1) {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2) {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {  // Fix the condition to ensure valid array bounds
        int mid = l + (r - l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, r, mid);
    }
}

int main() {
    int arr[] = {15, 4, 31, 2, 1};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, arr_size - 1);

    for (int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

