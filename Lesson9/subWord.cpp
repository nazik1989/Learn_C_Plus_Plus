/*
Задача 4: Ենթաբառ
Գրել ծրագիր, որը մուտքում կստանա մեկ բառ (ոչ ավել քան 20 սիմվոլ պարունակող) և մեկ սիմվոլ։ 
Անհրաժեշտ է արտածել մուտքագրված բառում՝ 
տրված սիմվոլի առաջին հանդիպման դիրքից աջ ընկած ենթաբառը։ (դաս 9)
*/
#include <iostream>
#include <string.h>
int main ()
{
  int size = 21;
  char word[size], simbol;
  int i, j;
  std::cin >> word;
  std::cin >> simbol;
  int wordLen = strlen(word);
  for ( i = 0; i < wordLen; i++)
  {
    
    if(word[i] == simbol)
    {
      for(j = i+1; j < wordLen; j++)
      {
        std::cout << word[j];
      }
      break;
    }

  }
}