/*
 * @Author: s.k.t
 * @Date: 2019-08-26 21:43:57
 * @LastEditors: s.k.t
 * @LastEditTime: 2019-08-28 10:24:48
 * @Description: file content
 * @Copyright: Copyright (c) 2019 sokdkotgg.
 */
#include <stdio.h>
#include "varcalc.h"

int main(int argc, char const *argv[])
{
    for (int i = 0; i < argc; i++)
        printf ("Arg %d is %s.\n", i, argv[i]);

    return 0;
}