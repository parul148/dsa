#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
//int key;

int start =0;
int end = size-1;
int mid= (start + end)/2;

while(start<= end){
    if(arr[mid]== key){
        return mid;
    }
     if(arr[mid]>key)
    {
        //go to left part
        end= mid -1;
    }
    else{
        //go to right side
        start = mid +  1;
    }

       //mid phir change hoga
    mid = (start+end)/2;
    
}

//returning nothing
//value h hi nii array m
return -1;
}

int main(){
int even[6] = {2,4,6,8,12,18};
int odd[5]={3,8,11,14,16};

int index = binarySearch(even, 6, 8);

cout<<" index of element to be searched: "<< index<<endl;
int oddIndex = binarySearch(odd, 5, 15);

cout<<"index of searches element : "<<oddIndex<<endl;

return 0;
}