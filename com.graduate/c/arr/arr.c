//
// Created by dongchuan on 2018/12/28.
//

#include <stdio.h>

void getArrSize();

void demo1();

int main(void) {
//    getArrSize();
    demo1();
    return 0;
}

void demo1() {// ��ϰ��ʮֻС������� ����һ������ �洢С������  ͨ�������ҵ����ص�С��   �ҵ��������������ֵ���±�     �����±��ӡ����
    int arr[5] = {2,5,6,1,9};
    int max = arr[0];
    int maxIndex = 0;
    for (int i = 0; i < 5; ++i) {
        if (max < arr[i]){
            max = arr[i];
            maxIndex = i;
        }
    }
    printf("index = %d, value = %d", maxIndex, max);
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
