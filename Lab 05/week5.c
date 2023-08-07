#include <stdio.h>

int main() 
{
    // int a = 100, b = 0144, c = 0x64, d = 0b1010;
    // int x = 100;
    // printf("value of x = %d\n", x);
    // printf("reference of x = %d\n", &x);//ปริ้นค่าตำแหน่ง
    // printf("reference of x = %p\n", &x); //ปริ้นค่าตำแหน่งมีCต่อท้าย

    // x = 200;
    // &x = 5000; // ทำไม่ได้ เพราะจะไปเปลี่ยนค่าAddressแทนค่าข้างในAddress
    // int *ptr; //กำหนดว่าให้เป็นPointer
    // ptr = &x; //กำหนดค่าAddress

    // printf("value of ptr = %p\n", ptr);
    // printf("value of reference of ptr = %d not have * %d\n", *ptr,ptr);

    // ptr++; //เปลี่ยนค่าตำแหน่งแทนค่าข้างใน
    // printf("value of ptr = %p\n", ptr);
    // printf("value of reference of ptr = %d not have * %d\n", *ptr,ptr);

    // int data[10] = { 1, 2, 3, 4, 5}; 
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("data[%d] [%p] = %d\n", i, &data[i], data[i]);
    // }

    int x;
    char s[20];
    scanf("%d %s", &x, s);
    printf("%d\n%s",x,s);


}