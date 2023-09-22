#include <stdio.h>

int main() {
	
	//user's input
	float value;
	
	

	//variables for notes
	int note100=0, note50=0, note20=0, note10=0, note5=0, note2=0;

	//variables for coins
	int coin100=0, coin50=0, coin25=0, coin10=0, coin5=0, coin1=0;
	
	scanf("%f", &value);

	
	//counting how many 100 notes are
	while(value - 100 >= 0){
		value-=100;
		note100+=1;
	}
		
	//counting how many 50 notes are:
		while(value - 50 >= 0){
		value-=50;
		note50+=1;
	}
	
	//counting how many 20 notes are:
		while(value - 20 >= 0){
		value-=20;
		note20+=1;
	}
	
	//counting how many 10 notes are:
		while(value - 10 >= 0){
		value-=10;
		note10+=1;
	}
	
	//counting how many 5 notes are:
		while(value - 5 >= 0){
		value-=5;
		note5+=1;
	}
	
	//counting how many 2 notes are:
		while(value - 2 >= 0){
		value-=2;
		note2+=1;
	}
	

	
	//counting how many 100 cents are:
		while(value - 1 >= 0){
		value-=1;
		coin100+=1;
	}	
	
	//counting how many 50 cents are:
		while(value - 0.50 >= 0){
		value-=0.50;
		coin50+=1;
	}
	
	//counting how many 25 cents are:
		while(value - 0.25 >= 0){
		value-=0.25;
		coin25+=1;
	}	
	
	//counting how many 10 cents are:
		while(value - 0.10 >= 0){
		value-=0.10;
		coin10+=1;
	}
	
	//counting how many 5 cents are:
		while(value - 0.05 >= 0){
		value-=0.05;
		coin5+=1;
	}	
	
	//counting how many 5 cents are:
		while(value - 0.01 >= 0){
		value-=0.01;
		coin1+=1;
	}	
	
		
	//printing out a lot data here
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", note100);
	printf("%d nota(s) de R$ 50.00\n", note50);
	printf("%d nota(s) de R$ 20.00\n", note20);
	printf("%d nota(s) de R$ 10.00\n", note10);
	printf("%d nota(s) de R$ 5.00\n", note5);
	printf("%d nota(s) de R$ 2.00\n", note2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", coin100);
	printf("%d moeda(s) de R$ 0.50\n", coin50);
	printf("%d moeda(s) de R$ 0.25\n", coin25);
	printf("%d moeda(s) de R$ 0.10\n", coin10);
	printf("%d moeda(s) de R$ 0.05\n", coin5);
	printf("%d moeda(s) de R$ 0.01\n", coin1);
	

	return 0;
}