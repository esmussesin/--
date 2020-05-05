#include<stdio.h>
#include<math.h>
int main()
#define pi 3.141593
{
    int t;
    scanf("%d",&t);
    if(t==1)
    printf("I love Luogu!\n");
    else if(t==2)
    {
        int a=2,b=4,c=10;
        printf("%d %d\n",a+b,c-a-b);
    }
    else if(t==3)
    {
        printf("3\n12\n2\n");
    }
    else if(t==4)
    {
        double a=500,b=3,c;
        c=a/b;
        printf("%3.3f\n",c);
    }
    else if(t==5)
    {
        int k;
        k=(220+260)/(12+20);
        printf("%d\n",k);
    }
    else if(t==6)
    {
        printf("%2.4f",sqrt(117));
    }
    else if(t==7)
    {
        printf("110\n90\n0\n");
    }
    else if(t==8)
    {
        double x,y,z;
        x=10*pi,y=25*pi,z=125*4.0/3.0*pi;
        printf("%2.4f\n%2.4f\n%3.3f\n",x,y,z);
    }
    else if(t==9)
    {
        int i=1,s=1;
        for(i=1;i<4;i++)
        s=2*(s+1);
        printf("%d\n",s);
    }
    else if(t==10)
    {
        printf("9\n") ;  
    }
    else if(t==11)
    {
        printf("%2.4f",1.0*100/3);
    }
    else if(t==12)
    {
        printf("%d\n%c",'M'-'A'+1,'A'+17);
    }
    else if(t==13)
    {
        printf("16");
    }
    else if(t==14)
    {
        int w1=110,w2=10,sum=3500,count;
        for(count=100;;count--)
        {
            if((w1-count)*(w2+count)==sum)
            break;
        }
        printf("%d",w1-count);
    }
    return 0;
}
