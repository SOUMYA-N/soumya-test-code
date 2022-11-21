#include <stdio.h>
int main() {
    int a[256][56];
    int r,c,i,j;
    int x1=-1,x2,y1=-1,y2;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
      for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==0)
            {
                if(x1==-1)
                {
                    x1=i;
                    x2=i;
                }
                else
                {
                    if(i<x1)
                      x1=i;
                    if(i>x2)
                      x2=i;
                }
                if(y1==-1)
                {
                    y1=j;
                    y2=j;
                }
                else
                {
                    if(j<y1)
                      y1=j;
                    if(j>y2)
                      y2=j;
                }
            }
        }
    }
    printf("(%d,%d),(%d,%d),(%d,%d),(%d,%d)",x1,y1,x1,y2,x2,y1,x2,y2);
    return 0 ;
}
