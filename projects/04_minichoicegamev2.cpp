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
        std::cout << "You have to be extremely subtle with your options. One wrong move is certain death. You see a toy castle and a bookshelf. Where do you hide next? (type bookshelf or castle)" << '\n';
        std::cin >> choice;
        if (choice == "bookshelf") {
            std::cout << "You stealthily hide behind the bookshelf but the creature catches you. Instead of eating you, it crushes you with the bookshelf." << '\n';
            std::cout << "Ending: Crushed";
            return 0;
        }
        else if (choice == "castle") {
            std::cout << "You stuff yourself in the tight castle, daring not to make a single sound." << '\n';
            std::cout << "The creature scurries past you in panic, Slowly melting into a thick black goo" << '\n';
            std::cout << "Slowly but surely, the entity collapse onto the floor, making a big thud that collapses the whole hospital" << '\n';
            std::cout << "You narrowly escape the falling debris and safely make it home." << '\n';
            std::cout << "Ending: Black Goo";
            return 0;
        }
        else {
            std::cout << "You take too long to decide and are caught by the entity. You fuse into it's vessel and become the entity, roaming the woods to terrorize travellers for the rest of time." << '\n';
            std::cout << "SECRET Ending: Fusion" << '\n';
            return 0;
        }
    }
    else if (choice == "railway") {
        std::cout << "You didn't expect for there to be a railway in the middle of the forest but luck is on your side." << '\n';
        std::cout << "You have entered the Sunken railways. The entity hasn't lost track of you yet. Where do you hide next?" << '\n';
        std::cout << "There is an abandoned train in front of you, as well as a washroom. Where do you hide? (type train or washroom)" << '\n';
        std::cin >> choice;
        if (choice == "washroom") {
            std::cout << "You enter the washroom and quickly shut the door but don't realize the overwhelming amount of radioactive insects." << '\n';
            std::cout << "You only have two options: one is to stay in the washroom and try to avoid the insects or quickly leave for another hiding spot. What do you do? (type stay or leave)" << '\n';
            std::cin >> choice;
            if (choice == "stay") {
                std::cout << "The insects are ruthless and swarm you quickly. You are overwhelmed by their numbers and suffocated. Game over." << '\n';
                std::cout << "Ending: Suffocated" << '\n';
                return 0;
            }
            else if (choice == "leave") {
                std::cout << "You leave the washroom from the opposite side and hide behind the trashcan." << '\n';
                std::cout << "The entity doesn't see you leaving so he enters the washroom." << '\n';
                std::cout << "You hear agonizing screams from the entity as he is consumed by the insects. You quickly flee the scene and escape the forest." << '\n';
                std::cout << "Ending: Insect food" << '\n';
                return 0;
            }
            else {
                std::cout << "You take too long to decide and stay in the washroom. The entity enters and you, the entity, and the bugs have a dance party. The entity escorts you out the woods." << '\n';
                std::cout << "JOKE Ending: Disco Party" << '\n';
                return 0;
            }
        }
        else if (choice == "train") {
            std::cout << "The train smells awful but has many hiding spots. Where do you go next? (type storage, seat, or operator)" << '\n';
            std::cin >> choice;
            if (choice == "storage") {
                std::cout << "You enter the train's storage but realize you aren't the alone..." << '\n';
                std::cout << "Ending: Friend?" << '\n';
                return 0;
            }
            else if (choice == "seat") {
                std::cout << "You sit down in one of the seats, basically accepting your fate." << '\n';
                std::cout << "The entity barges into the train and takes a seat next to you??" << '\n';
                std::cout << "You begin seeing spiritual apparitions appear in the remaining seats, and the train bursts out the railways into the sky. No one knows what happened next or where the train took you." << '\n';
                std::cout << "Ending: Choo-Choo?" << '\n';
                return 0;
            }
            else if (choice == "operator") {
                std::cout << "You decide to enter the operators room but find a strange ancient object on your way. Do you pick it up? (type yes or no)" << '\n';
                std::cin >> choice;
                if (choice == "yes") {
                    std::cout << "You pick up the object from the shadows and realize it is a sculpture of the Eye of Horus. You learnt in history class that this eye wards off all evil." << '\n';
                    std::cout << "You hold up the eye to the entity and it painfully disintegrates. You can either take the eye with you or put it back where you found it. (type keep or return)" << '\n';
                    std::cin >> choice;
                    if (choice == "keep") {
                        std::cout << "The eye deems you greedy and pulverizes you." << '\n';
                        std::cout << "Ending: Greed" << '\n';
                        return 0;
                    }
                    else if (choice == "return") {
                        std::cout << "The eye realizes your selflessness and teleports you outside the forest, but wipes all your thoughts and memories of the eye you ever had. You survived." << '\n';
                        std::cout << "Ending: Selflessness" << '\n';
                        return 0;
                    }
                    else {
                        std::cout << "You take too long to decide and the train collapses on top of you, instantly crushing you to death, and making you more digestible for the monster" << '\n';
                        std::cout << "Ending: Yummy Snack" << '\n';
                        return 0;
                    }
                }
                else if (choice == "no") {
                    std::cout << "You decide not to waste any time and go to the train conductor's room. As soon as you enter the operating room, the door slams behind you." << '\n';
                    std::cout << "You try breaking out, but it is to no effort. The train deemed you unworthy of operating it, and now all you can do it wait before the true conductor arrives..." << '\n';
                    std::cout << "Ending: Conductor's Wrath" << '\n';
                    return 0;
                }
                else {
                    std::cout << "Unexpectedly, the train starts shaking violently, since you aren't in a seat, you are tossed around like a ragdoll. Your bones are slowly broken one by one, being crushed into a powder. You bleed out" << '\n';
                    return 0;
                }
            }
            else {
                std::cout << "You didn't choose a valid hiding spot on the train." << '\n';
                return 0;
            }
        }
        else {
            std::cout << "You didn't choose a valid hiding spot in the railway." << '\n';
            return 0;
        }
    }
