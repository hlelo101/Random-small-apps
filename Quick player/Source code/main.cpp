#include <iostream>
#include <SFML/Audio.hpp>
#include <thread>

bool doExit = false;
std::string soundToPlay;

void playSound() {
    sf::SoundBuffer currentSoundBuffer;
    if(!currentSoundBuffer.loadFromFile(soundToPlay)) {
        std::cout << "An error occured! (check if file name is correct?)" << std::endl;
        doExit = true;
        return;
    }
    sf::Sound currentSound;
    currentSound.setBuffer(currentSoundBuffer);
    currentSound.play();
    while(currentSound.getStatus() == sf::Sound::Playing&&!doExit) {
        // Wait for the sound to play
    }
}

int main() {
    std::cout << "Enter the name of the file to open: ";
    std::cin >> soundToPlay;
    std::thread player(playSound);
    char uinput;
    std::cout << "Press any key to stop the sound... ";
    std::cin >> uinput;
    doExit = true;
    player.join();
    return 0;
}