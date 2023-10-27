#include <iostream>
using namespace std;

int main() {
  int number;
  cout << "Enter an integer: ";
  cin >> number;

  // If the number is less than 2, it's not prime.
  if (number < 2) {
    cout << "\nNot prime\n";
    return 0;
  }

  bool isPrime = true;
  for (int i = 2; i * i <= number; i++) {
    if (number % i == 0) {
      isPrime = false;
      break; // Exit the loop as soon as a divisor is found.
    }
  }

  if (isPrime)
    cout << "\nPrime\n";
  else
    cout << "\nNot prime\n";

  return 0;
}
