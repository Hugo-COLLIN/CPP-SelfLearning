//
// Created by hugoc on 23/08/2024.
//

#ifndef CPP_SELFLEARNING_MYLIB_H
#define CPP_SELFLEARNING_MYLIB_H

// inject code when calling mini = optimization
// Processor substitution
#define mini(a,b) a < b ? a : b;
#define mini2(a,b) (a < b ? a : b);
#define mini3(a,b) ((a) < (b) ? (a) : (b));

// Compilation error: duplication when multiple files are including MyLib.h
//int mini0 (int a, int b) {
//    return a < b ? a : b;
//}

// inline function = macro equivalent != function
inline int mini0 (int a, int b) {
    return a < b ? a : b;
}

#endif //CPP_SELFLEARNING_MYLIB_H
