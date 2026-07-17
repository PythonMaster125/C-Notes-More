#include <iostream>
#include <string>

using text_t = std::string;
using number_t = int;

int main() {
    text_t playerName;
    text_t playerClass;
    text_t weapon;

    number_t strength = 0;
    number_t agility = 0;
    number_t health = 0;
    number_t wisdom = 0;
    number_t gold = 0;
    number_t endgame_multiplier = 10;

    std::cout << "---CHARACTER CREATION---\n";


    std::cout << "Enter name: " << '\n';
    std::cin >> playerName;

    std::cout << "Pick your class: " << '\n';
    std::cout << "Paladin - A strong holy knight with great strength" << '\n';
    std::cout << "Wizard - A glass cannon capable of dealing unnerving damage with insane area of effect" << '\n';
    std::cout << "Thief - An extremely fast rascal with loads of gold" << '\n';
    std::cout << "Rogue - A stealth mastermind with high strength and agility. However, their health pays the price" << '\n';
    std::cin >> playerClass;
    
    
    if (playerClass == "Paladin") {
        weapon = "Celestial Everender";
        strength = 55 * endgame_multiplier;
        health = 225 * endgame_multiplier;
        agility = 15 * endgame_multiplier;
        wisdom = 20 * endgame_multiplier;
        gold = 100 * endgame_multiplier;
    
    }
      
    else if (playerClass == "Wizard") {
        weapon = "Millennia's End";
        strength = 15 * endgame_multiplier;
        health = 85 * endgame_multiplier;
        agility = 25 * endgame_multiplier;
        wisdom = 65 * endgame_multiplier;
        gold = 125 * endgame_multiplier;
    }

    else if (playerClass == "Thief") {
        weapon = "Twin Twilight Terminators";
        strength = 25 * endgame_multiplier;
        health = 120 * endgame_multiplier;
        agility = 45 * endgame_multiplier;
        wisdom = 10 * endgame_multiplier;
        gold = 750 * endgame_multiplier;
    }
    else if (playerClass == "Rogue") {
        weapon = "Zephyrstrike";
        strength = 70 * endgame_multiplier;
        health = 50 * endgame_multiplier;
        agility = 60 * endgame_multiplier;
        wisdom = 15 * endgame_multiplier;
        gold = 115 * endgame_multiplier;
    }
    else {
        weapon = "Debug Slicer";
        health = 100 * endgame_multiplier;
        strength = 25 * endgame_multiplier;
        agility = 15 * endgame_multiplier;
        wisdom = 25 * endgame_multiplier;
        gold = 100 * endgame_multiplier;
        
        std::cout << "Invalid Class. Default stats applied." << '\n';
    }

    std::cout << "CHARACTER RESULTS:" << '\n';
    std::cout << "Name: " << playerName << '\n';
    std::cout << "Class: " << playerClass << '\n';
    std::cout << "Weapon: " << weapon << '\n';
    std::cout << "Strength: " << strength << '\n';
    std::cout << "Health: " << health << '\n';
    std::cout << "Agility: " << agility << '\n';
    std::cout << "Wisdom: " << wisdom << '\n';
    std::cout << "Starting Gold: " << gold << '\n';

    std::cout << "-A dangerous journey awaits-" << '\n';

     return 0;
}
