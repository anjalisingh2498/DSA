#include <iostream>
using namespace std;

// Worst Time complexity - O(n^2) , Average and Best Time complexity - O(nlogn)
// Like Merge Sort, QuickSort is a Divide and Conquer algorithm. 
// It picks an element as a pivot and partitions the given array around the picked pivot. 
// There are many different versions of quickSort that pick pivot in different ways. 
// quickSort is inplace/interval sorting algorithm and is not stable(can be made stable by making some changes).


int partition(int a[],int lb,int ub){
        int pivot = a[lb];
        int start = lb;
        int end = ub;
        while(start<end){
            while(a[start]<= pivot){
                start++;
            }
            while(a[end]>pivot){
                end--;
            }
            if(start<end){
                swap(a[start],a[end]);
            }
        }
        swap(a[lb], a[end]);
        return end;
        }
    
void quickSort(int a[], int lb, int ub){
    if(lb<ub){
        return;
    }
    
    int p = partition(a, lb, ub);
    
    quickSort(a, lb, p-1);
    quickSort(a, p+1, ub);
}

int main()
{
    int n;
    cin >> n;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    
    quickSort(a, 0, n-1);
    
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}


