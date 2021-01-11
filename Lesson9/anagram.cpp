/*
Задача 2: Անագրամ
Գրել ծրագիր, որը մուտքում կստանա S1 և S2 բառերը (ոչ ավել քան 20 սիմվոլ) և կարտածի ‘YES’, 
եթե մուտքագրված բառերը հանդիսանում են անագրամ և ‘NO’ հակառակ դեպքում: (դաս 9)
*/
#include <iostream>
#include <string.h>
int main () 
{
  const int size = 21;
  char S1[size],S2[size],swapp1,swapp2;
  int i, j;
  std::cin >> S1;
  std::cin >> S2;
  if(strlen(S1) != strlen(S2))
  {
    //std::cout << strlen(S1) << std::endl;
    //std::cout << strlen(S2)<< std::endl;
    std::cout << "NO";
  }
  else 
  {
    for (i = 1; i < strlen(S1);i++)
    {
      for(j = 0; j < i; j++ )
      {
        if(S1[i]>S1[j])
        {
          swapp1 = S1[i];
          S1[i] = S1[j];
          S1[j] = swapp1;
        }
        if(S2[i] > S2[j])
        {
          swapp2 = S2[i];
          S2[i] = S2[j];
          S2[j] = swapp2;
        }
        
      }
    }
    //std::cout << S1 << std::endl;
    //std::cout << S2 << std::endl;
    bool equal = true;
    for(i=0;i<strlen(S1);i++)
    {
      if(S1[i] != S2[i]) 
      { 
        equal = false;
        std::cout << "NO";
        break;
      }
    }
    if(equal == true) 
    { 
      std::cout << "YES";
    }

  }

}