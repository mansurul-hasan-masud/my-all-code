#include <stdio.h>

int main()
{
	double a, b, c, d, e,avg1, avg2;
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	avg1 = ((a*2)+(b*3)+(c*4)+d)/10;
	printf("Media: %0.1lf\n", avg1);
	if(avg1 >= 7.0){
		printf("Aluno aprovado.\n");
	}
	else if( avg1 < 5.0) {
		printf("Aluno reprovado.\n");
	}
	else{
		printf("Aluno em exame.\n");
		scanf("%lf", &e);
		printf("Nota do exame: %0.1lf\n", e);
		avg2 = (avg1 + e)/2;
		if(avg2 >= 5.0) {
			printf("Aluno aprovado.\n");
		}
		else {
			printf("Aluno reprovado.\n");
		}
		
		printf("Media final: %0.1lf\n", avg2);
	}
	
	return 0;
	
}
