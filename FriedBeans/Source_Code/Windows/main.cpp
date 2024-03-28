#include <iostream>
#include "include/webui.hpp"

webui::window beans;
webui::window friedBeans;

void closeBeans(webui::window::event* e) {
    std::cout << "Closing beans\n";
    beans.close();
}

void closeFriedBeans(webui::window::event* e) {
    std::cout << "Closing fried beans\n";
    friedBeans.close();
}

void launchBeans(webui::window::event* e) {
    std::cout << "Opeining the Beans Window\n";
    beans.bind("beansClose", closeBeans);
    beans.show("web/beans.html");
}

void launchFriedBeans(webui::window::event* e) {
    std::cout << "Opeining the Beans Window\n";
    friedBeans.bind("friedBeansClose", closeFriedBeans);
    friedBeans.show("web/friedBeans.html");
}

int main() {
    std::cout << "Program started\n";
    webui::window mainWindow;
    // Bind elements
    mainWindow.bind("beansButton", launchBeans);
    mainWindow.bind("friedBeansButton", launchFriedBeans);
    mainWindow.show("web/index.html");
    webui::wait();
    std::cout << "Exit" << std::endl;
    return 0;
}