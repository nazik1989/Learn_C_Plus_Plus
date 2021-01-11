/*
Задача 10: 0-ին մոտ
Գրել ծրագիր, որը մուտքում կստանա N բնական թիվ, ապա N ամբողջ տարրերից կազմված հաջորդականություն։ 
Պահանջվում է արտածել հաջորդականության այն երկու տարրերը, որոնց գումարն ամենամոտն է 0-֊ին։ 
Այդպիսիք մի քանիսը լինելու դեպքում արտածել առաջինը։ 
Թվի հեռավորությունը 0-ից կարող եք ստանալ՝օգտագործելով std::abs() հրամանը։ (դաս 10)
*/
#include <iostream>
int main ()
{
  long sum;
  long absSum;
  unsigned long N;
  std::cin >> N;
  long * dinArr = new long [N];
  for (long i = 0; i < N; i++)
  {
    std:: cin  >> dinArr[i];
  }
////////////////////////////////
long near0 = std::abs(dinArr[0]+dinArr[1]);
long firstElem = dinArr[0];
long secondElem = dinArr[1];
for (long i = 0; i < N; i++)
{
  for (long j = 0; j < N; j++)
  {
    if(i != j)
    {
      sum = dinArr[i] + dinArr[j];
      absSum = std::abs(sum);
      if(absSum < near0 )
      {
        near0 = absSum;
        firstElem = dinArr[i];
        secondElem = dinArr[j];

      }
    }

  }
}

std::cout << firstElem << " " << secondElem;
delete [] dinArr;

}