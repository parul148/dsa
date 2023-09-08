#include<iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for(int i =0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapAlternate(int arr[], int size){
    for(int i =0;i<size; i+=2)//ki hume 2 baar aage bdhana h 
    //agr ek baar agge bhadte to fir same value swap ho jate
    {
        if(i+1<size)
        {
            swap(arr[i], arr[i+1]);
        }
    }
}
int main(){
    int arrEven[8]={5,2,9,4,7,6,1,0};
    int arrOdd[5]={11,33,9,76,43};
    
    //phele swap krenge fir print krenge
    
     swapAlternate(arrEven, 8);
        printArray(arrEven, 8);
       
swapAlternate(arrOdd, 5);
        printArray(arrOdd, 5);
        


    return 0;


}