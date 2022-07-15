//first method - memoization
//second method - recursion
//third method - general term
#include <cstdio>
#include <cmath>

int memo[100]={0, 1, 1};

int memoization(int n)
{
    if(n<2)
    {
        return n;
    }
    if(memo[n]!=0)
    {
        return memo[n];
    }
    else
    {
        memo[n]=memo[n-1]+memo[n-2];
        return memo[n];
    }
}

int recursion(int n)
{
    if(n<=0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    return recursion(n-2)+recursion(n-1);
}

double general_term(int n)
{
    double sqrt_5=sqrt(5);
    return 1/sqrt_5*(pow((1+sqrt_5)/2, n)-pow((1-sqrt_5)/2, n));
}

int main()
{
    int in_n;
    scanf("%d", &in_n);
    for(int i=1; i<=in_n; i++)
    {
        printf("memoization #%d order=%d\n", i, memoization(i));
        printf("recursion #%d order=%d\n", i, recursion(i));
        printf("general term #%d order=%.0f\n", i, general_term(i));
        printf("\n");
    }
}