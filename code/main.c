#include <stdio.h>
#include <math.h>
#include <stdlib.h>

long int modMulti(long int x, long int y, long int m);

int main(){
    long int a,b,mdl,x;
    scanf("%ld %ld %ld",&a,&b,&mdl);
    x = modMulti(a,b,mdl);
}

long int modMulti(long int x, long int y, long int m){
    int n, *bin;
    long int y2;
    n = (int) (log2(n) + 1);
    bin = (int*) malloc(n*sizeof(int));
    y2 = y;
    for(int i=0;i<n;i++){
        bin[i] = y2%2;
        y2/=2;
        printf(" (%d, %d) ",i,bin[i]);
    }
    free(bin);
}