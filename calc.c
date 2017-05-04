#include <stdio.h>
#include "operators.h"
int main(){
	FILE *fp = NULL;
	int operand1, operand2;
	char operator = ' ';
	float result, line = 0;

	fp = fopen("read.txt","r");
	if(fp!=NULL){
		fscanf(fp, "%f", &line);
	
		for(int i=0; i<line; i++) {
			fscanf(fp, "%d %c %d",&operand1, &operator, &operand2);
			float(*fp)(float, float);
			switch(operator) {
				case '+':
				
				fp = add;
				result = fp(operand1, operand2);
				break;
				case '-':
				
				fp = minus;
				result = fp(operand1, operand2);
				break;
				case '*':
				
				fp = mul;
				result = fp(operand1, operand2);
				case '/':
				
				fp = div;
				result = fp(operand1, operand2);
				break;
			}		
			printf("%d %c %d = %f\n",
				 operand1, operator, operand2, result);
		}
	}
	return 0;
}

