#include<iostream>
#include<cmath>
using namespace std;
bool isArmstrong(int n){
    int original=n;
    int count=0;

    int temp=n;
    while(temp>0){
        count++;
        temp=temp/10;
    }

    int sum=0;
    temp=n;
    int digit=0;
    while(temp>0){
        digit=temp%10;
        sum=sum+round(pow(digit,count));
        temp=temp/10;

    }
    return sum==original;


}
int main(){
    int num=153;
    if(isArmstrong(num)){
        cout<<num<<" is an Armstrong number"<<endl;
    }
    else{
        cout<<num<<" not an Armstrong number"<<endl;
    }
    return 0;
}
