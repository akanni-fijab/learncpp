#include <iostream>


double operation(double first_no, double second_no,char opr) {

    if (opr == '+') {
        return first_no + second_no;
    }
    else if (opr == '-') {
        return first_no - second_no;
    }
    else if (opr =='*') {
        return  first_no * second_no;
    }
    else if (opr =='/')
        return first_no / second_no;
    else
        return 1.0; // gotta return an int
};


int main() {
    std::cout << "Enter a double value: ";
    double first_no{};
    std::cin >> first_no;

    std::cout << "Enter a double value: ";
    double second_no{};
    std::cin >> second_no;


    std::cout << "Operation * / + - ";
    char opr{};
    std::cin >> opr;

    std::cout << "The result of "<<first_no <<opr<<second_no<<" is "<<operation(first_no, second_no, opr)<<std::endl;

    return  0;
}