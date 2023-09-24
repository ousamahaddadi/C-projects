#include <stdio.h>
float add(char operation,float x,float y){
	return(x+y);
}
float substract(char operation,float x,float y){
	return(x-y);
}
float multiply(char operation,float x,float y){
	return(x*y);
}
float devide(char operation,float x,float y){
	return(x/y);
}
int IsItInteger(float n){
	if ((int)n == n)
		return 1;
	else
		return 0;
}
int main(void){
	float x,y,result = 0;
	char operation;
	printf("Enter the operation (e.g : 23.3 * 3.3) : ");
	scanf("%f %c %f",&x,&operation,&y);
	switch (operation){
	case '+':
		result = add(operation,x,y);
		break;
	case '-':
		result = substract(operation,x,y);
		break;
	case '*':
		result = multiply(operation,x,y);
		break;
	case '/':
		result = devide(operation,x,y);
		break;
	default:
		printf("Error, please retry !");
		return 0;
		break;
	}
	if (operation == '/' && y == 0){
		printf("Error, can't devide by 0\n");
		return 0;
	}
	else if (IsItInteger(x) && IsItInteger(y) && IsItInteger(result))
		printf("%.f %c %.f = %.f\n",x,operation,y,result);
	else
		printf("%.2f %c %.2f = %.2f\n",x,operation,y,result);
	return(0);
}

