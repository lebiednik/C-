#include <iostream>
using namespace std;

int main() {
  string text = "Hello Tristan";
  cout << text + "\n";
  int sum = 0;
  for (int i = 0; i < 5; i++) { //for loop
    cout << i << "\n";
    sum += i;
    cout << sum << "\n";
  }
  bool truthTeller = true;
  while (truthTeller){
    cout << "Enter a number between 1 and 100:";
    cin >> sum;
    if ( sum >= 1 && sum <= 100){
        truthTeller = false;
    }
  }
  return 0;
}
