//pass by value means that the fucntion called here dummy makes the copy of n and edits and makes changes to it
// but these changes are not part of the main functions n value and there is no change to it 
#include<iostream>
using namespace std;
void dummy(int n){
    n++;
    cout<<"n is: "<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    
    dummy(n);

    cout<<"number n is: "<<n<<endl;
}