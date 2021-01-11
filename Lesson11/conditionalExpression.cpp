/*
Задача 19: Պայմանով արտահայտություն
Պահանջվում է գրել ծրագիր, որը մուտքում կստանա A և B ամբողջ թվերը և Օ սիմվոլը, 
որը կարող է լինել ‘+’, ‘-‘, ‘*’, ‘/’ կամ ‘%’: 
Ծրագիրը պետք է արտածի O գործողության արդյունքը՝ կիրառված A և B թվերի նկատմամաբ։ 
Անհրաժեշտ է յուրաքանչյուր գործողության համար ստեղծել առանձին ֆունկցիա։ (դաս 11)
*/

#include <iostream>

void sum(int A, int B)
  {
    std::cout << A + B;
  }
/////////////////////////////////////////
void subtraction(int A, int B)
  {
    std::cout << A - B;
  }
/////////////////////////////////////////
void multiplication(int A, int B)
  {
    std:: cout << A * B;
  }
////////////////////////////////////////
void division (int A, int B)
  {
    double C = B;
    std::cout << A / C;
  }
///////////////////////////////////////
void mode (int A, int B)
  {
    std::cout << A % B;
  }
///////////////////////////////////////
int main ()
{
  int A;
  int B;
  char O;
  std::cin >> A >> B >> O;
///////////////////////////////////////
switch (O)
  {
  case '+':
    sum (A, B);
    break;
  case '-':
    subtraction(A, B);
    break;
  case '*':
    multiplication(A, B);
    break;
  case '/':
    division(A, B);
    break;
  case '%':
    mode(A, B);
    break;
  }

}
