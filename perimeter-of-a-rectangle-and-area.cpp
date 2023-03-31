#include <iostream>

using namespace std;

int main() {
  int number1, number2, result1, result2;

  cout << "Enter Length of Rectangle: ";
  cin >> number1;
  cout << "Enter the width of Rectangle: ";
  cin >> number2;

  result1 = number1 * number2;

  result2 = 2 * (number1 + number2);

  cout << "Area of Rectangle is: " << result1 << endl;
  cout << "Perimeter of Rectangle is: " << result2 << endl;
  
  return 0;
}