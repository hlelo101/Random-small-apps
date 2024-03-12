#include <iostream>

int main() {
    std::string winver;
    double ramGB;
    std::string processor1;
    std::string processor2;
    std::string gpu1;
    std::string gpu2;
    int coresnum;
    double clockspeed;
    double diskspace;
    double diskusage;
    std::cout << "WELCOME TO THE WINDOWS RAPPORT CREATOR\nTo start, enter the version of windows that you are currently using (ex: 11 for windows 11): ";
    std::cin >> winver;
    std::cout << "Enter the amount of RAM that your computer have: ";
    std::cin >> ramGB;
    std::cout << "Enter your CPU model: ";
    std::cin >> processor1;
    std::getline(std::cin, processor2);
    std::cout << "How many cores does your CPU have?: ";
    std::cin >> coresnum;
    std::cout << "What is the clock speed of your CPU?: ";
    std::cin >> clockspeed;
    std::cout << "Enter your GPU  model: ";
    std::cin >> gpu1;
    std::getline(std::cin, gpu2);
    std::cout << "How many GB of space does your disk have?: ";
    std::cin >> diskspace;
    std::cout << "How many GB used?: ";
    std::cin >> diskusage;
    std::cout << "CREATING RAPPORT\n";
    std::cout << "CPU: " << processor1 << processor2 << coresnum << "cores at " << clockspeed << "Ghz\n";
    std::cout << ramGB << "GB of ram\n";
    std::cout << "GPU: " << gpu1 << gpu2;
    std::cout << '\n' << diskspace << "GB " << diskspace - diskusage << "GB free\nRAPPORT DONE\n";
    return 0;
}