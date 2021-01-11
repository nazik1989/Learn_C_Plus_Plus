/*
Задача 7: Կրկնվող տարրեր
Գրել ծրագիր, որը մուտքում կստանա N բնական թիվ, ապա N ամբողջ տարրերից կազմված հաջորդականություն ։ 
Պահանջվում է արտածել հաջորդականության բոլոր այն տարրերը, որոնք կրկնվում են։ 
Կրկնվող թվերը պետք է արտածվեն նույն հերթականությամբ ինչպես ներմուծվել էին 
և միմյանցից պետք է բաժանված լինեն բացատանիշով։ 
Խնդիրը լուծելիս օգտագործել դինամիկ զանգված։ (դաս 10)
*/
 

 
#include <iostream>
int main ()
{
  unsigned long N;
  std::cin >> N;
  long * dinArr = new long [N];
  long * dinArr2 = new long [N];
  for (long i = 0; i < N; i++)
  {
    std::cin >> dinArr[i];
  }

/////////////////////////////////////////////////////////////////
  int firstElem = dinArr[0];
  for(long i = 1; i < N; i++)
  {
    if(dinArr[i] == firstElem)
    {
      std::cout << firstElem <<  " ";
      break;
    }
  }

  for (long i = 1; i < N; i++)
  { 
      long repeat = 0;
      for(long j = i + 1; j < N; j++)
      {
        
        if(dinArr[i] == dinArr[j] && i != j && dinArr[i] != firstElem)
        {
           dinArr[j] = firstElem;
		       repeat++;
        }

      }

      if(repeat != 0)
      {
        std::cout << dinArr[i] << " ";
        dinArr[i] = firstElem;
      //  i = i + repeat -1;
        
      }

   
  }

delete [] dinArr;


}

