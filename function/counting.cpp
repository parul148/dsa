#include<iostream>
using namespace std;
int count(int n)
{
    //function body
    for(int i=1; i<n; i++){
        cout<<i <<" ";
    }
}
int main()
{
    int n;
    cout<<"enter value of n: ";
    cin>>n;

    //function call
    count(n); 
    return 0;
}