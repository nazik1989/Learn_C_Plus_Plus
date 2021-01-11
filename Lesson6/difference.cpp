/*
Задача 7: Տարբերություն
Գրել ծրագիր, որը մուտքում ստանում է N բնական թիվ, 
ապա հաջորդականություն N ամբողջ տարրերից կազմված։ 
Որպես արդյունք ծրագիրը պետք է արտածի հաջորականության 
մեծագույն և փոքրագույն տարրերի տարբերութունը։ 
Խնդիրը լուծել առանց զանգված օգտագործելու։ (դաս 5, 6)
*/
#include <iostream>
#include <limits.h>
int main ()
{
    unsigned int N,i=0;
    int num;
    int max = INT_MIN;
    int min = INT_MAX;
    std::cin >> N;
    while (i<N)
    {
       std::cin >> num;
       
       if(num >= max)
       {
           max = num;
       } ;
       
       if(num <= min)
       {
           min = num;
       };
      
       i++;
    }
    std::cout << max - min;
}