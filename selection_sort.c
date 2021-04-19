#include<stdio.h>
int main(){
    int arr[50],size,i;
    printf("ener the size of array");
    scanf("%d",&size);
    for(i=0;i<size;++i){
        printf("%d element of tha array",(i+1));
        scanf("%d",&arr[i]);
    }
    return 0;
}