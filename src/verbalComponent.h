#include <string>

class verbalComponent
{
private:
    /* data */
    static const int LEAVE_OUT = 1;
    static std::string normalize(std::string str);
    verbalComponent();
public:
    static int getSpellNameLength(std::string word);
    static std::string scramble(std::string word);
};
