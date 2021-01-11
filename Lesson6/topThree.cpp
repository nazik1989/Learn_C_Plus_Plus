/*
Задача 8: Թոփ եռյակ
Գրել ծրագիր, որը մուտքում ստանում է N (N ≥ 3) բնական թիվ, 
ապա հաջորդականություն N ամբողջ տարրերից կազմված։ 
Որպես արդյունք ծրագիրը պետք է արտածի հաջորդականության 3 ամենամեծ տարրերը։ 
Տարրերը պետք է արտածել փոքրից մեծ և տարանջատել բացատանիշներով։ 
Խնդիրը լուծել առանց զանգված օգտագործելու։ (դաս 5, 6)
*/
#include <iostream>
#include <limits.h>
int main () 
{
   unsigned int N, i = 0;
   int num, max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
   std::cin >> N;
   while(i < N)
   {
       std::cin >> num;
       if (num >= max1)
       {
         max3 = max2;
         max2 = max1;
         max1 = num; 
         
       }
       else
       {
           if(num >= max2)
           {   
               max3 = max2;
               max2 = num;
            }
            else
            {
             if (num >= max3) 
                {
                    max3 = num;
                }
            }
       }
       
       i++;
   }
   
   std::cout << max3 << " " << max2 << " " << max1;
   
}
