// Insertion Sort

#include <iostream>
using namespace std;

// Function to sort array using insertion sort 

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;

        /* Move elements of arr[0..i-1], that are
           greater than temp,to one position ahead
           of their current position */

        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

// for print array

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";     
    cout << endl;
}

int main()
{
    int arr[5] ;
     int n = sizeof(arr) / sizeof(arr[0]);
    for(int k=0;k<n;k++){
        cin>>arr[k];
    }

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}