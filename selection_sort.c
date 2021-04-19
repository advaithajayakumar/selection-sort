#include<stdio.h>
int main(){
    int arr[50],size,i,j,small,temp;
    printf("ener the size of array");
    scanf("%d",&size);
    for(i=0;i<size;++i){
        printf("%d element of tha array",(i+1));
        scanf("%d",&arr[i]);
    }
    
    
    for(i=0;i<size;++i){
        small=i;
        for(j=i+1;j<size;++j){
            if(arr[small]>arr[j]){
                small=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[small];
        arr[small]=temp;
        
    }
    //display
    for(i=0;i<size;++i){
        printf("%d ",arr[i]);
    }
    return 0;
}