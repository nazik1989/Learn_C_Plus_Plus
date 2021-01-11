/*
Задача 4: Պարզ թվեր
Գրել ծրագիր, որը մուտքում կստանա դրական թիվ և 
կարտածի մինչև այդ թիվը եղած բոլոր պարզ թվերը։ 
Արտածվող թվերը միմյանցից պետք է բաժանված լինեն բացատանիշով։ (դաս 5, 6)
*/
/*
#include <iostream>
using namespace std;
int main() 
{
   unsigned int positiveNum;
   unsigned int i = 2;
   bool isPrime;
   cin>>positiveNum;
   while(i <= positiveNum)
   {

        bool isPrime = true;
        int j = 2;
        while(j <= i/2)
        {
            if (i%j == 0)
                {
                isPrime = false;
                break;
                }
                j++;
        }
        
        if(isPrime == true)
        {
          cout<<i<<" ";
        }
          i++;
   }
}
*/
/*
Задача 4: Պարզ թվեր
Գրել ծրագիր, որը մուտքում կստանա դրական թիվ և 
կարտածի մինչև այդ թիվը եղած բոլոր պարզ թվերը։ 
Արտածվող թվերը միմյանցից պետք է բաժանված լինեն բացատանիշով։ (դաս 5, 6)
*/
#include <iostream>
using namespace std;
int main() 
{
   unsigned int positiveNum;
   unsigned int i = 2;
   bool isPrime;
   cin>>positiveNum;
   while(i <= positiveNum)
   {

        bool isPrime = true;
        int j = 2;
        while(j <= i/2)
        {
            if (i%j == 0)
                {
                isPrime = false;
                break;
                }
                j++;
        }
        
        if(isPrime == true)
        {
          cout<<i<<" ";
        }
          i++;
   }
}