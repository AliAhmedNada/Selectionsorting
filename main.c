/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Ali
 */
#include <stdio.h>
#include "selection.h"


void main (void)
{
int i,arr[]={33,66,222,444,66,33,302,332 ,111};

selectionsort(arr,9);

for(i=0;i<8;i++)
	printf("arr[%d]=%d\n",i,arr[i]);


}

