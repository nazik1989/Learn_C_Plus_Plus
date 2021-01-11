/*
Задача 3: Տարանցիկ
Գրել ծրագիր, որը մուտքում կստանա N չվերթների մասին տեղեկություն՝ յուրաքանչյուր չվերթի 
սկզբնակետ-քաղաք, 
վերջնակետ-քաղաք և 
գնացքի համար, 
ապա A, B և C քաղաքների անվանումները։ 
Որպես ծրագրի աշխատանքի արդյունք այն պետք է արտածի չվերթների համարների զույգեր,
զույգի առաջին գնացքը պետք է անցնի A-ից B, իսկ երկրորդը՝ B-ից C:
Չվերթների համարները պետք է արտածվեն նույն հերթականությամբ ոնց ներմուծվել էին: 
Այդպիսիք չլինելուն դեպքում արտածել “Unreachable city!” հաղորդագրությունը։ (դաս 13)

Նկարագրել TRAIN անունով դաս, որն ունի հետևյալ դաշտերը.
 - չվերթի սկզբնակետ-քաղաք
 - չվերթի վերջնակետ-քաղաք
 - գնացքի համարը
*/

#include <iostream>
#include <string>
class  TRAIN
{
  private:
  std::string  beginCity;
  std::string endCity;
  std::string trainNumber;
  public:
  TRAIN(std::string a, std::string b, std::string c):beginCity(a), endCity(b),trainNumber(c){};
  std::string getBeginCity(){return beginCity;};
  std::string getEndCity(){return endCity;};
  std::string getTrainNumber(){return trainNumber;};
};
int main ()
{
  int N;
  std::cin >> N;
  TRAIN ** p = new TRAIN*[N];
  std::string beginCityCin;
  std::string endCityCin;
  std::string trainNumberCin;
for (int i = 0; i < N; i++)
  {
    std::cin >> beginCityCin >> endCityCin >> trainNumberCin;
    p[i] = new TRAIN(beginCityCin, endCityCin,trainNumberCin);
  }
////////////////////////////////////////////////////
  std::string A, B, C;
  std::cin >> A >> B >> C;
  int count = 0;
for(int i = 0; i < N; i++)
  {
    if(p[i] -> getBeginCity() == A && p[i] -> getEndCity() == B)
    {
      for(int j = i; j < N; j++)
      {
        if(p[j] -> getBeginCity() == B && p[j] -> getEndCity() == C)
        {
          count ++;
          std::cout << p[i] -> getTrainNumber() << std::endl;
          std::cout << p[j] -> getTrainNumber() << std::endl;
        }
      }
    }
    delete p[i];
  }
  delete [] p;

  if(count == 0)
  {
    std::cout << "Unreachable city!";
  }

}

/*
#include <iostream>
#include <string>
class  TRAIN
{
  private:
  std::string  beginCity;
  std::string endCity;
  std::string trainNumber;
  public:
  TRAIN(std::string a, std::string b, std::string c):beginCity(a), endCity(b),trainNumber(c){};
  std::string getBeginCity(){return beginCity;};
  std::string getEndCity(){return endCity;};
  std::string getTrainNumber(){return trainNumber;};
};
int main ()
{
  int N;
  std::cin >> N;
  TRAIN ** p = new TRAIN*[N];
  std::string beginCityCin;
  std::string endCityCin;
  std::string trainNumberCin;
for (int i = 0; i < N; i++)
  {
    std::cin >> beginCityCin >> endCityCin >> trainNumberCin;
    p[i] = new TRAIN(beginCityCin, endCityCin,trainNumberCin);
  }
////////////////////////////////////////////////////
  std::string A, B, C;
  std::cin >> A >> B >> C;
  int count = 0;
for(int i = 0; i < N; i++)
  {
    if(p[i] -> getBeginCity() == A && p[i] -> getEndCity() == B)
    {
      for(int j = i; j < N; j++)
      {
        if(p[j] -> getBeginCity() == B && p[j] -> getEndCity() == C)
        {
          count ++;
          std::cout << p[i] -> getTrainNumber() << std::endl;
          std::cout << p[j] -> getTrainNumber() << std::endl;
          break;
        }
      }
    }
    delete p[i];
  }
  delete [] p;

  if(count == 0)
  {
    std::cout << "Unreachable city!";
  }

}
*/


