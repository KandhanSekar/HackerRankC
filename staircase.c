#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i; 
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
    printf("%*s", n-i, "#");
    for (int j = 0; j < i; j++) {
        printf("#");
    }
    printf("\n");
}
    return 0;
}
