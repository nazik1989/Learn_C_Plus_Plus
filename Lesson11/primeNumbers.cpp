/*Задача 16: Պարզ թվեր
Գրել ծրագիր, որը մուտքում կստանա դրական թիվ և կարտածի 
‘YES՛, եթե այդ թիվը պարզ է և 
‘NO’՝ հակառակ դեպքում։ 
Ստուգումը անհրաժեշտ է կատարել ֆունկցիայի միջոցով։ 
Ֆունկցիան պետք է ստանա որպես արգումենտ դրական թիվ և 
վերադարձնի true, եթե թիվը պարզ է և false՝ հակառակ դեպքում (դաս 11)
*/
/*
#include <iostream>

bool isPrimeFunc(unsigned num)
{
  if(num==1)
  {
    return false;
  }
  for(int i = 2; i <= num/2; i++ )
  {
    if(num % i == 0)
    {
      return false;
    }
  }
  return true;
}

int main() 
{
  bool isPrime;
  unsigned int number;
  std::cin >> number; 
  isPrime = isPrimeFunc(number);
  if(isPrime == true)
  {
    std::cout << "YES";
  }
  else
  {
    std::cout << "NO";
  }
  
}
*/

#include <iostream>

bool isPrimeFunc(unsigned num)
{
  if(num == 1)
  {
    return false;
  }
  for(int i = 2; i <= num/2; i++ )
  {
    if(num % i == 0)
    {
      return false;
    }
  }
  return true;
}

int main() 
{
  unsigned int number;
  std::cin >> number; 

  if(isPrimeFunc(number) == true)
  {
    std::cout << "YES";
  }
  else
  {
    std::cout << "NO";
  }
  
}





