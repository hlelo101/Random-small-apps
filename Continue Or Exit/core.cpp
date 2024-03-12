#include <iostream>

int main() {
    char uinput;
    bool exit = false;
    int num = 0;
    do {
        std::cout << "Input (c = continue, e = exit): ";
        std::cin >> uinput;
        if(uinput=='c') {
            num++;
            std::cout << num << '\n';
        } else if(uinput=='e') {
            std::cout << "Exit" << std::endl;
            exit = true;
        } else {
            std::cout << "ERROR: Unrecognized input\n";
        }
    } while(!exit);
    return 0;
}