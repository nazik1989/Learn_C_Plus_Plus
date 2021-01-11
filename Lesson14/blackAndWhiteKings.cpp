/*
Задача 11: Սև և սպիտակ թագավորներ
Մուտքում հերթականությամբ տրվում է շախմատի տախտակի վրա գտնվող 
սպիտակ և սև թագավորների վանդակների համարները, 
ապա N բնական թիվը և հաջորդականություն N շախմատի վանդակների համարներից բաղկացած։ 
Պահանջվում է արտածել YES եթե սպիտակ թագավորը կարող է ուտել սևին 
առանց անցնելու նշված N վանդակներից որևիցե մեկով, 
համարելով, որ սև թագավորը անշարժ է և NO՝ հակառակ դեպքում։ 
Խնդիրը լուծելիս օգտագործել հերթ։ (դաս 14)
*/
#include <iostream>
#include <queue>
class index 
{
  private:
  int x;
  int y;

  public:
  index(int first, int second):x(first), y(second){}
  int getX(){return x;}
  int getY(){return y;}
};

int main ()
{
  std::queue <index> chessFigures;
  const int n = 8;
  int a[n][n] = {};
  std::string whiteKing; 
  std::string blackKing;
  int count;
  std::cin >> whiteKing >> blackKing >> count;
  chessFigures.push(index(whiteKing[0] - 'A', whiteKing[1] - '1'));
  for (int i = 0; i < count; i++)
  {
    std::string figure;
    std::cin >> figure;
    int x = figure[0] - 'A';
    int y = figure[1] - '1';
    a[x][y] = 1;
  }

  while(!chessFigures.empty())
  {
    int i = chessFigures.front().getX();
    int j = chessFigures.front().getY();

    if(i == blackKing[0] - 'A' && j == blackKing[1] - '1')
    {
      std::cout << "YES";
      return 0;
    }
//////////////////////////////////////////////////////
    chessFigures.pop();
    if(i != n-1 && a[i+1][j] == 0 )
    {
      a[i+1][j] = 1;
      chessFigures.push(index(i+1, j));
    }

    if(j != n-1 && a[i][j+1] == 0)
    {
      a[i][j+1] = 1;
      chessFigures.push(index(i, j+1));
    }

    if(i && a[i-1][j] == 0)
    {
      a[i-1][j] = 1;
      chessFigures.push(index(i-1, j));
    }

    if(j && a[i][j-1] == 0)
    {
      a[i][j-1] = 1;
      chessFigures.push(index(i, j-1));
    }

        if(j && i && a[i-1][j-1] == 0)
    {
      a[i-1][j-1] = 1;
      chessFigures.push(index(i-1, j-1));
    }

    if(j !=n-1 && i!=n-1 && a[i+1][j+1] == 0)
    {
      a[i+1][j+1] = 1;
      chessFigures.push(index(i+1, j+1));
    }

    if(i !=n-1 && j && a[i+1][j-1] == 0)
    {
      a[i+1][j-1] = 1;
      chessFigures.push(index(i+1, j-1));
    }

        if(i  && j!=n-1 && a[i-1][j+1] == 0)
    {
      a[i-1][j+1] = 1;
      chessFigures.push(index(i-1, j+1));
    }
  }

  std::cout << "NO";

}