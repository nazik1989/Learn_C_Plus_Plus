/*
Задача 15: Սպիրալաձև
Գրել ծրագիր, որը մուտքում կստանա 6x6 մատրիցի տարրերը՝ տող առ տող։ 
Արտածել մարտիցի տարրերը մեկ տողում՝ սկսելով նրա առաջին (վերևի ամենաձախ) տարրից և 
անցնելով մատրիցի տարրերի վրայով սպիտալաձև: (դաս 10)
*/

#include <iostream>

int main() 
{ const short row = 6;
  const short col = 6;
  int matrix[row][col];
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      std::cin >> matrix[i][j];
    }
  }
  //////////////////////////////
  short Ibegin = 0, Iend = row;
  short Jbegin = 0, Jend = col;
  int arr[36];

  while (Jbegin != Jend)
  {

  for(short j= Jbegin; j < Jend; j++)
  {
  
   std::cout << matrix[Ibegin][j]<<" ";
  }

  for(short i = Ibegin+1;i < Iend-1;i++)
  {
    std::cout << matrix[i][Jend-1]<<" ";
  }

  for(short j = Jend-1; j >= Jbegin; j--)
  {
   std::cout << matrix[Iend-1][j]<<" ";
  }

  for(short i = Iend-2;i >= Ibegin+1;i--)
  {
    std::cout << matrix[i][Jbegin]<<" ";
  }

  Ibegin++;
  Iend--;
  Jbegin++;
  Jend --;
 //std::cout<< std::endl;
 //std::cout << "Ibegin "<<Ibegin<<"\n";
 //std::cout << "Iend "<<Iend<<"\n";
 //std::cout << "Jbegin "<<Jbegin<<"\n";
 //std::cout << "Jend "<<Jend<<"\n";
  }



}