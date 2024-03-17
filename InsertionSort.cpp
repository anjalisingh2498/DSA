
//Insertion Sort:- is a sorting algorithm which is very similar to selection sort ,instead of finding the minimum in unsorted portion,it takes the closet number to the unsorted portion and inserts it into  the sorted portion.
//Time complexity:- O(n^2) (worst& average) 
//Each element has to be compared with each of the other elements so, for every nth element, (n-1) number of comparisons are made.Thus, the total number of comparisons = n*(n-1) ~ n2
//Time complexity:- O(n)  (best)
//Space complexity:- O(1)

void insertionSort(int a[], int n){
    for(int i=1;i<n;i++){
       int temp=a[i];
       int j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    insertionSort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
