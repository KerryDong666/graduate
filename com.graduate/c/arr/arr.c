//
// Created by dongchuan on 2018/12/28.
//

#include <stdio.h>

void getArrSize();

int main(void) {
//    getArrSize();
    // ��ϰ��ʮֻС������� ����һ������ �洢С������  ͨ�������ҵ����ص�С��   �ҵ��������������ֵ���±�     �����±��ӡ����

    return 0;
}

/**
 * ������Ԫ�ظ���:
 * int ��size_t�� unsigned int ����  = sizeof(������)/sizeof(����Ԫ�� | ������������)
 */
void getArrSize() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    printf("����Ԫ�ظ��� %d", size);
}
