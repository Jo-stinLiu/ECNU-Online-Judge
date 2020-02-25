//
//  main.c
//  3108
//
//  Created by 刘靖迪 on 2017/6/5.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

#define N 10


//********** Specification of input **********
void input(int* p, int n)
/* PreCondition:
 p points to an array with n integers
 PostCondition:
 enter and store n integers into an array pointed by p
 */
{
    for (int i=0; i<n; i++ )
        scanf ("%d",&p[i]);
}

//********** Specification of rotate **********
void rotate(int* p, int n, int m)
/* PreCondition:
 p points to an array with n integers, m is also an integer
 PostCondition:
 rotate m elements of an array
 */
{
    int tem[n+1];
    for (int i=0; i<m; i++)
        tem[i]=p[n-m+i];
    for (int i=m; i<n; i++)
        tem[i]=p[i-m];
    for (int i=0; i<n; i++)
        p[i]=tem[i];
}

//********** Specification of output **********
void output(int* p, int n)
/* PreCondition:
 p points to an array with n integers
 PostCondition:
 print each element of an array pointed by p in one line,
 with one blank between elements.
 */
{
    for (int i=0; i<n; i++)
        printf("%d ",p[i]);
    printf("\n");
    
}

/***************************************************************/

int main()
{ int a[N],n,m;
    scanf("%d%d",&n,&m);
    //***** functions input, rotate, output are called here ******
    input(a,n);
    rotate(a,n,m);
    output(a,n);
    //************************************************************
    return 0;
}
