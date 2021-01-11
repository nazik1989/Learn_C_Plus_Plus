/*
Задача 5: Ենթաբառ ֊ 2
Գրել ծրագիր, որը մուտքում կստանա S1 բառը (ոչ ավել քան 20 սիմվոլ), 
S2 բառը (ոչ ավել քան S1 բառում սիմվոլների քանակը) և 
կարտածի ‘YES’, եթե S2 հանդիսանում է ենթաբառ S1֊ից և ‘NO’ հակառակ դեպքում: (դաս 9)
*/
#include <iostream>
#include <string.h>
int main ()
{
  int i, j = 0, size = 21;
  char S1[size], S2[size];
  std::cin >> S1 >> S2;
  int S1Length = strlen(S1);
  int S2Length = strlen(S2);
  bool equal = false;
  for (i = 0; i < S1Length; i++)
  {
    //std::cout << S1[i] << "&"<<S2[j]<<" առաջին ցիկլ\n";
    if(S1[i] == S2[j])
    {
      //std::cout << "մտնում է j-ի մեջ\n";
       equal = true;
      for (j = 0;j < S2Length;j++)
      {
        //std::cout << S1[i+j] << "&"<< S2[j]<<" երկրորդ ցիկլ\n";
        if(S1[i+j] != S2[j])
          {
            //std::cout << S1[i + j] << "&"<<S2[j]<<" երկրորդ ցիկլի բացասական ավարտ\n";
            equal = false;
            j = 0;
            break;
          }
         
      }

      if(equal == true)
      {
         //std::cout << S1[i + j-1] << "&"<<S2[j-1]<<" երկրորդ ցիկլի դրական ավարտ\n";
      std::cout<< "YES";
      break;
      }  

    }


  }

  if(equal == false)
  {
    std::cout << "NO";
  }
  
  
}