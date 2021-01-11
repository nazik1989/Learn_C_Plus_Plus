/*
Задача 4: Պահանջվող մոդել
Գրել ծրագիր, որը մուտքում կստանա N հեռուստացույցների մասին տեղեկություն՝ յուրաքանչյուր հեռուստացույցի 
մոդելի անուն, 
արտադրող երկիր և 
անկյունագծի երկարություն, 
ապա M մոդելի անվանումը։ 
Որպես ծրագրի աշխատանքի արդյունք այն պետք է արտածի 
բոլոր տրված M մոդելի հեռուստացույցների 
անկյունագծի չափերը և 
արտադրող երկիրը։ 
Այդպիսիք չլինելուն դեպքում արտածել “Not found!” հաղորդագրությունը։ (դաս 13)

Նկարագրել TV անունով դաս, որն կունենա հետևյալ դաշտերը.

- TV մոդելի անուն
- արտադրող երկիր
- անկյունագծի երկարություն
*/

#include <iostream>
#include <string>
class TV 
{
  private:
  std::string model;
  std::string country;
  double diagonal;
  public:
  TV(std::string a, std::string b, double c):model(a),country(b),diagonal(c){};
  std::string getModel(){return model;};
  std::string getCountry(){return country;};
  double getDiagonal(){return diagonal;};
};
//////////////////////////////////////////////////
 int main ()
 {  
   int N;
   std::cin >> N;
   TV ** p = new TV *[N];
   std::string modelCin;
   std::string countryCin;
   double diagonalCin;
   for(int i = 0; i < N; i++)
   {
     std::cin >> modelCin >> countryCin >> diagonalCin;
     p[i] = new TV(modelCin, countryCin, diagonalCin);
   }
  ///////////////////////////////////////////////////
  std::string M;
  std::cin >> M;
  int count = 0;
  for(int i = 0; i < N; i++)
  {
    if(p[i] -> getModel() == M)
    {
      count++;
      std::cout << p[i] -> getCountry() << " " << p[i] -> getDiagonal()<< std::endl;
    }
    delete p[i];
  }
  delete [] p;
  if(count == 0)
  {
    std::cout << "Not found!";
  }

 }
