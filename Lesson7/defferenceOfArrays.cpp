/*
Задача 14: Զանգվածների տարբերություն
Պահանջվում է գրել ծրագիր, որը մուտքում կստանա 10 երկարությամբ երկու ամբողջ թվերի հաջորդականություն 
և կարտածի բոլոր այն տարրերը առաջին հաջորդականությունից, որոնք չկան երկրորդում։ 
Արտածվող թվերը միմյանցից պետք է բաժանված լինեն բացատանիշով և 
պետք է արտածվեն նույն հերթականությամբ ինչպես ներմուծվել են։ 
Խնդիրը լուծելիս օգտագործել զանգված։ (դաս 7)
*/
#include <iostream>
int main () 
{ int num, i, j;
  const int size =10;
  int arr1[size], arr2[size];
  bool equal;
  for (i = 0; i < size; i++)
  {
    std::cin >> num;
    arr1[i] = num;
  }
  for (i = 0; i < size; i++)
  {
    std::cin >> num;
    arr2[i] = num;
  }

  for (i = 0; i < size; i++)
  {
    equal = false;
    for(j = 0; j < size; j++)
    {
      if(arr1[i] == arr2[j])
      {
       equal = true;
       break; 
      }
    }
    if (equal == false)
    {
      std::cout << arr1[i] << " ";
    }

  }
}
