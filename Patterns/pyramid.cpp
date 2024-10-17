#include <iostream>
using namespace std;
int main() {
   int n=8;
   for(int i =1 ;i<=n;i++){
       int el =1;
       for(int j =0 ;j<n-i;j++){
           cout<<"  ";
       }
       for(int k=1;k<=i;k++){
           cout<<el<<" ";
           el = el+1;
       }
       for(int h = i-1 ; h>=1 ; h--){
              cout<<h<<" ";

       }
       cout<<endl;
   }

    return 0;
}