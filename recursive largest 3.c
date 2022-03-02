#include <stdio.h>
#include <stdlib.h>

int enbuyuk(int ,int,int);

int main()
{
    int x,y,z;
    printf("3 adet sayilari giriniz : \n");
    scanf("%d%d%d",&x,&y,&z);
    printf("girilen sayinin en buyugu : %d\n",enbuyuk(x,y,z));
}

int enbuyuk(int a,int b,int c)
{
    int enbuyuk=a;
    if(b>enbuyuk)
        enbuyuk=b;
    if(c>enbuyuk)
        enbuyuk=c;
    return enbuyuk;
}
