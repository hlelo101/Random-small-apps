#include <iostream>

void prin2t(std::string text1, std::string text2);

int main() {
    std::string text1;
    std::string text2;
    char uinput;
    std::cout << "WELCOME TO THE IN-BOX TEXT GENERATOR!\nEnter the text that will be in the box: ";
    std::cin >> text1;
    std::getline(std::cin, text2);
    do {
        std::cout << "Do you want to get the result or the c++ code? (r = result, c = c++ code): ";
        std::cin >> uinput;
        if(uinput!='c'&&uinput!='r') {
            std::cout << "ERROR: Unrecognized input\n";
        }
    } while(uinput!='c'&&uinput!='r');
    if(uinput=='r') {
        std::cout << "+";
        prin2t(text1, text2);
        std::cout << "+\n| " << text1 << text2 << " |\n+";
        prin2t(text1, text2);
        std::cout << "+\n";
    } else {
        std::cout << "std::cout << \"+";
        prin2t(text1, text2);
        std::cout << "+\\n| " << text1 << text2 << " |\\n+";
        prin2t(text1, text2);
        std::cout << "+\\n\";\n";
    }
    return 0;
}

void prin2t(std::string text1, std::string text2) {
    for(int i = 0; i!=text1.length() + text2.length() + 2; i++) {
        std::cout << "-";
    }
}