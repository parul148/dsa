#include<iostream>
using namespace std;

int reverse(int arr[],int n)
{
    int start =0;
    int end= n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end --;
    }
}
int printArray(int arr[], int size){
    for(int i=0;i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main()
    {
        //even array
        int arr[6]={1, 4, 0, 5 , -2, 15};
        //odd array
        int brr[5]={2, 6, 3, 9, 4};
        //array aur uska size

        //calling reverse function
        reverse(arr,6);
        reverse(brr,5);

        //calling print function
        printArray(arr, 6);
        printArray(brr,5);

        return 0;

    }
