/*
Задача 9: Տարրի կրկնությունների քանակ
Գրել ծրագիր, որը մուտքում կստանա N բնական թիվ, ապա հաջորդականություն N ամբողջ տարրերից կազմված։ 
Պահանջվում է արտածել հաջորդականության յուրաքանչյուր տարրի կրկնությունների քանակը։ (դաս 10)
*/
#include <iostream>

int main() 
{
 unsigned long N;
 std::cin >> N;
long * dinArr = new long [N];
long * dinArrCounts = new long [N];
 for (long i = 0; i < N; i++)
 {
   std::cin >> dinArr[i];
 }
 ////////////////////////////////////
 for (long i = 0; i < N; i++ )
 {
   long count = 0;
   for(long j = 0; j < N; j++)
   {
     if(dinArr[i] == dinArr[j])
     {
        count ++;
     }
   }
   dinArrCounts[i] = count;
 }
  
  delete [] dinArr;

 /////////////////////////////////////
 for( long i = 0; i < N; i++)
 {
   std::cout << dinArrCounts[i]<<" ";
 }
 delete [] dinArrCounts;
}