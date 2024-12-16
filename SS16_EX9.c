#include <stdio.h>
void addItem(int *arr,int addNumber, int addIndex, int length){
    for(int i = length -1;i>addIndex;i--){
        arr[i]=arr[i-1];
    }
    arr[addIndex]=addNumber;
}
int main() {
    int a[8]={1,2,3,4,5,6,7,10};
    int length = sizeof(a)/sizeof(int);
    addItem(a, 8, 3, length);
    for(int i = 0;i<length;i++){
        printf("%d\n",a[i]);
     }

    return 0;
}