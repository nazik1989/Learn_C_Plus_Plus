/*
Задача 17:     
Գրել ծրագիր, որը մուտքում կստանա ոչ բացասական ամբողջ թիվ և 
կարտածի այդ թվի երկուական ներկայացումը։ 
Տասականից երկուականի անցումը իրականացնել ֆունկցիայի միջոցով։ 
Ֆունկցիան պետք է ընդունի int տիպի մեկ փոփոխական և վերադարձնի long long տիպի արժեք։ 
(դաս 11)
*/
#include <iostream>
#include<math.h>
long long tenToBinary(unsigned numTen)
{  
  if (numTen == 0) 
  {
    return 0;
  }

  long long numBinary = 0;
  int arr[30], i=0;
  while (numTen  != 1 )
 {
   int remainder = numTen % 2 ;
   arr[i] = remainder;
   numTen = numTen / 2;
   i++;
  }
  arr[i]=1;
  long long tenPower;
  while(i >= 0)
  {
  // std::cout<<"arr[i]*pow(10,i) = "<<arr[i]*pow(10,i)<<"  ";
  // std::cout<<"arr "<<i<<" = "<<arr[i]<<std::endl;
   tenPower = pow(10,i);
   numBinary += arr[i]*tenPower;
   //std::cout<<"numBinary  = "<<numBinary<<std::endl;
  
   i--;
  }
  return numBinary;
}

int main ()
{
  unsigned num;
  std::cin >> num;
  std::cout << tenToBinary(num);
}