#include<iostream>
using namespace std;
int sumArray(int arr[], int size){
    cout<<"print array"<<endl;
     int sum =0;
    for(int i = 0; i<size; i++){
       
        sum+= arr[i];
        //cout<<sum<<endl;
    }
    return sum;

}
int main(){
    int arr[100];
    int size;
    cout<<"enteer size of array: "<<endl;
    cin>>size ;
    cout<<"enter array: "<<endl;
    for(int i = 0; i<5;i++){
        cin>>arr[i];
    }
    
    
    //size ki value deni rehtii h
   cout<< sumArray(arr,5)<<endl; 
   return 0;

}