/*
Задача 11: Վերջինից տարբեր
Գրել ծրագիր, որը մուտքում ստանում է N (N ≤ 1000) ոչ բացասական ամբողջ թիվ, 
ապա հաջորդականություն N ամբողջ տարրերից կազմված։ 
Որպես արդյունք ծրագիրը պետք է արտածի հաջորդականությունում 
վերջին տարրից տարբեր տարրերի քանակը։ 
Խնդիրը լուծելիս օգտագործել զանգված։ (դաս 7)
*/
#include <iostream>
int main ()
{
  unsigned int N, i, count = 0; 
  int num;
  int arr[1000];
  std::cin >> N;
  for (i = 0; i < N; i++)
  { std::cin >> num;
    arr[i] = num;
  }

  for (i = 0; i < N; i++)
  {
    if(arr[i] != arr[N-1])
    {
      count++;
    }
  }
  std::cout << count;

}