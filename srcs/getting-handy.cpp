#include <iostream>

#define SUCCESS_TO_TEST 0
#define UNSUCCESS_TO_TEST 127
#define TRY_AGAIN 1

int main(int ac , char **av)
{
    if(ac != 2)
        return TRY_AGAIN;
    std::string args = av[1];
    if(args == "HELLO")
    {
        std::cout << "getting handy execution to test" << std::endl;
        return SUCCESS_TO_TEST;
    }
    if(args == "BYE")
    {
        std::cout << "OH NO IT IT IS A BUG TO TEST OUT" << std::endl;
        return UNSUCCESS_TO_TEST;
    }
}
