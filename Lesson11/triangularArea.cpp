/*
Задача 20: Եռանկյան մակերես
Պահանջվում է գրել ծրագիր, որը մուտքում կստանա եռանկյան 3 կողմերը և կարտածի դրա մակերեսը։ 
Խնդիրը լուծելու համար օգտվել Հերոնի բանաձևից և sqrt() ֆունկցիայից։ 
Մակերեսը հաշվելու համար անհրաժեշտ է օգտագործել ֆունկցիա։ (դաս 11)
SΔ=√p(p−a)(p−b)(p−c),p=(a+b+c)/2,
որտեղ  a,b  և  c  -ն եռանկյան կողմերն են, իսկ  p  -ն՝ կիսապարագիծը:
*/
#include <iostream>
#include <math.h>

double triangleArea(double a, double b, double c)
{
  double p = (a + b + c)/2;
  return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main ()
{
 double a, b, c;
 std::cin >> a;
 std::cin >> b;
 std::cin >> c;
 std::cout << triangleArea(a,b,c);
}