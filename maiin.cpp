
#include <iostream>

using namespace std;
void sum(int n) {
  if (n==0) {
    cout << n << endl;
return;
cout <<(n-1) << endl;
  }
  
     
}
    
int main () {
    int n;
    cin >> n;
   sum(n);
   cout << sum(n)<<"\n";
   return 0;
}