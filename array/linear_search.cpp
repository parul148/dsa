#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    for(int i= 0; i<size; i++)
    {
        if(arr[i]==key){
            //agr miltah to 1 retrn krna h
            return 1;       }
            
    }
  return 0;
}

int main() {
  int size;
  cout << "enter size of array : " << endl;
  cin >> size;
  int arr[size];
  cout << "enter array: " << endl;
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  int key;
  cout<<" enter key: "<<endl;
  cin >> key;
  bool found = linearSearch(arr, size, key);
  if (found) {
    cout << "key is present" << endl;
  } else {
    cout << "not present" << endl;
  }
  return 0;
}
