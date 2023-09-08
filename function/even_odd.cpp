#include<iostream>
using namespace std;
bool iseven(int a){
    if (a& 1)
    {
        return 0;
        /* code */
    }
    return 1;
    
}
int main()
{
    int num;
    cout<<"enter number : ";
    cin>>num;
    if (iseven(num))
    {
        cout<<"number is even "<<endl;
        }else
        {
            cout<<"number is odd"<<endl;
        }
    
    return 0;
}
