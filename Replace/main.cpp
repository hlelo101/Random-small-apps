#include <iostream>

int main() {
    std::string uinput;
    std::cout << "Enter a string: ";
    std::cin >> uinput;
    std::string uinput2;
    std::getline(std::cin, uinput2);
    uinput = uinput + uinput2;

    char toReplace;
    char replaceWith;
    std::cout << "Letter to replace: ";
    std::cin >> toReplace;
    std::cout << "Replace with: ";
    std::cin >> replaceWith;
    for(int i = 0; i!=uinput.size(); i++) {
        if(uinput.at(i) == toReplace) {
            uinput.at(i) = replaceWith;
        }
    }
    std::cout << "String: " << uinput << std::endl;
    return 0;
}