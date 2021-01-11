/*
Задача 22: Ամենամեծ ընդհանուր բաժանարար
Գրել ծրագիր, որը մուտքում կստանա երկու բնական թվեր և 
կարտածի դրանց ամենամեծ ընդհանուր բաժանարարը: 
Անհրաժեշտ է խնդիրը լուծել ռեկուրսիվ ֆունկցիայի միջոցով։ (դաս 12)
*/

#include <iostream>

int Euclidean(int a,int b)
{
  if(b == 0)
  {
    return a;
  }
 int mod = a % b;
 return Euclidean(b, mod); 
}
/////////////////////////////////////////////////
int main ()
{
  int a,b;
  std::cin >> a;
  std::cin >> b;  
  std::cout << Euclidean(a,b);
}


/*
Էվկլիդեսի ալգորիթմը ամբողջ թվերի համար՝
a > b > r[1] > r[2] > r[3] > r[4] > r[5] > ... > r[n]

a = b * q[0] + r[1],
b = r[1]q[1] + r[2],
r[1] = r[2]q[2] + r[3],
r[2] = r[3]q[3] + r[4],
...
r[k-2] = r[k-1]q[k-1] + r[k],
...
r[n-2] = r[n-1]q[n-1] + r[n],
r[n-1] = r[n]q[n].


https://hy.wikipedia.org/wiki/%D4%B7%D5%BE%D5%AF%D5%AC%D5%AB%D5%A4%D5%A5%D5%BD%D5%AB_%D5%A1%D5%AC%D5%A3%D5%B8%D6%80%D5%AB%D5%A9%D5%B4

*/