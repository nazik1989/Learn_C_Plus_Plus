/*
Задача 11: Մատրիցների տարբերություն
Գրել ծրագիր, որը մուտքում կստանա երկու 6x6 մատրիցներ՝ տող առ տող և 
կարտածի այդ մատրիցների տարբերությունը։ 
Անհրաժեշտ է արտածել մատրիցի տարրերը տող առ տող՝ 
նույն տողի տարրերը բաժանելով միմյանցից բացատանիշով։ (դաս 10)
*/
#include <iostream>
int main () 
{
  const int size = 6;
  int squareMatrix1[size][size];
  int squareMatrix2[size][size];
  int difMatrix[size][size];
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% 
  for(int i = 0; i < size; i++)
  {
    for(int j = 0; j < size; j++)
    {
      std::cin >> squareMatrix1[i][j];
    }
  }
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  for(int i = 0; i < size; i++)
  {
    for(int j = 0; j < size; j++)
    {
      std::cin >> squareMatrix2[i][j];
    }
  }
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  for (int i = 0; i < size; i++)
  {
    for(int j = 0; j < size; j++)
    {
      difMatrix[i][j] = squareMatrix1[i][j] - squareMatrix2[i][j];
      std::cout << difMatrix[i][j] << " ";
    }
    
    std::cout << std::endl;
  }

}