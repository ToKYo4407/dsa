#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    //base case
    if((n==0)||(n==1)){
        return;
    }

    //ith largest elemnt sorted so array size becomes n-1
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    
    //bubble sort
    bubbleSort(arr,n-1);
}
int main(){
    int arr[6]={1,23,4,55,32,5};

    cout<<"Sorted array is:";
    bubbleSort(arr,6);

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

}