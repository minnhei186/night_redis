#include <unistd.h>
#include <stdlib.h>

int nw_strlen(char *str)
{
    int i;
    i=0;
    while(str[i])
        i++;
    return i;
}

void nw_put(char *str)
{
    write(STDOUT_FILENO,str,nw_strlen(str));
}

char *nw_strjoin(char *str1,char *str2)
{
    int i;
    int j;
    char *new_str;

    i=nw_strlen(str1);
    j=nw_strlen(str2);

    new_str=(char *)malloc(sizeof(char)*(i+j+1));
    i=0;
    j=0;
    while(str1[i])
    {
        new_str[j]=str1[i];
        i++;
        j++;
    }
    i=0;
    while(str2[i])
    {
        new_str[j]=str2[i];
        i++;
        j++;
    }
    new_str[j]='\0';

    return new_str;
}

char *posi_itoa(int n)
{
    int r;
    char *c;
    char *new_str;
    char *old_str;

    r=n%10;
    n=n/10;

    c=(char *)malloc(sizeof(char)*2);
    c[0]=r+'0';
    c[1]='\0';

    if(n==0)
        return c;
    old_str=posi_itoa(n);
    new_str=nw_strjoin(old_str,c);
    free(c);
    free(old_str);
    
    return new_str;
}

char *nw_itoa(int n)
{
    char *old_pt;
    char *new_pt;
    if(n>0)
        return posi_itoa(n);
    else
    {
        old_pt=posi_itoa(-n);
        new_pt=nw_strjoin("-",old_pt);
        free(old_pt);
        return new_pt;
    }
}



