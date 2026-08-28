#include <stdio.h>
#include <stdlib.h>
#include "common.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
    	fprintf(stderr, "usage: cpu <string>\n");
	    exit(1);
    }
    char *str = argv[1];

    for (int i = 0; i < 7; i++) {
	    printf("%d", i);
	    printf(" + ");
	    printf("%s\n", str);
	    Spin(1);
    }
    return 0;
}
