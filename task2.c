#include <stdio.h>

int main(){
	int data, price;
	char type;
	
	printf("Enter the GBs: ");
	scanf("%d", &data);
	
	if (data <= 2){
		price = data*50;
		printf("The bill is %d PKR", price);
	}
	else if (data>2 && data<=10){
		printf("Enter Y for prepaid and N for postpaid: ");
		scanf("%c", &type);
		if (type == 'y'){
			price = data*40;
			printf("The bill is %d PKR", price);
		}
		if (type == 'n'){
			price = data*35;
			printf("The bill is %d PKR", price);
		}
	}
	else if (data > 10){
		price = data*25;
		printf("The bill is %d PKR");
	}
	return 0;
}
