#include <stdio.h>

int main(){
	int n_minus_one=0;
	int n=1;
	int old_n;
	int nth_fib;

	printf("To how many digits would you like to calculate: ");
	scanf("%d",&nth_fib);
	
	if(nth_fib!=0)	printf("\n0 ");

	for(int i = 0;i<nth_fib-1;i++){
		printf("%d ",n);
		old_n=n;
		n+=n_minus_one;
		n_minus_one=old_n;
		
	}
	
	printf("\n");
	return 0;
}
