#include <stdio.h>
#include <float.h>

int main() {
    // 陪ボ float 程㎝程
    printf("Float 程: %e\n", FLT_MAX);
    printf("Float 程: %e\n", FLT_MIN);

    // 陪ボ double 程㎝程
    printf("Double 程: %e\n", DBL_MAX);
    printf("Double 程: %e\n", DBL_MIN);

    // 陪ボ long double 程㎝程
    printf("Long Double 程: %Le\n", LDBL_MAX);
    printf("Long Double 程: %Le\n", LDBL_MIN);

    return 0;
}
