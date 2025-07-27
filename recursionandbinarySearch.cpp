//find if array is sorted or not
/*#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
    //base case
    if((size==0)||(size==1)){
        return true;
    }
    
    if(arr[0]>arr[1]){
        return false;
    }

    //recursive call
    else{
        bool remainingPart=isSorted(arr+1,size-1);
        return remainingPart;
    }
}
int main(){
    int arr[5]={1,2,36,4,5};

    int ans=isSorted(arr,5);

    if(ans){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array not sorted";
    }
}*/


//sum of all array elements using recursion
/*#include<iostream>
using namespace std;
int sumArray(int arr[],int n){
    //base case
    if(n==0){
        return 0;
    }

    //recursive condition
    int smallerProb=sumArray(arr,n-1);
    int bigProb=arr[n-1]+smallerProb;

    return bigProb;
}
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int result=sumArray(arr,n);
    cout<<"Sum of array elements is:"<<result<<endl;

    return 0;
}*/


//linearSearch
/*#include<iostream>
using namespace std;
bool linearSearch(int arr[],int size,int key){
    //base case
    if(size==0){
        return false;
    }
    if(arr[0]==key){
       return true; 
    }

    else{
        int remainingPart=linearSearch(arr+1,size-1,key);
        return remainingPart;
    }
}
int main(){
    int arr[5]={3,4,5,1,2};

    int ans=linearSearch(arr,5,6);

    if(ans){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }

}*/


//binary search
#include<iostream>
using namespace std;
bool binarySearch(int arr[], int s, int e, int key) {
    // base case
    if (s > e) {
        return false;
    }

    int mid = s + (e - s) / 2;

    // element found
    if (arr[mid] == key) {
        return true;
    }

    if (arr[mid] > key) {
        return binarySearch(arr, s, mid - 1, key);
    } else {
        return binarySearch(arr, mid + 1, e, key);
    }
}
int main(){
    int arr[6]={2,4,6,9,11,13};

    int ans=binarySearch(arr,0,5,13);

    if(ans){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
}