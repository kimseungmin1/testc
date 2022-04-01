#include <stdio.h>

main() {
	
	int i;
	int k;
	int sum = 0;
	float sum2 = 0;
	
	for(i=8;i<=51;i++){
		if(i%2 == 0){
		
			for(k=2;k<=i-1;k++){
				if(k%2 == 0){
					sum+=k;
				}
			}
			
			sum2 += i/(float)sum;
			
		}else{
			i++;
		}
	}
	
	printf("%.3f",sum2 );
	
}


