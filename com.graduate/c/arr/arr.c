//
// Created by dongchuan on 2018/12/28.
//

#include <stdio.h>

void getArrSize();

int main(void) {
//    getArrSize();
    // 练习：十只小猪称体重 定义一个数组 存储小猪体重  通过遍历找到最重的小猪   找到数组中数据最大值的下标     根据下标打印数据

    return 0;
}

/**
 * 求数组元素个数:
 * int （size_t） unsigned int 个数  = sizeof(数组名)/sizeof(数组元素 | 数组数据类型)
 */
void getArrSize() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    printf("数组元素个数 %d", size);
}
