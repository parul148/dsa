#include<iostream>
using namespace std;

//1 -> prime no.
//0 -> not prime no.
bool isprime(int n)

{
    for(int i = 2;i<n; i++){

        //agr divide hota h to prime no nii h
    if (n%i == 0)
    {
        return 0;
    }
    }
    return 1;
}
int main()
{
    int n;
    cout<<"enter value of num: ";
    cin>>n;
    if (isprime(n))
    {
        cout<<"number is prime "<<endl;
        }else
        {
            cout<<"number is not prime"<<endl;
        }
    
    return 0;

}