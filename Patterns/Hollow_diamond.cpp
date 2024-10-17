#include <iostream>
using namespace std;
int main() {
   int n = 4;

   // Upper part (including the middle row)
   for (int i = 0; i < n; i++) {
      // Print leading spaces
      for (int j = 0; j < n - i - 1; j++) {
         cout << " ";
      }
      
      // Print the first star
      cout << "*";
      
      // Print the spaces inside the hollow part
      if (i != 0) {
         for (int j = 0; j < 2 * i - 1; j++) {
            cout << " ";
         }
         // Print the second star
         cout << "*";
      }
      
      cout << endl;
   }
   
   // Lower part (excluding the middle row)
   for (int i = 1; i < n; i++) {
      // Print leading spaces
      for (int j = 0; j < i; j++) {
         cout << " ";
      }
      
      // Print the first star
      cout << "*";
      
      // Print spaces inside the hollow part
      if (i != n - 1) {
         for (int j = 0; j < 2 * (n - i) - 3; j++) {
            cout << " ";
         }
         // Print the second star
         cout << "*";
      }
      
      cout << endl;
   }

   return 0;
}
