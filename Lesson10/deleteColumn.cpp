/*
Задача 14: Հեռացնել սյունը
Գրել ծրագիր, որը մուտքում կստանա K (1 ≤ K ≤ 5) թիվը, ապա 6x5 մատրիցի տարրերը՝ տող առ տող։ 
Անհրաժեշտ է հեռացնել մատրիցից K֊րդ սյունը և արտածել ստացված նոր մատրիցը։ 
Անհրաժեշտ է արտածել մատրիցի տարրերը տող առ տող՝ 
նույն տողի տարրերը բաժանելով միմյանցից բացատանիշով։ (դաս 10)
*/
#include <iostream>
int main ()
{
  short K;
  std::cin >> K;
  const short row = 6;
  const short col = 5;
  int matrix[row][col];

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      std::cin >> matrix[i][j];
    }
  }
//////////////////////////////////
int matrixCol[row][col-1];
for(int i = 0; i < row; i++)
{
  for(int j = 0,k = 0; k < col - 1; j++,k++)
  {
    if(j == K - 1)
    {
      j++;
    }
    matrixCol[i][k] = matrix[i][j];
  }
}
////////////////////////////////////
for(int i = 0; i < row; i++ )
{
  for (int j = 0; j < col -1; j++)
  {
    std::cout << matrixCol[i][j]<<" ";
  }
  std::cout << std::endl;
}


}