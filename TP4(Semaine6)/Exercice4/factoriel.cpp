int factoriel(int n)
{
    int res, i;

    res = 1;
    for (i=1; i<=n; i=i+1)
    {
        res = res * i;
    }

    return res;
}
