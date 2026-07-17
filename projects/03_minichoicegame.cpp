#include <iostream>
#include <string>

int main () {
    std::string choice;
    std::cout << "You are being chased by a creature deep in the woods. As you are running, the path splits down two ways." << '\n';
    std::cout << "Path #1: The Children's Hospital" << '\n';
    std::cout << "Path #2: Keep running straight" << '\n';
    std::cout << "Path #3: The Sunken Railway" << '\n';
    
    std::cout << "Which way do you choose? (Type hospital, railway or run)" << '\n';
    std::cin >> choice;

    if (choice == "hospital") {
        std::cout << "As you enter the hospital, something about the atmosphere triggers the creature. It begins an agonizing wail and starts going on a rampage" << '\n';
        std::cout << "You try your best to hide, but are quickly found by the creature and ripped apart. Game Over. " << '\n';
        std::cout << "Ending: Agony";
        return 0;
    }

    else if (choice == "railway") {
        std::cout << "You didn't expect for there to be a railway in the middle of the forest but luck is on your side." << '\n';
        std::cout << "You have entered the Sunken railways. The entity hasn't lost track of you yet. Where do you hide next?" << '\n';

        std::cout << "There is an abandoned train in front of you, as well as a washroom. Where do you hide? (type train or washroom)" << '\n';
        std::cin >> choice;
              if (choice == "washroom") {
                    std::cout << "You enter the washroom and quickly shut the door but don't realize the overwhelming amount of radioactive insects. You are quickly swarmed to death." << '\n';
                    std::cout << "Ending: Suffocated";
                    return 0;
                 }
             else if (choice == "train") {
                    std::cout << "The train smells awful but has many hiding spots. The entity chasing you is overwhelmed by the train's vibrant hues and gives up on chasing you. You survived!" << '\n';
                    std::cout << "Ending: Choo-Choo";
                    return 0;
             }
                else {
        std::cout << "You take too long to decide and the creature catches up. You are devoured.";
        return 0;
                }
    }
             
             
                     
    else if (choice == "run") {
        std::cout << "You attempt to just run for your life and the adrenaline kicks in." << '\n';
        std::cout << "Looking behind you, you see a 13 ft tall cryptic being chasing you at relentless speeds." << '\n';
        std::cout << "You realize theres nothing you can do as the creature's velocity has accelerated to 45 mph, and your once lead has now been cut to a few meters." << '\n';
        std::cout << "You pass out from the shock, but wake up in your house next to your wife and realize this was all a terrible nightmare" << '\n';
        std::cout << "Ending: horrific awakening";
        return 0;
    }
    else {
        std::cout << "You take too long to decide and the creature catches up. You are devoured.";
        return 0;
    }

  return 0;
}