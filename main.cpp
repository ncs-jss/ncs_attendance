#include "attendance.class"
#include <cstdio>
using namespace std;

int main()
{
	attendance ob;
	char choice;
	ob.begin();
	scanf("%s",&choice);
	switch(choice)
	{
		case '1':
		{	
			ob.task();
			ob.show();
			printf("Any updates? (Y/N)\n");
			scanf("%s",&choice);
			if(choice=='y'||choice=='Y')
				ob.update();
			else if(choice!='n'||choice!='N')
				printf("Incorrect input. Run_Aborted.\n\n");
			else
				printf("\nThank you for using. :)\n\n");
			break; 
		}
		case '2':
		{	
			ob.show();
			printf("\nThank you for using. :)\n\n");
			break; 
		}
		case '3':
		{ 
			ob.update();
			printf("\nThank you for using. :)\n\n");
			break;
		}
		case '4':
		{
			ob.newm();
			printf("\nThank you for using. :)\n\n");
			break;
		}
		default:
		{	printf("Incorrect input. Run_Aborted.\n\n");	}
	}
	return 0;
}