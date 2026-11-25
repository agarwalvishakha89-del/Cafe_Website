
#include <iostream>

using namespace std;
bool amstrong (int n) {
  int temp=n; int sum=0; int count =0;
  while (temp>0) {
    count++;
    temp/=10;
  }
  temp=n;
  while (temp>0) {
    int digit = temp%10;
    int power =1;
    for (int i=0; i<count; i++) {
      power*=digit; 
  }
  sum +=power;
  temp/=10;
 return sum==n; 
}
void amstronginrange (int start,  int end) {
  for (int i=start; i<=end; i++) {
    if (amstrong(i)) {
      cout << i <<" ";
    }
  }
}
int main () {
  int start, end;
  cout << "Enter the range (start and end): ";
  cin >> start >> end;
  cout << "Armstrong numbers in the range " << start << " to " << end << " are: ";
  amstronginrange(start, end);
  return 0;
}
