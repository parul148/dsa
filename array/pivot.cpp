#include<iostream>
using namespace std;
int pivot(int arr[], int n){
    int s =0, e= n-1, mid = (s+e)/2;

    while(s<=e){
        if(arr[mid]>= arr[0]){
            s = mid+1;

        }
        else{

            e = mid;
        }
        mid = (s+e)/2;
    }
    return s;
}

int main(){
    int arr[5]= { 8, 10, 17, 1, 3};
    cout<<"pivot element is: "<<pivot(arr, 5)<<endl;
}