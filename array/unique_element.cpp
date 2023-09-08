/*#include<iostream>
using namespace std;
int uniqueElement(int arr[], int size){
    for(int i = 0; i<size; i++){
        //creating bool function 
        bool isUnique = true;
        for(int j =0; j<size; j++)
        {
            //comparing i and j
            //current element indexed by i is not equql to other element indexed by j
            if(i!= j && arr[i] == arr[j]){
                isUnique = false;
                break;
            }
        }
        if(isUnique){
            return arr[i];
        }
        }
        return -1;

    }


 void printArray(int arr[], int size){
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
  int arr[] = {2, 4, 6, 1, 1};
  int n = sizeof(arr) / sizeof(arr[0]);

  int uniqueElement = uniqueElement(arr, n);
  if (uniqueElement != -1) {
    cout << "The unique element is " << uniqueElement << endl;
  } else {
    cout << "There is no unique element" << endl;
  }

  printArray(arr, n);

  return 0;
}
*/

// C++ program to print all distinct elements in a given array
#include <bits/stdc++.h>
using namespace std;

void printDistinct(int arr[], int n)
{
	// Pick all elements one by one
	for (int i=0; i<n; i++)
	{
		// Check if the picked element is already printed
		int j;
		for (j=0; j<i; j++)
		if (arr[i] == arr[j])
			break;

		// If not printed earlier, then print it
		if (i == j)
		cout << arr[i] << " ";
	}
}

// Driver program to test above function
int main()
{
	int arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	printDistinct(arr, n);
	return 0;
}
