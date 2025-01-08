#include <stdio.h>
int checkLastDigit(int a[], int s);
int cnt0,cnt1,cnt2,cnt3,cnt4,cnt5,cnt6,cnt7,cnt8,cnt9;

int main(void){
    int s,a[100]={0,0};
    checkLastDigit(a,s);
    
    return 0;
}

int checkLastDigit(int a[], int s){
    scanf("%d",&s);

    for(int i=0; i<s;i++){
        scanf("%d",&a[i]);
        if(a[i]%10==1) cnt1++;
        else if(a[i]%10==0) cnt0++;
        else if(a[i]%10==2) cnt2++;
        else if(a[i]%10==3) cnt3++;
        else if(a[i]%10==4) cnt4++;
        else if(a[i]%10==5) cnt5++;
        else if(a[i]%10==6) cnt6++;
        else if(a[i]%10==7) cnt7++;
        else if(a[i]%10==8) cnt8++;
        else if(a[i]%10==9) cnt9++;
    }
    
    printf("%d %d\n",0,cnt0);
    printf("%d %d\n",1,cnt1);
    printf("%d %d\n",2,cnt2);
    printf("%d %d\n",3,cnt3);
    printf("%d %d\n",4,cnt4);
    printf("%d %d\n",5,cnt5);
    printf("%d %d\n",6,cnt6);
    printf("%d %d\n",7,cnt7);
    printf("%d %d\n",8,cnt8);
    printf("%d %d\n",9,cnt9);
    

}