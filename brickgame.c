#include<stdio.h>
int main()
{
    int j,n,t,i,a[1000],f;
    scanf("%d",&t);
    for(j=1;j<=t;j++){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        f=((n+1)/2)-1;
        printf("Case %d: %d\n",j,a[f]);
    }

    return 0;
}
