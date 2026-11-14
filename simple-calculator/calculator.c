#include <stdio.h>

int main(void)

{

        int a;

        while(1)

        {

printf("Simple Calculator\n");

printf("1) Add\n");

printf("2) Subtract\n");

printf("3) Multiply\n");

printf("4) Divide\n");

printf("0) Quit\n");

printf("Choice:");

scanf("%d", &a);

                if (a== 0)

                {

                        printf("Bye!\n");

                        break;

                }

                else if (a > 4 || a < 0)

        {

        printf("Invalid choice\n");

        }

	}
	return 0;

}
