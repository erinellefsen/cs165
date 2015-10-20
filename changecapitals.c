#include <stdio.h>
#include "iscapital.h"

int main(int argc, char* argv[]) {
 	char c;

	while ((c=getchar()) != EOF){
		printf("%c",iscapital(c));
		
}
	return 0;
}
