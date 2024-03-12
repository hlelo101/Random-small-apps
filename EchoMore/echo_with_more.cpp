#include <iostream>

int main() {
    std::string uinput1;
    std::string uinput2;
    std::cout << "Echo: ";
    std::cin >> uinput1;
    std::getline(std::cin, uinput2);
    std::cout << uinput1 << uinput2 << std::endl;
    return 0;
}