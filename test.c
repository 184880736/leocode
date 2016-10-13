#include <stdio.h>
#define abc(x,y,z) #x #y#z

void main(int argc,char *argv[])
{
//ex-001
    /*
    int n = argc;
    char ** v ;
    int i = 0;
    for(;i < argc; i++)
        printf("argv[%d] =%s\n", i, argv[i]);
    *v = argv[0];
    printf("v = %s\n",*v);
    */

//ex-002    
    /*
    char *abc = abc;
    int a[3][1] = {{0},{3},{4}};
    int *b;
    b = &a[0][0];
    printf("b = %d,0x%x\n",*b,b); 
    printf("a = %d\n",a[0][0]); 
    printf("a = %d\n",*(b+1)); 
    */

//ex-003
    /*
    char a='a';
    char b='b';
    char c='c';
    printf("%s\n",abc(a,b,c));
    */
}
