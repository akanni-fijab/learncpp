//
// Created by pink on 9/23/26.
//

#include <iostream>
#include <string>

int main() {
  // Get usr input for names and ages. compare them and cout ehich is bigger
  std::cout << "Enter the name of person #1: ";
  std::string name1{};
  std::cin >> name1;

  std::cout << "Enter the age of :";
  int age1{};
  std::cin >> age1;

  std::cout << "Enter the name of person #2: ";
  std::string name2{};
  std::cin >> name2;

  std::cout << "Enter the age of person #2 ";
  int age2{};
  std::cin >> age2;

  if (age1 > age2) {
    std::cout << name1 << "(" << age1 << ")" << "older than " << name2 << "("
              << age2 << ")";
  }

  else {
    std::cout << name2 << "(" << age2 << ")" << "older than " << name1 << "("
              << age1 << ")";
  }
  return 0;
}
