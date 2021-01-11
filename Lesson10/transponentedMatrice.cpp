/*
Задача 12: Տրանսպոնացված մատրից
Գրել ծրագիր, որը մուտքում կստանա 5x10 մատրից՝ տող առ տող և 
կարտածի այդ մատրիցի տրանսպոնացված մատրիցան։ 
Անհրաժեշտ է արտածել մատրիցի տարրերը տող առ տող՝ 
նույն տողի տարրերը բաժանելով միմյանցից բացատանիշով։ (դաս 10)
*/
#include <iostream>
int main ()
{
  const int row = 5, col = 10;
  int arr[row][col];

  for(int i = 0; i < row; i++)
  {
    for (int j = 0; j <  col; j++)
    {
      std::cin >> arr[i][j];
    }
  }
  //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  int TArr[col][row];

   for (int j = 0; j < row; j++)
   {
     for (int i = 0; i < col; i++)
     {
   
      TArr[i][j] = arr[j][i];
      
     }
   }
   //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   for(int i = 0; i < col; i++)
   {
     for(int j = 0; j < row; j++)
     {
       std::cout << TArr[i][j] << " ";
     }
     std::cout << std::endl;
   }
}