// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int n =4;
   int el =1;
   for(int i =0 ;i<n;i++){
       int space =0;
       while(space != i){
           cout<<"  ";
           space++;
       }
       while(space !=n){
           cout<<el<<" ";
           space++;
       }
       el++;
       cout<<endl;
       
   }

    return 0;
}