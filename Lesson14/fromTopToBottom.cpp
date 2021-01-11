/*
Задача 10: Ծայրից ծայր
Մուտքում տրվում է 10x10 չափերով մատրից՝ բաղկացած զրոներից և մեկերից, 
պահանջվում է արտածել YES, 
եթե հնարավոր է վերևի ձախ անկյունից հասնել ներքևի աջ անկյունը՝ 
ամեն քայլին շարժվելով 1 վանդակ վերև, ներքև, ձախ կամ աջ և չանցնելով մեկերի վրայով, 
և NO՝ հակառակ դեպքում։ 
Հայտնի է որ վերևի ձախ և ներքևի աջ անկյունների վանդակները միշտ 0 են։ 
Խնդիրը լուծելիս կարելի է կիրառել ալիքի ալգորիթմը։ (դաս 14)
*/

#include <iostream>
#include <queue>

class index
{
	int x;
	int y;
	
	public:
	index (int xK, int yK): x(xK), y(yK){}
	int getX() {return x;}
	int getY() {return y;}

};

int main () 
{
	std::queue <index> q;
	const int n = 10;
	int a[n][n];
	for (int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			std::cin >> a[i][j];
		}
	}
	
	int i = 0, j = 0;
	q.push(index(i, j));
	
	while(!q.empty())
	{
		i = q.front().getX();
		j = q.front().getY();
		
		if(i == n-1 && j == n-1)
		{
			std::cout << "YES";
			return 0;
		}
		
		q.pop();
		if(i != n-1 && a[i+1][j] == 0)
		{
			a[i+1][j] = 1;
			q.push(index(i+1, j));
		}
		
		if(j != n-1 && a[i][j+1] == 0)
		{
			a[i][j+1] = 1;
			q.push(index(i, j+1));
		}
		
		if(i && a[i-1][j] == 0)
		{
			a[i-1][j] = 1;
			q.push(index(i-1, j));
		}
		
		if(j && a[i][j-1] == 0)
		{
			a[i][j-1] = 1;
			q.push(index(i, j-1));
		}
		
	}
	
	std::cout << "NO";
	return 0;
	
}