#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input_int;
	float input_float;
	//지금 원격 접속중입니다 봐드릴게 
	printf("enter an integer : ");
	scanf("%d", &input_int);
	 
	
	printf("enter a float: ");
	scanf("%f", &input_float);
	
	printf("integer : %d, float : %f\n", input_int, input_float);
	

	return 0;
}
