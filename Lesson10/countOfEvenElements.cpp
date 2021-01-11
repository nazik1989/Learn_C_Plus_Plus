/*
Задача 6: Զույգ տարրերի քանակ
Գրել ծրագիր, որը մուտքում կստանա N բնական թիվ, ապա հաջորդականություն N ամբողջ տարրերից կազմված։ 
Անհրաժեշտ է, որ ծրագիրը արտածի հաջորդականության զույգ տարրերի քանակը։ 
Խնդիրը լուծելիս օգտագործել դինամիկ զանգված։ (դաս 10)
*/
#include <iostream>
int main ()
{
  unsigned int N;
  std::cin >> N;
  int count = 0;
  int * dinArr = new int [N];
  
  for(int i = 0; i < N; i++)
  { 
   std::cin >> dinArr[i];
   if (dinArr[i] % 2 == 0) 
   {
     count++;
   }
  }

  delete [] dinArr;
  std::cout << count;
  
}