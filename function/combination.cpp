#include<iostream>
using namespace std;
int factorial(int n){
    int fact =1;
    for(int i =1; i<=n ; i++){
        fact=fact*i;
    }
    return fact;
}
int nCr (int n, int r)
{
    int num = factorial(n);
    int denom = factorial(r) * factorial(n-r);
    int ans= num /denom; //nCr= n!/(n-r)!
    return ans;
}
int main(){
    int n, r;
    cout<< "enter value of n: ";
    cin>>n;
    cout<<"enter value of r : ";
    cin>>r;
    cout << "\nnC"<<r <<"="<<  nCr(n , r)<<endl;
}