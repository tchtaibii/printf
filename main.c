#include "ft_printf.h"

int main()
{
    unsigned int u = 4294967295;
	int i = 233 ;
	void *p = "88888";
    char c = 'a';
    char *s = "taha";
    int x = 88888;

    int o;
    int b;
    
    o = ft_printf("%x",x);
    printf("\n");
    b = printf("%x",x);

    //o = ft_printf("okay taha %u shit %d %p %c %c %s %x\n",u,i,p,c,c,s,x);
       //b = printf("okay taha %u shit %d %p %c %c %s %x\n",u,i,p,c,c,s,x);
    printf("\n");
    printf("%d\n",o);
    
    printf("%d\n",b);
}