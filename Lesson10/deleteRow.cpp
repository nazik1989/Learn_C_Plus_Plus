/*
Задача 13: Հեռացնել տողը
Գրել ծրագիր, որը մուտքում կստանա K (1 ≤ K ≤ 6) թիվը, ապա 6x5 մատրիցի տարրերը՝ տող առ տող։ 
Անհրաժեշտ է հեռացնել մատրիցից K֊րդ տողը և արտածել ստացված նոր մատրիցը։ 
Անհրաժեշտ է արտածել մատրիցի տարրերը տող առ տող՝ 
նույն տողի տարրերը բաժանելով միմյանցից բացատանիշով։ (դաս 10)
*/
#include <iostream>
int main ()
{
  short K;
  std::cin >> K;

  const int row = 6;
  const int col = 5;
  int matrix[row][col];
  for(int i = 0; i < row; i++)
  {
    for(int j = 0; j < col; j++)
    {
      std::cin >> matrix[i][j];
    }
  }
////////////////////////////////////////////
int matrixRow[row-1][col];
  for(int i = 0, k = 0; k < row - 1; i++, k++)
  {
    if (i == K-1)
    {
      i++; 
    }
    for(int j = 0; j < col; j++)
    {
      matrixRow[k][j] = matrix[i][j];
      //std::cout <<"matrix"<<i<<j<<" = "<<matrix[i][j] <<" ";
      //std::cout <<"matrixRow"<<k<<j<<" = "<<matrixRow[k][j]<<std::endl;
    }
  }
  ////////////////////////////////////////////////
    for(int i = 0; i < row-1; i++)
  {
    for(int j = 0; j < col; j++)
    {
      std::cout<< matrixRow[i][j]<<" ";
    }
    std::cout << std::endl;
  }

}
