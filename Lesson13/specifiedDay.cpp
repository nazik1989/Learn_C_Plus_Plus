/*
Задача 2: Նշված օրը
Գրել ծրագիր, որը մուտքում կստանա N չվերթների մասին տեղեկություն՝ 
յուրաքանչյուր չվերթի վերջնակետ-քաղաք, 
գնացքի համար և 
մեկնելու օր, 
ապա M քաղաքի անվանում և D օր։ 
Որպես ծրագրի աշխատանքի արդյունք այն պետք է արտածի այն գնացքների համարները, 
որոնք տրված D օրը մեկնում են M քաղաքը։ 
Այդպիսիք չլինելուն դեպքում արտածել “Unreachable city!” հաղորդագրությունը։ (դաս 13)

Նկարագրել TRAIN անունով դաս, որն ունի հետևյալ դաշտերը.

- չվերթի վերջնակետ-քաղաք
- չվերթի օր
- գնացքի համարը
*/

#include <iostream>
#include <string>

class TRAIN 
{
  private:
  std::string destCity;
  std::string trainNumber;
  short day;
  public:
  TRAIN(std::string destCityK, std::string trainNUmberK, short dayK):
  destCity(destCityK), trainNumber(trainNUmberK), day(dayK){}
  std::string getDestCity(){return destCity;};
  std::string getTrainNumber(){return trainNumber;};
  short getDay(){return day;};
};
///////////////////////////////////////////////////////////////
int main ()
{
  std::string destCityCin;
  std::string trainNumberCin;
  short dayCin;
  int N;
  std::cin >> N;
  TRAIN ** p = new TRAIN*[N];
  for (int i = 0; i < N; i++)
  {
    std::cin >> destCityCin;
    std::cin >> trainNumberCin;
    std::cin >> dayCin;
    p[i] = new TRAIN(destCityCin,trainNumberCin,dayCin);
  }
  std::string M;
  short D;
  std::cin >> M;
  std::cin >> D;
  //////////////////////////////////////////////////////
  int count = 0;
  for(int i = 0; i < N; i++)
  {
   // std::cout << p[i] -> getDestCity() << std::endl;
    //std::cout << p[i] -> getDay() << std::endl;
    if(p[i] -> getDestCity() == M && p[i] -> getDay() == D)
    {
      count++;
      std::cout << p[i] -> getTrainNumber() << std::endl;
    }
    delete p[i];
  }
  delete [] p;

  if(count == 0)
  {
    std::cout << "Unreachable city!";
  }
}