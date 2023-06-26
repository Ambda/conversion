#include <iostream>

using namespace std;

int digSum(int n) {
  if (n == 0)
    return 0;
  return (n % 9 == 0) ? 9 : (n % 9);
}

int main() {
  int n;
  cout << "Enter number: ";
  cin >> n;
  cout << digSum(n);
  return 0;
}
