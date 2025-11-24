#include "nwlib.h"
#include <sys/socket.h>
#include <unistd.h>
#include <stdlib.h>

//int nw_strlen(char *str)
//{
//    int i;
//    i=0;
//    while(str[i])
//        i++;
//    return i;
//}
//
//void nw_put(char *str)
//{
//    write(STDOUT_FILENO,str,nw_strlen(str));
//}
//
//char *nw_strjoin(char *str1,char *str2)
//{
//    int i;
//    int j;
//    char *new_str;
//
//    i=nw_strlen(str1);
//    j=nw_strlen(str2);
//
//    new_str=(char *)malloc(sizeof(char)*(i+j+1));
//    i=0;
//    j=0;
//    while(str1[i])
//    {
//        new_str[j]=str1[i];
//        i++;
//        j++;
//    }
//    i=0;
//    while(str2[i])
//    {
//        new_str[j]=str2[i];
//        i++;
//        j++;
//    }
//    new_str[j]='\0';
//
//    return new_str;
//}
//
//char *posi_itoa(int n)
//{
//    char *c;
//    int r;
//
//    r=n%10;
//    n=n/10;
//
//    c=(char *)malloc(sizeof(char)*2);
//    c[0]=r+'0';
//    c[1]='\0';
//
//    if(n==0)
//        return c;
//    return nw_strjoin(posi_itoa(n),c);
//}
//
//char *nw_itoa(int n)
//{
//    if(n>0)
//        return posi_itoa(n);
//    else
//    {
//        return nw_strjoin("-",posi_itoa(-n));
//    }
//}





int main()
{
   // int r;
   // char *c;

   // r=1;
   // c=(char *)malloc(sizeof(char)*2);
   // c[0]=r+'0';
   // c[1]='\0';
   char *new_pt;

   new_pt=nw_itoa(12);
   nw_put(new_pt);
   free(new_pt);
   system("leaks a.out");
   return 0;
}
    





//int main() 
//{
//    int sfd1;
//    int sfd2;
//    int num;
//
//    sfd1=socket(AF_INET6,SOCK_STREAM,0);
//    sfd2=socket(AF_INET6,SOCK_STREAM,0);
//
//    //printf("%i\n",sfd);
//
//    num=write(sfd1,"hello",nw_strlen("hello"));
//    printf("TCP_BUFF=%i\n",num);
//
//    
//    return 0;
//}
