#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int cnt0 =0;
    for(int i=0;i<n;i++){
        if(a[i] == 0){
            cnt0++;
        }
    }
    printf("%d -> %d\n",0,cnt0);
    return 0;
}