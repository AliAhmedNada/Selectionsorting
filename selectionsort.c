/*
 * selectionsort.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Ali
 */
#include "selection.h"

void selectionsort(selectiontype *array, int size) {
	int i, j, counter = -1;
	selectiontype temp,var,smallest;
	for (i = 0; i < size ; i++) {
		for (j = i + 1,smallest=array[i],counter=-1; j < size; j++) {
			if (smallest > array[j]) {
				counter = j;
				smallest=array[j];
			}


		}
		if (counter != -1) {
			temp = array[i];
			array[i] = array[counter];
			array[counter] = temp;

		}
	}

}

