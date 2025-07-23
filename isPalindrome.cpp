#include<iostream>
using namespace std;
 int reverseNumber(int n){
        int digit=0;
        int reversed=0;
        while(n>0){
            digit=n%10;//find the end digit
            reversed=reversed*10+digit;//update the reversed function
            n=n/10;//update n
        }
        return reversed;//return reversed
    }
    bool isPalindrome(int n) {
        if(reverseNumber(n)==n){//if the reveresed number = number ; then the number is palindrome
            return 1;
        }
        else {
            return 0;
        }
    }
int main(){
   cout<<isPalindrome(1221);
}