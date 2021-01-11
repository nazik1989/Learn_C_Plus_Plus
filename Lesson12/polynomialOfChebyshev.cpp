/*
Задача 23: Չեբիշևի բազմանդամ
Գրել ծրագիր որը մուտքում տրված n ≥ 0 ամբողջ և x իրական թվերի համար գտնում է Չեբիշևի բազմանդամի n-րդ գործակիցը։ Չեբիշևի Tn(x) բազմանդամը սահմանվում է հետևյալ ձևով. (դաս 12)

T0(x) = 1
T1(x) = x
Tn(x) = 2 * x * Tn-1(x) - Tn-2(x), n = 2, 3, ...
Խնդիրը լուծելիս պատասխանը արտածել 5 նիշի ճշտությամբ։
*/

#include <iostream>
#include <iomanip>

double chebyshev(int n, double x)
{
  if(n == 0)
  {
    return 1;
  }
  if(n == 1)
  {
    return x;
  }

  return 2 * x * chebyshev(n-1, x) - chebyshev(n-2, x);
}

 int main ()
 {
 int n;  
 double x;
 std::cin >> n;
 std::cin >> x;
 std::cout << std::fixed;
 std::cout << std::setprecision(5);
 std::cout << chebyshev(n,x);
 }




