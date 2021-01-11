/*
Задача 3: Պալինդրոմ
Գրել ծրագիր, որը մուտքում կստանա բառ (ոչ ավել քան 20 սիմվոլ) և կարտածի ‘YES’, 
եթե մուտքագրված բառը պալինդրոմ է և ‘NO’ հակառակ դեպքում: (դաս 9)
*/
#include <iostream>
#include <string.h>
int main () 
{
  const int size = 21;
  char word[size];
  int i;
  std::cin >> word;
  int length = strlen(word);
  bool same = true;
for (i = 0; i < length/2;i++)

    {
      //std::cout << word[i] <<" "<<word[length-1-i]<<std::endl;
      if(word[i] != word[length-1-i])
      {
        same = false;
        std::cout << "NO";
        break;
      }
    }

if(same == true)
{
  std::cout<< "YES";
}

}
