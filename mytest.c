#include <stdio.h>

main() {
	
	int i;
	int k;
	int sum = 0;
	float sum2 = 0;
	float sum3 = 0;
	
	for(i=8;i<11;i++){
		if(i%2 == 0){
		
			for(k=2;k<i;k++){
				if(k%2 == 0){
					sum+=k;
				}
			}
			
			sum2 += i/(float)sum;
			sum = 0;
		}

	}
	
	printf("%.3f",sum2 );
	
}

