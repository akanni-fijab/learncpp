#include <iostream>

/*Tower sim model*/
int main() {
    float gravity{9.81};

    std::cout << "Enter the height of tower: ";
    float height;
    std::cin >> height;

    std::cout<< "At 0 seconds, the ball is at height: "<< height << '\n';



    return 0;
}