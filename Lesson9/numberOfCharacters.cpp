/*
Задача 1: Սիմվոլների քանակ
Գրել ծրագիր, որը մուտքում կստանա բառ (ոչ ավել քան 20 սիմվոլ), 
և կարտածի մուտքագրված սիմվոլների քանակը։ (դաս 9)
*/
#include <iostream>
int main ()
{
  const int size = 21;  
  int count = 0, i = 0;
  char word[size];
  std::cin >> word;
  while (word[i] != '\0')
  {
    count ++;
    i++;
  }
  std::cout << count;
}