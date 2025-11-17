#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int cnt0 =0,cnt1=0,cnt2=0,cnt3=0,cnt4=0,cnt5=0;
    for(int i=0;i<n;i++){
        if(a[i] == 0){
            cnt0++;
        }
        else if(a[i] == 1){
            cnt1++;
        }
        else if(a[i] == 2){
            cnt2++;
        }
        else if(a[i] == 3){
            cnt3++;
        }
        else if(a[i] == 4){
            cnt4++;
        }
        else if(a[i] == 5){
            cnt5++;
        }
    }
    printf("%d -> %d\n",0,cnt0);
    printf("%d -> %d\n",1,cnt1);
    printf("%d -> %d\n",2,cnt2);
    printf("%d -> %d\n",3,cnt3);
    printf("%d -> %d\n",4,cnt4);
    printf("%d -> %d\n",5,cnt5);
    return 0;
}