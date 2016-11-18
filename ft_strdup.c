char        *ft_strdup(char *str)
{
    int     i;
    char    *r;

    i = 0;
    while (str[i])
        i++
    ;
    r = (char *)malloc(r*i);
    while (i > 0)
        r[i] = str[i--];
    return (r);
}
