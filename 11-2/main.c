//
//  main.c
//  11-2
//
//  Created by MacBook Air on 2023/11/16.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 4;
    
    int*pi = &i;
    char*pc = &i;
    
    printf("%i, %i, %i\n", i, *pi, *pc);
    return 0;
}
