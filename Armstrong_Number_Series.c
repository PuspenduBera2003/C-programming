#include<stdio.h>
#include<math.h>
void main()
{
    int start, end, digit, i, sum, num;
    printf("Enter lower limit\n");
    scanf("%d", &start);
    printf("Enter upper limit\n");
    scanf("%d", &end);
    printf("Armstrong numbers from %d to %d are\n",start ,end);
    for(i=start; i<=end; i++)
    {
        sum=0;
        num = i;
        digit = log10(num)+1;
        while(num>0)
        {
            sum += pow(num%10, digit);
            num = num/10;
        }
        if(i==sum)
        {
            printf("%d\n",i);
        }
    }
}