/*
Задача 7: Ամենաուշ ժամ
Գրել ծրագիր, որում իրակացված է TimeS դասը, որի օբյեկտներն իրնեցից ներկայացնում են ժամանակը։ 
Ժամանակը տրվում է ժամ (0-ից 23), րոպե (0-ից 59) և վայրկյան (0-ից 59) դաշտերով։ 
Ծրագիրը մուտքում պետք է ստանա N ժամանակի մասին տեղեկություն՝ 
ժամ, րոպե և վայրկյան, ապա պետք է արտածի օրվա ամենաուշ պահը։ (դաս 13)
*/

#include <iostream>
class TimeS
{
  private:
  int hour;
  int minute;
  int second;
  public:
  TimeS(int h, int m, int s):hour(h), minute(m), second(s){}
  int getHour(){return hour;}
  int getMinute(){return minute;}
  int getSecond(){return second;}
  int getMakeSeconds () 
    {
      if (hour == 0 && minute == 0)
      {
        return 3600*24 + 60*60 + second;
      }
      else if(hour == 0)
      {
        return 3600*24 + 60*minute + second;;
      }
      else if(minute == 0)
      {
        return 3600*hour + 60*60 + second;
      }

    return 3600*hour + 60*minute + second;

    }

};
/////////////////////////////////
int main ()
{
  int N;
  std::cin >> N;
  TimeS **p = new TimeS*[N];
  int hourCin;
  int minuteCin;
  int secondCin;
  for (int i = 0; i < N; i++)
  {
    std::cin >> hourCin >> minuteCin >> secondCin;
    p[i] = new TimeS (hourCin, minuteCin, secondCin);
  }
  int latestHour = p[0] -> getMakeSeconds();
  int index;
  for(int i = 0; i < N; i++)
  {
      if(p[i] -> getMakeSeconds() > latestHour)
      {
        latestHour = p[i] -> getMakeSeconds();
        index = i;
      }
  }

  std::cout << p[index] -> getHour() << " ";
  std::cout << p[index] -> getMinute() << " ";
  std::cout << p[index] -> getSecond() << " ";
///----- delete dinamic arr-------///
   for (int i = 0; i < N; i++)
  {
    delete p[i];
  }
  delete [] p;

}