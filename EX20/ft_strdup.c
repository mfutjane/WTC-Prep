//include stdlib.h to use malloc

char    *ft_strdup(char *src)
{
    char *ret;
    int src_len;
    int i;

    i = 0;
    src_len = ft_strlen(src);
    ret = malloc((sizeof(char)*src_len) + 1);
    while(src[i] != '\0')
        ret[i] = src[i++]; //copy character, increment i afterwards
    ret[i] = '\0';
    return ret;
}
