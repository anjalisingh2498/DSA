void display(int arr[], int n){
    int i;
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void SelectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
      int min_index=i;
        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before Sorting"<<endl;
    display(arr,n);
  
    cout<<"After Sorting"<<endl;
    SelectionSort(arr,n);
     for(int i=0;i<=n;i++){
        cout<<arr[i]<<"  ";
    }
    
        

    return 0;
}

