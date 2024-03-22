#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    
    int num[n];
    for(int i=0;i<n;i++) scanf("%d", &num[i]);
    
    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            int temp;
            if(num[j]>num[j+1]){
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }    
    }
    
    for(int i=0;i<n;i++) 
        printf("%d\n",num[i]);
}