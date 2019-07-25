#include <stdio.h>
int main()
{
    int N,K, i,arr[50],sum = 0;
    scanf("%d %d",&N,&K);
    for(i=0;i<N;i++)
    {
      scanf("%d",&arr[i]);
    }
    i = 0;
    while ( arr[i] <=K)
    {
        sum += arr[i];
        ++i;
    }
    printf("%d",sum);
    return 0;
}
