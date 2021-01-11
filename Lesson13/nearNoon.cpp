/*
Задача 6: Կեսօրին մոտ
Գրել ծրագիր, որում իրակացված է Time դասը, որի օբյեկտներն իրենցից ներկայցնում են ժամանակը։ 
Ժամանակը տրվում է ժամ (0-ից 23) և րոպե (0-ից 59) դաշտերով։ 
Ծրագիրը մուտքում պետք է ստանա N ժամանակի մասին տեղեկություն՝ ժամ և րոպե, 
ապա պետք է արտածի կեսօրին ամենամոտ 2 ժամանակները։ 
Սկզբում պետքէ արտածվի այն ժամը, որը օրվա ընթացքում գալիս է ավելի շուտ։ (դաս 13)
*/
#include <iostream>
#include<limits.h>
class Time
{ private:
  int hour;
  int minute;
  public:
  Time(int h, int m) : hour(h), minute(m)
  {}
  int getHour(){return hour;}
  int getMinute(){return minute;}
  int getHourPlasMinute()
  {
    if(hour == 0){return 24*60 + minute;};
    return (hour*60 + minute);
  }
};
///////////////////////////////////////////////
int main ()
{
  int N;
  std::cin >> N;
  Time ** p = new Time * [N];
  int noonByMinute = 12 * 60;
  int hourCin;
  int minuteCin;
  for(int i = 0; i < N; i++)
  {
     std::cin >> hourCin >> minuteCin;
     p[i] = new Time(hourCin, minuteCin);
  };
  int  near1 = INT_MAX, index1 = 0 ;
  int  near2 = INT_MAX, index2 = 0;
  
  for(int i = 0; i < N; i++)
  {
    //std::cout<< i <<" "<< abs(noonByMinute - p[i] -> getHourPlasMinute()) << std::endl;
    if(abs(noonByMinute - p[i] -> getHourPlasMinute()) < near1 )
    {
      near2 = near1;
      index2 = index1;
      near1 = abs(noonByMinute - p[i] -> getHourPlasMinute());
      index1 = i;

    }

    else if(abs(noonByMinute - p[i] -> getHourPlasMinute()) < near2)
    {
      near2 = abs(noonByMinute - p[i] -> getHourPlasMinute());
      index2 = i;
    }
    
  }

if(p[index2] -> getHour() < p[index1] -> getHour() )
{
  std::cout << p[index2] -> getHour() << " " << p[index2] -> getMinute() << std::endl;
  std::cout << p[index1] -> getHour() << " " << p[index1] -> getMinute() << std::endl;
}
else if( (p[index2] -> getHour() == p[index1] -> getHour()) && (p[index2] -> getMinute() < p[index1] -> getMinute()) )
{
  std::cout << p[index2] -> getHour() << " " << p[index2] -> getMinute() << std::endl;
  std::cout << p[index1] -> getHour() << " " << p[index1] -> getMinute() << std::endl;
}
else 
{
  std::cout << p[index1] -> getHour() << " " << p[index1] -> getMinute() << std::endl;
  std::cout << p[index2] -> getHour() << " " << p[index2] -> getMinute() << std::endl;
}

 for(int i = 0; i < N; i++)
  {
    delete p[i];
  }
  
  delete [] p;
}