//#include<stdio.h>
//1.Main Function
//void main()
//{
    // --------------------------postCode ตัวแปล vari-----------------------------
    //int postCode1 = 23000;                               // เหมือนจะเป็นการกำหนดค่า
    //int postCode2 = 24000;                               // ของตัว postCode
    //int postCode3 = 25000;
    //int postCode4 = 26000;


    // ------------------------------ ตัวแสดงผล -------------------------------------

    //printf("Post Code:%d, %d, %d, %d\n\n", postCode1, postCode2, postCode3, postCode4); // statment


    // ----------------------------- คำสั่งตำแหน่ง -------------------------------------

    //int postCodes[5] = { 23000, 24000, 25000, 26000, 27000}; 
    //       เริ่มจาก         0      1      2       3     4<---  away index index บอกตัวแหน่ง

    //printf("Post Code:%d\n", postCodes[0]);
    //printf("Post Code:%d\n", postCodes[1]);
    //printf("Post Code:%d\n", postCodes[2]);
    //printf("Post Code:%d\n", postCodes[3]);
    //printf("Post Code:%d\n", postCodes[4]);


    // ----------------------------- คำสั่งใช้วนซ้ำ -------------------------------------

    //int postCodes[] = {23000, 24000, 25000, 26000, 27000, 29000};

    // int count = sizeof(postCodes) 4 byte * 5 element = 20 ถ้าเราไม่ใส่ / sizeof(postCodes[0]);
    // มันจะกลายเป็นคูณ

    //int count = sizeof(postCodes) / sizeof(postCodes[0]); 
    //printf("Count:%d\n", count);                          

    //for (int i = 0; i <= count - 1; i++)
    //{
        //printf("Post Code:%d\n", postCodes[i]);
    //}
//}


// 2.callMessage Sub Function

#include <stdio.h>
void callPostCode();

// 1.Main Function
// void main()
// {    callPostCode();}

void callPostCode()
{
    int postCodes[] = {23000, 24000, 25000, 26000, 27000, 29000};

    // int count = sizeof(postCodes) 4 byte * 5 element = 20 ถ้าเราไม่ใส่ / sizeof(postCodes[0]);
    // มันจะกลายเป็นคูณ

    int count = sizeof(postCodes) / sizeof(postCodes[0]);
    printf("Count:%d\n", count);

    for (int i = 0; i <= count - 1; i++)
    {
        printf("Post Code:%d\n", postCodes[i]);
    }
}