/*
Задача 8: Ամենաերկար ենթահաջորդականություն
Գրել ծրագիր, որը մուտքում կստանա N բնական թիվ, ապա N ամբողջ տարրերից կազմված հաջորդականություն։ 
Պահանջվում է արտածել հաջորդականության ամենաերկար խիստ աճող հատվածի տարրերի քանակը։ (դաս 10)
*/

#include <iostream>
int main ()
{
  unsigned long N;
  std::cin >> N;
  long * dinArr = new long [N];
  for (long i = 0; i < N; i++)
  {
    std::cin >> dinArr[i];
  }
  ///////////////////////////////////////
  long count = 1;
  long maxCount = 1;
  for (long i = 0; i < N-1; i++)
  {
    
    if (dinArr[i+1] > dinArr[i])
    {
     //std::cout << "dinArr[i+1]"<<dinArr[i+1]<<" "<< "dinArr[i]"<<dinArr[i]<<std::endl;
      count++;
    }
    else 
    {
      count = 1;
    }

     if(count > maxCount)
     {
       maxCount = count;
       
      //std::cout<<"MaxCount "<<maxCount<<"\n";
      }
      

  }
  std::cout << maxCount;
  delete [] dinArr;
}
