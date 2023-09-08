#include<iostream>
using namespace std;
int ap(int n)
{
    int result = 0;
    for(int i= 0;i<=n; i++){
result = result + i;
    }

}
int main()
{
    int a, b;
    cout<<"enter value of a and b: ";
    cin>>a>>b;
    int n;
    cout<<"enter value of n: ";
    cin>>n;
    int ap= a*n+b;
    cout<<ap;
    return 0;
}