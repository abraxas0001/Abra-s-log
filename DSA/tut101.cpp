//bubble sort
#include<iostream>
using namespace std;
int main(){

    int i,j,temp,n;
    
    cout<<"Enter the size of an array: \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array: \n";
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cin>>arr[i];

    }
    //int arr[8]={34,535,25,36,46,2,6,74,};
    cout<<"unsorted array: \n";
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        for(int j=i+1;j<sizeof(arr)/sizeof(arr[0]);j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
    cout<<"sorted element: \n";
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<"\t";

    }

    return 0;
}