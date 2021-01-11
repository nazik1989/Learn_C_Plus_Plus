/*
Задача 5: Նախատեսված է ...
Գրել ծրագիր, որը մուտքում կստանա N հեռուստացույցների մասին տեղեկություն՝ 
յուրաքանչյուր հեռուստացույցի 
մոդելի անուն, 
արտադրող երկիր և 
վաճառքի երկիր, 
ապա հեռուստացույցի A արտադրման երկիրը և B վաճառքի երկիրը։ 
Որպես ծրագրի աշխատանքի արդյունք այն պետք է արտածի բոլոր հեռուստացույցների մոդելները 
որոնք արտադրվում են A երկրում և վաճառվում B֊ում։ 
Այդպիսիք չլինելուն դեպքում արտածել “Not found!” հաղորդագրությունը։ (դաս 13)
	Նկարագրել TV անունով դաս, որն կունենա հետևյալդաշտերը.

- TV մոդելի անուն
- արտադրող երկիր
- վաճառքի երկիր
*/
/*
Գրել ծրագիր, որը մուտքում կստանա N հեռուստացույցների մասին տեղեկություն՝ յուրաքանչյուր հեռուստացույցի մոդելի անուն, արտադրող երկիր և վաճառքի երկիր, ապա հեռուստացույցի A արտադրման երկիրը և B վաճառքի երկիրը։ Որպես ծրագրի աշխատանքի արդյունք այն պետք է արտածի բոլոր հեռուստացույցների մոդելները որոնք արտադրվում են A երկրում և վաճառվում B֊ում։ */
#include <iostream>
#include <iostream>
class TV
{ private:
  std::string model;
  std::string producerCountry;
  std::string saleCountry;
  public:
  TV (std::string m, std::string p, std::string s):model(m),producerCountry(p),saleCountry(s){}
  std::string getModel(){return model;}
  std::string getProducerCountry(){return producerCountry;}
  std::string getSaleCountry(){return saleCountry;}
};
/////////////////////////////////////////////////////////
 int main ()
 {
   int N;
   std::cin >> N;
   TV ** p = new TV * [N];
  std::string modelCin;
  std::string producerCountryCin;
  std::string saleCountryCin; 
  for(int i = 0; i < N; i++)
  {
    std::cin >> modelCin >> producerCountryCin >> saleCountryCin;
    p[i] = new TV(modelCin, producerCountryCin, saleCountryCin );
  }

  std::string A; //producer
  std::string B; //saler
  std::cin >> A >> B;
  int count = 0;

  for(int i = 0; i < N; i++)
  {
    if(p[i] -> getProducerCountry() == A && p[i] -> getSaleCountry() == B)
    {
      count++;
      std::cout << p[i] -> getModel() << std::endl;
    }
    delete p[i];
  }
  delete [] p;

  if(count == 0)
  {
    std::cout << "Not found!";
  }
 }