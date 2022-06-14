/**
 * @author: Jacson Rodrigues Correia da Silva <jacsonrcsilva@gmail.com>
 */
#ifndef _POINTERS_H
#define _POINTERS_H

#include <stdlib.h>
#include <stdio.h>

#ifdef __linux__
    #define BLUE     "\033[34m"
    #define GREEN    "\033[32m"
    #define RED "\033[31m"
    #define BROWN   "\033[33m"
    #define NORMAL   "\033[0m"
#else
    #define BLUE     ""
    #define GREEN    ""
    #define RED ""
    #define BROWN   ""
    #define NORMAL   ""
#endif

#define PRINT(X)      printf(X ": ");
#define PRINT_END(N,X)  printf(BLUE "[&%s: %p]  " NORMAL,N,&X);
#define PRINT_INT(N,X)  printf(GREEN "%s: %d  " NORMAL,N,X);
#define PRINT_PONT(N,X) printf(BROWN "%s: %p " NORMAL "->",N,X); \
    if (X==&d1 || X==&d2 || X==&d3 || X==&d4) {printf(" *");PRINT_INT(N,*X)} \
    else printf(RED " Segmentation Fault" NORMAL);
#define ENTER       printf("\n");

#ifdef __linux__
    #define CLEAR_SCREEN printf("\033[1J\033[0;0H");
#else
    #define CLEAR_SCREEN printf("\n");
#endif


#endif
