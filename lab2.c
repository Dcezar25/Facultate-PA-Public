#include <stdlib.h>
#include <stdio.h>
//ceva nou
int function(int x){
    x=x-2;
    return x;
}
//com luca
int main(){
	int a=30, i=0;

	while (a>0){
		a=function(a);
		i++;
	}
	printf("%d", i);
	return 0;
}
//ggggggggggggggggggg
