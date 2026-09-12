#include <iostream>
#define GRAVITY 9.8
double model_drop(float height,int second) {
    double covered {0.5*GRAVITY*second*second};
    if (covered > 0) {
        return covered;
    }
    else {
        return 0;
    }

};


/*Tower sim model*/
int main() {


    std::cout << "Enter the height of tower: ";
    float height{};
    std::cin >> height;

    std::cout<< "At 0 seconds, the ball is at height: "<< height- model_drop(100,0)<< '\n';
    std::cout<< "At 1 seconds, the ball is at height: "<< height- model_drop(100,1) << '\n';
    std:: cout<< "At 2 seconds, the ball is at height: "<< height - model_drop(100,2)<< '\n';
    std::cout << "At 3 seconds, the ball is at height: "<< height- model_drop(100,3) << '\n';
    std::cout<< "At 4 seconds, the ball is at height: "<< height -model_drop(100,4)<< '\n';
    std::cout<< "At 5 seconds, the ball is at height: "<< height -model_drop(100,5)<< '\n';





    return 0;
}