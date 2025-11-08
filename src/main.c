#include <unistd.h>

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



int main() 
{
    char *str;
    str="Redis";
    nw_put(str);
    
    return 0;
}
