#include <iostream>

using namespace std;

int main()
{
   int n;
   cout << "Enter a number: ";
   cin >> n;
   
   cout << "You entered: " << n << endl;
   
   for (int i = 1; i <= n; i++) {
     cout << i << " ";
   }
   cout << endl;
}
