#include <string>

namespace ariel {
    
    std::string snowman(long build);

    const std::string base[] = {" ( : ) ", " (\" \") ", " (___) ", " (   ) "};
    const std::string hat[] = {" _===_ \n", "  ___  \n ..... \n", "   _   \n  /_\\  \n", "  ___  \n (_*_) \n"};
    const char nose[] = {',','.','_',' '};
    const char eyes[] = {'.','o','O','-'};
    const char Rarm[] = {'>', '/', '\\', ' '};
    const char Larm[] = {'<', '\\', '/', ' '};
    const std::string head_tmp = " (   ) \n";
    const std::string body[] = {" ( : ) \n", " (] [) \n", " (> <) \n", " (   ) \n"};
    
};