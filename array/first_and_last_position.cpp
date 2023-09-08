#include<iostream>
using namespace std;
int firstOccur(int arr[], int n, int key){
    int start = 0, end = n-1, mid = (start+end)/2;
    int ans = -1;


    while(start<=end){
        if(arr[mid]== key)
        {
            ans= mid;
            //firstOccur nikal rahe h to start to vahi rahega sirf end change hoga
            end = mid -1;

        }
        else if (key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start + end)/2;
    }
    return ans;
}

int lastOccur(int arr[], int n, int key){
    int start = 0, end = n-1, mid = (start+end)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid]== key)
        {
            ans= mid;
             //lastOccur nikal rahe h to end to vahi rahega sirf start change hoga

            start = mid +1;

        }
        else if (key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start + end)/2;
    }
    return ans;
}
int main()
{
    int even[5]={1,2,3,3,5};
    int odd[4]={0,0,0,1};
    cout<<"first occurenece of 3 is at index: "<<firstOccur(even,5, 3)<<endl;
    cout<<"last occurence of 3 is at index: "<<lastOccur(even,5,3)<<endl;
cout<<endl;
    cout<<"first occurenece of 0 is at index: "<<firstOccur(odd,4, 0)<<endl;
    cout<<"last occurence of 0 is at index: "<<lastOccur(odd,4,0)<<endl;
    
return 0;
}
