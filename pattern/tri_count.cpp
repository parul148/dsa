/*#include<iostream>
using namespace std;
int main()
{
    /*int n;
    cin>>n;
    int row=1;
    int count =1;
    while(row<=n) {
        int col=1;
        while(col<=row){
            cout<<count<<"";
            count=count+1;
        }
        count=1;
        cout<<endl;
        row=row+1;
    }*/

/*int n;
cin>>n;
for(int row=1;row<n; row++)
{
    for(int j= 1; j<=row; j++)
    {
    cout<<j<<" ";
    j=j+1;
}
cout<<endl;
row=row+1;
}

}*/

#include<iostream>
using namespace std;
int main()
{
    int i, j, num=1, rowSize;
    cout<<"Enter Row Size: ";
    cin>>rowSize;
    cout<<"\nFloyd's Triangle of "<<rowSize<<" Lines:\n";
    for(i=0; i<rowSize; i++)
    {
        for(j=0; j<=i; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}