else if (choice == "run") {
    std::cout << "You run straight down in zig zags, the entity keeps the pace however, slowly but surely accelerating his speed." << '\n';
    std::cout << "You can't outrun him forever. Do you climb the mysterious ladder, try to juke him, or hide behind a tree? (type ladder, juke or hide)" << '\n';
    std::cin >> choice;
          if (choice == "juke") {
            std::cout << "You try your best to juke the entity but you weren't known for being athletic. You slip and fall and the entity laughs at you. The embarrasment is so bad you just walk into the entity's mouth and give up" << '\n';
            std::cout << "Ending: Embarrassment";
            return 0;
          }
          else if (choice == "hide") {
            std::cout << "You try to hide behind a tree but realize the monster can still see you. You jump into a random pit out of scaredness and fall endlessly to the other side of the world. Who left this hole here?" << '\n';
            std::cout << "Ending: Hole to China";
            return 0;
         }
         else if (choice == "ladder") {
            std::cout << "There's a ladder that seems to be extending limitlessly from the sky. As a last ditch effort, you decide to climb it." << '\n';
            std::cout << "After a few hundred meters, the ladder starts disappearing from below. You have no choice but to climb higher." << '\n';
            std::cout << "After a few hours, you begin to lose track of time. You can either jump off or keep climbing. What do you do? (type climb or jump)";
            std::cin >> choice;
                  if (choice == "jump") {
                    std::cout << "As you jump, you fall thousands of feet down from the sky. You suddenly snap awake and scare your wife in the process. You just had a really bad dream." << '\n';
                    std::cout << "Ending: Nightmare";
                    return 0;
                  }
                  else if (choice == "climb") {
                    std::cout << "You mindlessly keep climbing. Slowly losing your sanity. Eventually you can't take it anymore and pass out. When you wake up, you are in a hospital bed, waking up from your coma" << '\n';
                    std::cout << "You are thrilled to finally escape this twisted reality, but wonder what other secrets the forest beholds." << '\n';
                    std::cout << "Ending: Coma";
                    return 0;
                  }
                  else {
                    std::cout << "You freeze on the ladder, but when you try to move again, you are unable to. You are trapped in the transfinite void, a corrupted version of reality." << '\n';
                    std::cout << "Trapped for eternity";
                    return 0;
                  }
                }
            else {
                std::cout << "You take too long to decide and the creature dives into you. You are eaten.";
                return 0;
            }
         }
else {
    std::cout << "You take too long to decide and the entity catches up to you. Game over";
  return 0;
 }
}


            



