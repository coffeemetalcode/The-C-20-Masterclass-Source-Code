#include <iostream>

// jump back in --> https://youtu.be/8jLOx1hD3_o?t=19406

int main(){
    
	int value {45};
    
    std::cout << "The value is : " << value << std::endl;
    
    std::cout << std::endl;

    value = value + 5;
    std::cout << "value = value + 5 : " << value << std::endl; // 50

    value = 45;

    std::cout << std::endl;
    value +=5;
    //value +=5; // equivalent to value = value + 5
    std::cout << "The value is (after +=5) : " << value << std::endl; // 50

    std::cout << std::endl;
    value -=5; // equivalent to value = value - 5
    std::cout << "The value is (after -=5) : " << value << std::endl; // 45 

    std::cout << std::endl;
    value *=2;
    std::cout << "The value is (after *=2) : " << value << std::endl; // 90

    std::cout << std::endl;
    value /= 3;
    std::cout << "The value is (after /=3) : " << value << std::endl; // 30

    std::cout << std::endl;
    value %= 11;
    std::cout << "The value is (after %=11) : " << value << std::endl; // 8

    std::cout << std::endl;
    value = 45;
    value /= 5;
    std::cout << "The value after /= 5 is : " << value << std::endl; // 9
    return 0;
}