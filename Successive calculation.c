#include <stdio.h>
int smultiplication(int x , int y);
int ssquaring(int x , int y);
int main()
{
    int x,n;
    printf("Enter the number( i.e. X ) : ");
    scanf("%d",&x);
    printf("Enter the power( i.e. n )  :  ");
    scanf("%d",&n);
    printf("Successive Multiplication : %d\n", smultiplication(x,n));
    printf("Successive Squaring : %d ", ssquaring(x,n));
}
int smultiplication(int x , int y)
{
    int result = x;
    for(int i=1;i<y;i++)
    {
        result = result*x;
    }
    return result;
}
int ssquaring(int x , int y)
{
    if (y == 0)
        return 1;
    else if (y%2 == 0)
        return ssquaring(x, y/2)*ssquaring(x, y/2);
    else
        return x*ssquaring(x, y/2)*ssquaring(x, y/2);
}
