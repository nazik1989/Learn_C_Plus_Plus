/*
Задача 18: Ամենամեծ բացասական թիվ
Պահանջվում է գրել ծրագիր, որը մուտքում ստանում է n (n ≤ 1000) բնական թիվ, 
ապա a0, a1, a2, a3, ... an-1 ամբողջ թվերի հաջորդականությունը 
և կարտածի ամենամեծ բացասական թիվը և դրա կարգահամարը, այդպիսին չլինելու դեպքում ՛0 -1՛։ 
Խնդիրը լուծելիս օգտագործել զանգված։ (դաս 7)
*/
/*
#include <iostream>
#include <limits.h>
int main ()
{
  unsigned int n;
  int a[1000], num, i, max = INT_MIN, index = -1;
  std::cin >> n;
  for (i = 0; i < n; i++)
  {
    std::cin >> num;
    a[i] = num;
  }

  for (i = 0; i < n; i++)
  {
    if(a[i] > max && a[i] < 0)
    {
      max = a[i];
      index = i;
    }

  }
  if(index == -1)
  { 
    max = 0;
    std::cout << max << " " << index;
  }
  else 
  { 
    std::cout << max << " " << index;
  }
  
}
*//*Задача 18: Ամենամեծ բացասական թիվ
Պահանջվում է գրել ծրագիր, որը մուտքում ստանում է n (n ≤ 1000) բնական թիվ, ապա a0, a1, a2, a3, ... an-1 ամբողջ թվերի հաջորդականությունը և կարտածի ամենամեծ բացասական թիվը և դրա կարգահամարը, այդպիսին չլինելու դեպքում ՛0 -1՛։ Խնդիրը լուծելիս օգտագործել զանգված։ (դաս 7)*/
#include <iostream>
#include <limits.h>
int main() {
  const int size = 1000;
  int arr[size];
  int n,bigestNegativ = INT_MIN, index = -1;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }
  
  for(int i = 0; i < n; i++)
  {
    if ( arr[i]<0 && arr[i]  > bigestNegativ  )
    {
      bigestNegativ = arr[i];
      index = i;
    }
  }

  if(index == -1)
  {
    bigestNegativ = 0;
  }
  std::cout << bigestNegativ << " " << index;
}