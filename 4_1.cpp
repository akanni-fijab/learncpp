#include <iostream>



int main() {
    std::cout << "Enter a double value: ";

    double first_no{};
    std::cin >> first_no;

    std::cout << "Enter a double value: ";
    double second_no{};
    std::cin >> second_no;

    std::cout << first_no + second_no;


    return  0;
}