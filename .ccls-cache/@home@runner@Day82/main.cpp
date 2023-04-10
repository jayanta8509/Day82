#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> t;
    string x, y;
    for (int i = 0; i < n; i++) {
      cin >> x;
      if (x[i] == '0') {
        y += '1';
      } else {
        x += '1';  
      }
    }
    cout << y << endl;
  }
}