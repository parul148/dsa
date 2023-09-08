#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1, val=row;
        while(col<=row){
            cout<<val<<" ";
            val=val+1; // kyuki jitni row ka no h vja se pattern ke no ki starting hai
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}