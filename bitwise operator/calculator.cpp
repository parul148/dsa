#include<iostream>
using namespace std;
int main(){
    /*int a =3;
    int b = 4;
       cout << "a +b ="<< (a+b) <<" "<<endl;
       cout << "a -b ="<< (a-b) <<" "<<endl;
        cout << "a *b ="<< (a*b) <<" "<<endl;
         cout << "a /b ="<< (a/b) <<" "<<endl;*/

         char op;
         int a= 3, b=4;
         cout<<"enter operator: ";
         cin>>op;
         switch (op)
         {
         case '+': cout<<"a+b= "<<(a+b)<<" "<<endl;
            /* code */
            break;
            case '-':  cout << "a -b ="<< (a-b) <<" "<<endl;
            break;
            case '*' :  cout << "a *b ="<< (a*b) <<" "<<endl;
            break;
            case '/' : cout << "a +b ="<< (a+b) <<" "<<endl;
            break;
         
         default: cout<<"default"<<endl;
         }
         cout<<endl;
         return 0;
}