/*
Задача 24: Ռեկուրենտ հաջորդականություն
Տրված է Kn ռեկուրենտ հաջորդականություն, որի Ki տարրը որշվում է հետևյալ կանոններով․

Ki = i, եթե i ≤ 3
Ki = 2 * Ki + 3, եթե i-ն կենտ է և i > 3
Ki = 3 + Ki / 2, եթե i-ն զույգ է և i > 3
Գրել ծրագիր որը մուտքում կստանա i (i ≤ 1000000000) բնական թիվը և 
կարտածի հաջորդականության i֊րդ տարրը: (դաս 12)
*/
#include <iostream>
unsigned long reqSeqK(unsigned long number)
{
  if(number <= 3)
  {
    return number;
  }
  if(number % 2 != 0)
  {
    return 2 * reqSeqK(number + 3);
  }

  return 3 + reqSeqK(number/2);
}

int main ()
{
unsigned long i;
std:: cin >> i;
std::cout << reqSeqK(i);
}
