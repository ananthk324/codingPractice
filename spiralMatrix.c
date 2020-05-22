#include <stdio.h>

int main()
{
    int a[][4] = {{2,3,4,5},{13,14,15,6},{12,17,16,7},{11,10,9,8}};
    
    int t=0,b=3,l=0,r=3,dir=0;
    
    while(t<=b && l<=r) {
        switch(dir) {
            case 0:
            for(int i=l;i<=r;i++) printf("%d ",a[t][i]);
            t++;
            dir=1;
            break;
            
            case 1:
            for(int i=t;i<=b;i++) printf("%d ",a[i][r]);
            r--;
            dir=2;
            break;
            
            case 2:
            for(int i=r;i>=l;i--) printf("%d ",a[b][i]);
            b--;
            dir=3;
            break;
            
            default:
            for(int i=b;i>=t;i--) printf("%d ",a[i][l]);
            l++;
            dir=0;
            
        }
    }
    return 0;
}
