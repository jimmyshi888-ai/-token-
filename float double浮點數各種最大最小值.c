#include <stdio.h>
#include <float.h>

int main() {
    // ��� float ���O���̤j�ȩM�̤p��
    printf("Float ���̤j��: %e\n", FLT_MAX);
    printf("Float ���̤p��: %e\n", FLT_MIN);

    // ��� double ���O���̤j�ȩM�̤p��
    printf("Double ���̤j��: %e\n", DBL_MAX);
    printf("Double ���̤p��: %e\n", DBL_MIN);

    // ��� long double ���O���̤j�ȩM�̤p��
    printf("Long Double ���̤j��: %Le\n", LDBL_MAX);
    printf("Long Double ���̤p��: %Le\n", LDBL_MIN);

    return 0;
}
