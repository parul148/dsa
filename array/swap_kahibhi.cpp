#include<iostream>
using namespace std;

int swapAlternate(int arr[], int n){
    /*int satrt = 0;
    int end = n-1;
    while (satrt <end) {
        swap(arr[start])*/

        for(int i =0; i<n-1 ; i+=2){
            swap(arr[i], arr[i + 1]);
        }
}

int printArray(int arr[], int size)
{
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int arr[6]={4, 5, 6, 7, -5, 0};
     swapAlternate(arr, 6);
    printArray(arr, 6);
    return 0;
}