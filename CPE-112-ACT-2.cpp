#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class wasteful{
	public:
		void display(int m[5]);
		long digit[100],n, x, t, j, factor[100], rem[100], marks[10],m[10];
};
int main() 
{
	int jefrey[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	wasteful guwapo;
	guwapo.display (jefrey);
	return 0;
}

void wasteful::display(int jefrey[10])
{
	cout<<"Displaying wasteful number(s):"<<endl;
	
	for (int i=0; i<10; i++)
	{
		
		for (i=0;i<10; i++)
			{
			digit[i]=0;
			n=jefrey[i];
			x=n;
			for (;n!=0;)
				{
				n=n/10;
				digit[i]++;
				}
			t=0;
			j=2;
			factor[i]=0;
			for (;x!=0;)
				{
				if (x%j==0)
					{
					x=x/j;
					rem[t]=j;
					t++;
					factor[i]++;
					if(x==1)
						{
						break;
						}
					}
			else
				{
				j++;
				}
			}
		}
		for (i=0; i<10; i++)
			{
			if (factor[i]>digit[i])
				{
				cout<<"Number:"<<jefrey[i]<<endl;
				}
			}
		}
}

