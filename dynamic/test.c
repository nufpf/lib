/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  test dynamic lib
 *
 *        Version:  1.0
 *        Created:  11/01/2018 10:54:35 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "max.h"


#include	<stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
    int
main ( int argc, char *argv[] )
{
    int a = 10;
    int b = -2;
    int c = 100;
    printf("max among %d, %d and %d is %d.\n", a, b, c, max(a,b,c));
    return 0;
}				/* ----------  end of function main  ---------- */

