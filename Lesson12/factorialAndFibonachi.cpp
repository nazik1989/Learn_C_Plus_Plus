/*
Задача 21: Ֆակտորիալ և ֆիբոնաչի
Գրել ծրագիր, որը մուտքում կստանա n (1 ≤ n ≤ 10) և կարտածի 
մուտքային թվի ֆակտորիալի և ֆիբոնաչիի հաջորդականության n֊րդ տարրի հարաբերությունը 
5 նիշի ճշտությամբ։
Անհրաժեշտ է, որ թվի ֆակտորիալ հաշվելու և ֆիբոնաչիի հաջորդականության n֊րդ տարրի 
հաշվարկի ֆունկցիաները լինեն ռեկուրսիվ: (դաս 12)
*/
#include <iostream>
#include <iomanip>
/////////////////////////////////////////////////
int factorial(int num)
{
   if (num <= 1) 
   {
       return 1;
   }
   
   return num * factorial(num - 1);
}
////////////////////////////////////////////
double fibonachi(int num)
{
  if(num == 0)
  {
    return 0;
  }
    if(num == 1)
  {
    return 1;
  }

  return fibonachi(num-2) + fibonachi(num-1); 
}
/////////////////////////////////////////////////
int main ()
{
  int n;
  std::cin >> n;
  //std::cout << factorial(n)<<"\n";
  //std::cout << fibonachi(n)<<"\n";
  std::cout << std::fixed;
  std::cout << std::setprecision(5);
  std::cout << factorial(n)/fibonachi(n);
   
}

/*//////FACTORIAL///////

#include <iostream>
int factorial(int num)
{
   if (num == 1) 
   {
       return 1;
   }
   
   return num * factorial(num - 1);
}

int main ()
{   
    int n;
    std::cin>>n;
    std::cout<<factorial(n);
}
     
   Օրինակ՝
                                factorial(5);
    առաջին քայլ                 5*  factorial(4)
    երկրորդ քայլ  5 *           4*factorial(3)
    երրորդ քայլ   5 * 4 *       3*fectorial(2)
    չորրորդ քայլ  5 * 4 * 3     2*fectorial(1)
    հինգերրորդ    5 * 4 * 3 * 2 * 1
	
*/

/* ////////////// FIBONACHI///////////////////
#include <iostream>
int fibonachi(int num)
{
  if(num == 0)
  {
    return 0;
  }
    if(num == 1)
  {
    return 1;
  }

  return fibonachi(num-2) + fibonachi(num-1); 
}
int main ()
{   
    int n;
    std::cin>>n;
    std::cout<<fibonachi(n);
}

*/

    


