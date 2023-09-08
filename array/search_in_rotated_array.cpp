#include<iostream>
using namespace std;
int getPivot( int arr[], int n, int key){
    int s= 0, e = n-1, mid =(s+e)/2;
    while(s<=e){
        if(arr[mid]>=arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = (s+e)/2;
    }
    return s;
}


int binarySearch(int arr[], int s,int e, int key){
//int key;

int start = s;
int end = e;
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


int findPosition(int arr[], int n, int key ){
    int pivot = getPivot(arr, n, key);

    if(key> arr[pivot] && key<= arr[n-1]){
        return binarySearch(arr, pivot, n-1, key);
    }
    else{
        return binarySearch(arr, 0, pivot - 1, key);
    }
}
int main(){
    int arr[4]={2,3,5,8};
    cout<<"element is present at : "<<findPosition(arr, 4, 3)<<endl;
}