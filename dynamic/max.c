/*
 * =====================================================================================
 *
 *       Filename:  max.c
 *
 *    Description:  dynamic lib
 *
 *        Version:  1.0
 *        Created:  11/01/2018 10:42:36 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
int max(int n1, int n2, int n3) {
    int max_num = n1;    
    max_num = max_num < n2 ? n2 : max_num;
    max_num = max_num < n3 ? n3 : max_num;
    return max_num;
}
