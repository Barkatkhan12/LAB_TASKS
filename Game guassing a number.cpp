#include <stdio.h>
int main(){
	int secret_number;
	int guass_number;
	secret_number=5;
	int i;
	int guass_limit;
	guass_limit=4;
	for (i=1; i<=guass_limit;i++){
		printf("Guass the number on %d attempt :",i);
		scanf("%d",&guass_number);
		if (guass_number==secret_number){
			printf("yes this is the number\n");
			printf("you found the number on %d attempt",i);
			break;
		}
	}
	    if (guass_number!=secret_number){
	    	printf("you lost the game");
		}
	
	return 0;
}
