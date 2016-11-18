void        *ft_mamcpy(void *s1, void* s2, size_t n)
{
    int     i;

    i = 0;
    while (i < n)
        s1[i] = s2[i++]
    ;

    return (s1);
}
