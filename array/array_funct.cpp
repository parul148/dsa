#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
 cout<<"print the array"<<endl;
//print the array
for(int i = 0; i<size; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"printing done"<<endl;
}

int main(){
    //declare
    int number[15];

    //accesing array
    cout<<"value at 14 index: "<<number[14]<<endl; // number[14] means index value 14 ki

    //initializing array
    int second[3]={5,7,11};

    //accesing element
    cout<<"value at 2 index: "<<second[2]<<endl;

    int third[15]= {2,7}; 

    //int n=15;
    printArray(third, 15);

    int fourth[10]={1};
    printArray(fourth, 10);
}