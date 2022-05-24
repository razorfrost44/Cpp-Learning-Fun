#include <iostream>

void playBranchOne()
{
    std::cout << "You set course for Risa." << std::endl;
    std::cout << "The crew is happy and content." << std::endl;
    std::cout << "End 1";
}

void playBranchTwo()
{
    std::cout << "The crew is tough!" << std::endl;
    std::cout << "They can handle more from you." << std::endl;
    std::cout << "You give them more assignments to keep them busy." << std::endl;
    std::cout << "End 2";
}

void playBranchThree()
{
    std::cout << "You decide to award special commendations." << std::endl;
    std::cout << "Some of the crew especially deserve the awards." << std::endl;
    std::cout << "A celebration on ship is had and the crew is happy." << std::endl;
    std::cout << "End 3";
}

void playGame(std::string name = "Smith")
{
    int choice_one = 0;
    int choice_two = 0;
    int choice_three = 0;
    int romulan_hp = 2;

    // Opening
    std::cout << std::endl;
    std::cout << "The year 2411 by earth standards. A battle has broken out in the neutral zone." << std::endl;
    std::cout << "The new Captain of the USS Galent is under attack and must deicde what to do!" << std::endl;
    std::cout << "A romanulan vessel has declocked and is opening fire with their disruptors!" << std::endl;
    std::cout << std::endl;

    // Scene 1
    while (romulan_hp > 0)
    {
        std::cout << "What do you do Captain " << name << "?" << std::endl;
        std::cout << std::endl;
        std::cout << "1: Fire Phasers?" << std::endl;
        std::cout << "2: Raise Shields?" << std::endl;
        std::cout << "3: Evasive maneuvers?" << std::endl;
        std::cout << "(Type number 1, 2, or 3 for your choice)" << std::endl;
        std::cin >> choice_one;
        std::cout << std::endl;
        if (choice_one == 1)
        {
            romulan_hp--;
            std::cout << "Romulan Ship Hull down to: " << romulan_hp << std::endl;
            std::cout << std::endl;
        }
        else if (choice_one == 2)
        {
            std::cout << "Shield were raised and are taking fire. Now need to reset them!" << std::endl;
            std::cout << std::endl;
        }
        else
        {
            std::cout << "Evasive Maneuvers were successful!" << std::endl;
            std::cout << std::endl;
        }
    }
    std::cout << "The romulan vessel now defeated the captain must choose a new course." << std::endl;
    std::cout << std::endl;

    // Scene 2
    std::cout << "There are two options to choose from." << std::endl;
    std::cout << "1: Do you go back to earth for repairs?" << std::endl;
    std::cout << "2: Or stay in the neutral zone to fight?" << std::endl;
    std::cout << "(Type number 1 or 2 for your choice)" << std::endl;
    std::cin >> choice_two;
    if (choice_two == 1)
    {
        std::cout << "Your journey takes you home back to earth for repairs." << std::endl;
        std::cout << "It is a quiet journey and your repairs are quick." << std::endl;
        std::cout << "You now continue your regular patrol back in Federation space." << std::endl;
    }
    else
    {
        std::cout << "You choose to stay in the neutral zone." << std::endl;
        std::cout << "It is quiet for several days and you decide to" << std::endl;
        std::cout << "continue your regular patrol back in Federation space." << std::endl;
    }
    std::cout << std::endl;

    // Scene 3

    std::cout << "The crew has performed well." << std::endl;
    std::cout << "You must choose a reward for the crew!" << std::endl;
    std::cout << "1: Leave to Risa" << std::endl;
    std::cout << "2: More Work!" << std::endl;
    std::cout << "3: Commendations!" << std::endl;
    std::cin >> choice_three;
    std::cout << std::endl;

    // Branch To End
    if (choice_three == 1)
    {
        playBranchOne();
    }
    else if (choice_three == 2)
    {
        playBranchTwo();
    }
    else
    {
        playBranchThree();
    }
}

int main(int argc, char *argv[])
{
    std::string player = "Smith";
    if (argc >= 2)
    {
        player = argv[1];
    }
    playGame(player);
}