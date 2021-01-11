/*
Задача 1: Չվերթի վերջնակետ-քաղաք
Գրել ծրագիր, որը մուտքում կստանա N չվերթների մասին տեղեկություն՝ 
յուրաքանչյուր չվերթի վերջնակետ-քաղաք և գնացքի համար, ապա M քաղաքի անվանում։ 
Որպես ծրագրի աշխատանքի արդյունք այն պետք է արտածի այն գնացքների համարները , 
որոնք մեկնում են տրված M քաղաքը։ 
Այդպիսիք չլինելուն դեպքում արտածել “Unreachable city!” հաղորդագրությունը։ (դաս 13)
	Նկարագրել TRAIN անունով դաս, որն ունի հետևյալ դաշտերը.
	- չվերթի վերջնակետ-քաղաք
	- գնացքի համարը
*/
#include <iostream>
#include <string>

class TRAIN
{
  private:
  std::string distCity;
  std::string numberTrain;
  
  public:
  TRAIN(std::string distCityCons,std::string numberTrainCons):distCity(distCityCons),numberTrain(numberTrainCons){};
  std::string getDistCity()
    {
    return distCity;
    };
  std::string getNumberTrain()
    {
    return numberTrain;
    };
  
};
/////////////////////////////////////////////
int main() 
{
int N;
std::cin >> N;
//TRAIN* dinArr = new TRAIN[N] նույնն է անում ինչ ներքևի տողը ցուցիչներով։
TRAIN**p = new TRAIN *[N];


  for(int i = 0; i < N; i++)
  {
    std::string distCityInput;
    std::string numberTrainInput;
    std::cin >> distCityInput;
    std::cin >> numberTrainInput;
    p[i] = new TRAIN(distCityInput,numberTrainInput);
  }
  std::string M;
  std::cin >> M;
//////////////////////////////////////////////////
int count = 0;
  for(int i = 0; i < N; i++)
  {
    if(p[i] -> getDistCity() == M)
    {
      count++;
      std::cout << p[i] -> getNumberTrain() << std::endl;
    }
    //std::cout<< p[i]->getDistCity()<<std::endl;
	delete p[i];
  }
  delete [] p;
  if(count == 0)
  {
    std::cout << "Unreachable city!";
  }

}

//////////////// --- Նույն վարժության լուծումը առանց ցուցիչների օգտագործման --- /////////////////////////////
/*

#include <iostream>
#include <string>

class TRAIN
{
  private:
  std::string distCity;
  std::string numberTrain;
  
  public:
  TRAIN(){};
  TRAIN(std::string distCityCons,std::string numberTrainCons):distCity(distCityCons),numberTrain(numberTrainCons){};
  std::string getDistCity()
    {
    return distCity;
    };
  std::string getNumberTrain()
    {
    return numberTrain;
    };
  
};
/////////////////////////////////////////////
int main() 
{
int N;
std::cin >> N;
TRAIN* dinArr = new TRAIN[N];
//TRAIN**p = new TRAIN *[N];


  for(int i = 0; i < N; i++)
  {
    std::string distCityInput;
    std::string numberTrainInput;
    std::cin >> distCityInput;
    std::cin >> numberTrainInput;
    dinArr[i] = TRAIN(distCityInput,numberTrainInput);
  }
  std::string M;
  std::cin >> M;
//////////////////////////////////////////////////
int count = 0;
  for(int i = 0; i < N; i++)
  {
    if(dinArr[i].getDistCity() == M)
    {
      count++;
      std::cout << dinArr[i].getNumberTrain() << std::endl;
    }
  }  
  delete [] dinArr;
  if(count == 0)
  {
    std::cout << "Unreachable city!";
  }

}

*/