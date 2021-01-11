/*
Задача 9: Բալանսավորված փակագծեր
Մուտքում տրվում է ‘(‘, ‘)’, ‘{‘, ‘}’, ‘[‘ և ‘]’ սիմվոներից բաղկացած հաջորդականություն, 
պահանջվում է արտածել YES, 
եթե այն փակագծերի ճիշտ արտահայտություն է և NO՝ հակառակ դեպքում։ (դաս 14)
*/

#include <iostream>
#include <stack>
#include <string>
  bool isOpen(char bracket)
  {
    if(bracket == '(' || bracket == '{' || bracket == '[')
    {
      return true;
    }
    return false;
  }

  bool correctPair(char open, char close)
    {
    if((open == '('&&close == ')')|| (open == '{' && close == '}') || (open == '['&&close == ']'))
      {
        return true;
      }
      return false;
    }


 int main ()
 {


   std::string bracketString;
   std::cin >> bracketString;
   std::stack <char> BrackStack;
   int i = 0;
   
   //////////////////////////////////////////
       if(isOpen(bracketString[0]) == false)
    {
      std::cout << "NO";
      return 0;
    };
  //////////////////////////////////////////

      while (i < bracketString.length())
    {
      char bracket = bracketString[i];

      if(isOpen(bracket))
      {
        BrackStack.push(bracket);
        //std::cout << BrackStack.top();
      }
      else 
      {
            if(!BrackStack.empty())
            {
              if(correctPair(BrackStack.top(),bracket))
                {
                    BrackStack.pop();
                }
              else 
                {
            std::cout << "NO";
            return 0;
                }
            }
            
            else 
            {
            std::cout << "NO";
            return 0;
            }

      }
      
    
    i++;
    }

   if(BrackStack.empty())
    {
      std::cout << "YES";
    }
    else
    {
      std::cout << "NO";
    }


 }