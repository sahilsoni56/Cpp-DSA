// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n =4;
    int el =1;
    
    for(int i =1 ; i<=n ;i++){
        for(int j = 0 ; j<i;j++){
            cout<<el;
            el = el+1;
        }
       
        cout<<endl;
    }

    return 0;
}