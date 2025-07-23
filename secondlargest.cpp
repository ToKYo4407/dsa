//largest element of array
#include<iostream>
#include<vector>
#include <climits>
using namespace std;
int secondlargestElement(vector<int> nums){
    if(nums.size()<2){
        return -1;
    }
    int maxVal=INT_MIN;
    int secondMax=INT_MIN;

    for(int i=0;i<nums.size();i++){
        int current=nums[i];

        if(current>maxVal){
            secondMax=maxVal;
            maxVal=current;
        }
        else if(current<maxVal && current>secondMax){
            secondMax=current;
        }
        else if(secondMax==INT_MIN){
            return -1;
        }
    }
    return secondMax;
}
int main(){
    vector<int> arr={23,54,65,21,1};
    cout<<"Second largest element of array is:"<<secondlargestElement(arr);
    return 0;
}