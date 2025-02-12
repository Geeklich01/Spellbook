#include <string>
#include <iostream>
#include "verbalComponent.h"

int main()
{
    srand (time(0));
    std::string spellName;
    std::cout << "What spell would you like to cast?" << std::endl;
    getline(std::cin, spellName);
    if (spellName.length() > 2)
    {
        std::cout << "Here's what you could say to cast it!" << std::endl;
        for (int i = 0; i < 5; i++)
        {
            std::cout << verbalComponent::scramble(spellName) << std::endl;
        }
    } else 
    {
        std::cout << "What an odd Spell!!!" << std::endl;
    }
    
    return 0;
}
