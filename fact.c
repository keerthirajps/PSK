void fact()
{
    int n, i;
    unsigned long long factorial = 1;
    printf("Enter an number: ");
    scanf("%d",&n);
    // show error if the useers a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative and number doesn't exist.");
    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;              // factorial = factorial*i;
        }
        printf("Factorial of %d = %llu", n, factorial);
    }
}
