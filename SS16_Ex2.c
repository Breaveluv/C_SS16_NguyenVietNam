#include <stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main() {
    int a=1;
    int b=6;
    swap(&a,&b);
    printf(" a: %d b: %d ",a,b);
    
    return 0;
}