
#include <stdio.h>

void point_demo1();

void point_demo2();

/**
 * 指针相关
 * @return
 */
int main(void) {
//    point_demo1();
    point_demo2();
    return 0;
}

/**
 * 指针的定义
 * 对指针变量定义的一般形式为:
类型说明符 *变量名;
其中,这里的*与前面的类型说明符共同说明这是一个指针变量,类型说明符表示该指针变量所指向的变量为何种数据类型,变量名即为定义的指针变量名。除此之外，C还提供*运算符获取地址上对应的值
 */
void point_demo2() {
    int num = 2014;
    int *p = &num;
    printf("num Address = 0x%x,num=%d\n", &num, num);
    printf("p = 0x%x,*p=%d\n", p, *p);
    printf("%d\n", *&num);
}

/**
 * 指针hello world
 */
void point_demo1() {
    int i;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    char b[10] = {'c', 'l', 'a', 'n', 'g', 'u', 'a', 'g', 'e'};
    for (i = 0; i < 10; i++) {
        printf("int Address:0x%x,Value:%d\n", &a[i], a[i]);
    }
    printf("\n");
    for (i = 0; i < 10; i++) {
        printf("char Address:0x%x,Value :%c\n", &b[i], b[i]);
    }
}


