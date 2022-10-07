#include <iostream>

int main() {
  // Add your code below  
double km;
double miles;
std::cout << "Type a number in miles to convert to kilometres:\n";
std::cin >> miles;
km = miles * 1.609344;
std::cout << "That is " << km << "km.\n";
}