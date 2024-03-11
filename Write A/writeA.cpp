#include <iostream>

int main() {
	int nba;
	std::cout << "How many times do you want to write \"a\"?: ";
	std::cin >> nba;
	for(int i = 0; i!=nba; i++) {
		std::cout << "a\n";
	}
	std::cout << "End." << std::endl;
	return 0;
}