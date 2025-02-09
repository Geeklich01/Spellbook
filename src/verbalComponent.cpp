#include "verbalComponent.h"

verbalComponent::verbalComponent()
{
}

verbalComponent::~verbalComponent()
{
}

int verbalComponent::getSpellNameLength(std::string spellName)
{
    return spellName.length();
}

std::string verbalComponent::scramble(std::string spellName)
{
    std::string remnantName = spellName;
    std::string verbalComponent = "";
    while (remnantName.length() > LEAVE_OUT) // 
    {
        int index = rand() % remnantName.length();
        verbalComponent.append(remnantName.substr(index, 1));
        if (index == 0)
        {
            remnantName = remnantName.substr(1);
        } else if (index == remnantName.length() - 1)
        {
            remnantName = remnantName.substr(0, remnantName.length() - 1);
        } else
        {
            remnantName = remnantName.substr(0, index).append(remnantName.substr(index+1));
        }
    }
    
    return normalize(verbalComponent);
}

std::string verbalComponent::normalize(std::string str)
{
    // std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c){ return std::tolower(c); });
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]);
    }
    
    str[0] = toupper(str[0]);
    return str;
}
