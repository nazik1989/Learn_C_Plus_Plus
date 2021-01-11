/*
Задача 16: Պարզ թվերի քանակ
Պահանջվում է գրել ծրագիր, որը մուտքում կստանա n (n ≤ 100) բնական թիվ, 
ապա a0, a1, a2, ... an-1 ամբողջ թվերի հաջորդականությունը և կարտածի b0, b1, b2, ... bn-1։ 
Որտեղ bi -ն ai -ից փոքր պարզ թվերի քանակն է։ 
Արտածվող թվերը միմյանցից պետք է բաժանված լինեն բացատանիշով։ 
Խնդիրը լուծելիս օգտագործել զանգված։ (դաս 7)
*/
#include <iostream>
int main () 
{
  unsigned int n;
  int i, j, k, num, count;
  int a[100];
  bool isPrime;
  std::cin >> n;
  
  for (i = 0; i < n; i++)
  {
       std::cin >> num;
       a[i] = num;
  }
  
for (k = 0; k < n; k++)
{
  count = 0;
  for ( i = 2; i < a[k]; i++)
  {

    bool isPrime = true;
    
    for (j = 2; j <= i/2 ; j++)
    {
      if(i % j == 0) 
      {
        isPrime = false;
        break;
      }
    }

    if (isPrime == true)
    {
      count++;

    }

  }
  std::cout  << count << " ";

}

}




