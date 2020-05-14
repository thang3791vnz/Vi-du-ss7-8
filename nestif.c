#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float com = 0, sales_amt;
	char grade;
	printf("\Enter the Sales Amount: ");
	scanf("%f", &sales_amt);
	printf("\ Enter the Grade: ");
	scanf("%c", grade);
	if (sales_amt > 10000)
	 com = sales_amt * 0.1;
	else
	 com = sales_amt * 0.05;
	printf("\n Commission = %f", com);
	return 0;
}
