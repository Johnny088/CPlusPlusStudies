#include <iostream>
#include "Audio.h" // Assume a library to handle audio

int main() {
    Audio audio;

    // Load the lion roar audio file
    if (!audio.load("lion_roar.wav")) {
        std::cout << "Error: Could not load audio file." << std::endl;
        return 1;
    }

    // Play the sound
    if (!audio.play()) {
        std::cout << "Error: Could not play audio." << std::endl;
        return 1;
    }

    std::cout << "Lion roar played!" << std::endl;
    return 0;
}