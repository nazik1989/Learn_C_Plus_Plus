/*
Задача 12: Նախ թվանշանները
Գրել ծրագիր, որը մուտքում ստանում է N (N ≤ 1000) բնական թիվ, 
ապա հաջորդականություն N սիմվոլներից կազմված։ 
Որպես արդյունք ծրագիրը պետք է արտածի հաջորդականության թվանշանները 
ապա մնացած սիմվոլները։ 
Արտածվող սիմվոլները միմյանցից պետք է բաժանված լինեն բացատանիշով։ 
Խնդիրը լուծելիս օգտագործել զանգված։ (դաս 7)
*/

#include <iostream>
int main ()
{
  unsigned int N, i, j = 0 ; 
  char simbol;
  char arr[1000];
  char arrSimbols[1000];
  std::cin >> N;
  for (i = 0; i < N; i++)
  { 
    std::cin >> simbol;
    arr[i] = simbol;
  }

  for (i = 0; i < N; i++)
  {
    if(arr[i] >= 48 && arr[i] <= 57) // int('0') = 48 and int('9') = 57
    {
      std::cout << arr[i] << " ";
    }
    else 
    { 
      arrSimbols[j] = arr[i];
      j++;
    }

  }

  for(i = 0; i < j; i++)
  {
    std::cout << arrSimbols[i] << " ";
  }

}