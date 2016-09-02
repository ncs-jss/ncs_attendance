#include "attendance.class"
#include <cstdio>
using namespace std;

int main()
{
	attendance ob;
	while(1)
	{
		char choice;
		ob.begin();
		scanf("%s",&choice);
		switch(choice)
		{
			case '1':
			{	
				ob.day();
				ob.task();
				ob.show();
				printf("Any updates? (Y/N)\n");
				scanf("%s",&choice);
				if(choice=='y'||choice=='Y')
					ob.update();
				else if(choice=='n'||choice=='N')
					break; 
				else
					printf("Incorrect input. \n\n");
			}
			case '2':	
			{	
				ob.show();
				ob.end();
				break; 
			}
			case '3':
			{ 
				ob.day();
				ob.update();
				ob.end();
				break;
			}
			case '4':
			{
				ob.newm();
				printf("\n\n");
				ob.show();
				ob.end();
				break;
			}
			case '5':
			{
				printf("\n");
				ob.caditshow();
				ob.end();
				break;
			}
			default:
			{	printf("Incorrect input.\n\n");	break;}
		}
		cout<<"\n Want to do something more??(Y/N) \n";
		scanf("%sc",&choice);
		if(choice=='y'||choice=='Y')
			continue;
		else if(choice=='n'||choice=='N')
			{ ob.end();	break;	}
		else
			{	printf("Incorrect input. Run_Aborted.\n\n");	break;	}
	}
	return 0;
}