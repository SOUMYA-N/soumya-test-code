#include <stdio.h>

int main() {
    int n,arr[7]={0,1,2,5,6,8,9};
    scanf("%d",&n);
    int count=1,num=1;
    while(count<=n){
        int l=num;
        bool b=0;
        while(l>0){
            int r = l%10;
            for(int i=0;i<7;i++){
                if(r==arr[i]){
                    b = 1;
                    l=l/10;
                    break;
                
                }
                else{
                    b=0;
                }
            }
            if(b==0){
                num+=1;
            }
            else if(count==n){
                printf("%d",num);
                count++;
            }
            else if(b==1){
                count+=1;
                num+=1;
            }
        }
    }
    
