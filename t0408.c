#include <stdio.h>

main() {
	
	char hh[] = "We are the champion";
	char Large[80];
	char Small[80];
	int i;
	
	for(i=0;hh[i]!='\0';i++){
		
		if(hh[i] >= 'a' && hh[i] <= 'z'){
			Large[i] = hh[i] - ('a'-'A');
		}
		else{
			Large[i]= hh[i];
		}
			
	}
	Large[i] ='\0';
	
	
	for(i=0;hh[i]!='\0';i++){
		
		if(hh[i] >= 'A' && hh[i] <= 'Z'){
			Small[i] = hh[i] + ('a'-'A');
		}
		else{
			Small[i]= hh[i];
		}
			
	}
	Small[i] ='\0';
	
	
	
	printf("%s\n", Large); // WE ARE THE CHAMPION
	printf("%s\n", Small); // we are the champion

}
