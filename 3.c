# DE
#include<stdio.h>
int mean(int a[],int n)
{
    int i,mean,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    mean=sum/n;
    return mean;
}
void main()
{
    int a[100],i,j,p,cp=0,b[100],n,bin;
    printf("enter array size");
    scanf("%d",&n);
    printf("enter array");
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    printf("enter bin size");
    scanf("%d",&bin);
    int h=bin%n;
    if(h!=0)
    {
        for(i=0;i<(bin-h);i++)
        {
            a[n++]=0;
        }
    }
    for(i=0;i<n;i=(i+bin))
    {
       int k=0,cp=0;
       for(j=i;j<(i+bin);j++)
       {
           b[k]=a[j];
           k=k+1;
       }
       cp=mean(b,bin);
    
    for(p=i;p<(i+bin);p++)
    {
       a[p]=cp; 
    }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}



****************************output************************


enter array size27
enter array13 16 16 19 20 20 21 22 22 25 25 25 25 30 33 33 35 35 35 35 36 40 45 46 52 70
15
enter bin size3
151515191919212121252525292929343434353535434343454545
