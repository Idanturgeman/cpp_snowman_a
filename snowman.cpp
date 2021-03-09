#include <stdexcept>
using namespace std;

#include "snowman.hpp"
 namespace ariel {
     string snowman(long number){
         string number_str = to_string(number);
         
         if(number_str.size() != 8)
         {
             throw invalid_argument("Invalid input \'" + number_str + "\'");
         }
         char index;  
         for(int i = 0; i < 8; i++)
         {
            index = number_str[i];
             if(index < '1' || index > '4')
             {
                 throw invalid_argument("Invalid input \'" + number_str + "\'");
             }
         }
         return number_str;
     }
 }
         