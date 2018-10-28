//
//  core.c
//  Week10 
//
//  Created by Ashley Coleman on 7/5/18.
//  Copyright © 2018 Ashley Coleman. All rights reserved.
//

#include <stdlib.h>
#include <string.h>

#include "core.h"

int apply_twice(int value, int_application_function func) {
    if (func == NULL ) {
        return value;
    }
    return func(func(value));
}

void change_string(char * str, change_string_function func) {
    if (str == NULL || func == NULL) {
        return;
    } 

    while(*str != '\0') {
        *str = func(*str);
        str++;
    }
}

char unsave_to_upper(char c) {
    if(c == ' ') { return c; }
    return c - 32;
}

int core_main(int argc, const char * argv[]) {
    char s[] = "a lower case string";
    change_string(s, unsave_to_upper);
    printf("%s\n", s);

    return 0;
}

