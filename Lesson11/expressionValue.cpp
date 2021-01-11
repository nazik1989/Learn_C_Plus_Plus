/*
Задача 18: Արտահայտության արժեք
Գրել ֆունկցիա, որը որպես արգումենտ կստանա n բնական թիվը և 
կվերադարձնի n!/(n+1) արտահայտության արժեքը։ 
Ապա, օգտվելով վերոնշյալ ֆունկցիայից, հաշվել հետևյալ արտահայտության արժեքը
 1!/2 + 2!/3 + 3!/4 + 4!/5 + 5!/6 + 6!/7 + 7!/8 + 8!/9 + 9!/10 + 10!/11: 
Պատասխանը արտածել 5 նշի ճշտությամբ։ (դաս 11)
*/
#include <iostream>
#include <iomanip> 
double NfacDivNPlas1(int n)
{
  double factorial = 1;
  for(int i = 1; i <=n; i++)
  {
    factorial = factorial * i;
  }

  return factorial / (n+1);

}
int main ()
{
  int number = 10;
  double result = 0;
  for (int i = 1; i <= number; i++)
  {
    //std::cout <<i<<"!/"<< i+1<<" = "<<NfacDivNPlas1(i)<< std::endl;
    result += NfacDivNPlas1(i);
    //std::cout << "result"<<i<<" = "<<result<< std::endl;
  }
  std::cout <<std::fixed <<std::setprecision(5)<< result ;
}

/*
#include <iostream>     // std::cout, std::fixed
#include <iomanip>      // std::setprecision

int main () {
  float f =371419.4578987;
  std::cout << std::setprecision(5) << f << '\n';
  std::cout << std::setprecision(9) << f << '\n';
  std::cout << std::fixed;
  std::cout << std::setprecision(5) << f << '\n';
  std::cout << std::setprecision(9) << f << '\n';
  return 0;
}

*/

/*

#include <iostream>
#include <sstream>// std::cout, std::fixed
#include <ios>      // std::setprecision

int main () {
    float x;
    x = 123.456789;
    std::cout.setf(ios::fixed);
    std::cout.setprecision(5);// вывод в фиксированном формате 
    std::cout.precision(0);      // вывод до 6 знака после точки, включительно
    std::cout << x;
  return 0;
}

*/