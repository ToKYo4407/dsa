//factorial
/*#include<iostream>
using namespace std;
int factorial(int n){

    //base case
    if(n==0){
        return 1;
    }

    int smallerProb=factorial(n-1);
    int biggerProb=n*smallerProb;

    return biggerProb;
}
int main(){
    int n;
    cin>>n;

    int ans=factorial(n);

    cout<<ans<<endl;
    return 0;

}*/



//power of 2
/*#include<iostream>
using namespace std;
int powerof2(int n){

    //base case
    if(n==0){
        return 1;
    }

    //recursive relation
    int smallerProb=powerof2(n-1);
    int bigProb=2*smallerProb;

    return bigProb;

}
int main(){
    int n;
    cin>>n;

    int ans=powerof2(n);
    cout<<"Power of n on 2 is:"<<ans;
}*/


//print numbers from 1 to n
/*#include<iostream>
using namespace std;
void print(int n){
    
    //base case
    if(n==0){
        return;
    }

    //recursive relation
    print(n-1);

    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;

    cout<<endl;
    print(n);

    return 0;
}*/


//sum of n numbers
/*
#include<iostream>
using namespace std;
int sum(int n){
    //base condition
    if(n==0){
        return 0;
    }

    //recursive relation
    int smallProb=sum(n-1);
    int bigProb=n+sum(n-1);

    return bigProb;

}

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<endl;

    int ans=sum(n);
    cout<<"The sum of n numbers is:"<<ans<<endl;


}
*/


//print name n times
/*#include<iostream>
using namespace std;
void printName(int n,int i=1){
    //base case
    if(i>n){
        return;
    }

    //recursive condition
    cout<<"Ishita"<<endl;
    printName(n,i+1);
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    printName(n);

    return 0;
}
*/



//reverse array
/*
#include <iostream>
using namespace std;

void reverseArray(int arr[], int s, int e) {
    if (s >= e)
        return;

    // Swap elements at positions s and e
    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;

    // Recursive call
    reverseArray(arr, s + 1, e - 1);
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Call reverse with s = 0, e = n-1
    reverseArray(arr, 0, n - 1);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
*/