#include<iostream>
using namespace std;
int main() {
    double far, cel;
    cout<<"enter tempreature in farehnite: ";
    cin>>far;
   while(far>=-460){
    cel=(far- 32) * 5/9 ;
    cout<<"tempreature in celsius: "<<cel<<endl;
   }
   return 0;
}