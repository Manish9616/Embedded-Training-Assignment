#include<stdio.h>
int main()
{
        int x=100,z=3;
        {
                int x=100, z=10;
                printf("%d%d",x,z);
        }
        printf("%d%d",x,z);
}


output: 10010100
