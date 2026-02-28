/******************************************************************************
 * Họ và tên: [bùi đăng khoa]
 * MSSV:      [ps48500]
 * Lớp:       [com108-cs21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
//  Input: Nhập 5 chuỗi bất kỳ 
//  Output: Thứ tự các chuỗi đã được sắp xếp  

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[5][100];
    char temp[100];

    for(int i = 0; i < 5; i++)
    {
        printf("Nhap chuoi thu %d: ", i+1);
        gets(s[i]);
    }

    for(int i = 0; i < 4; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if(strcmp(s[i], s[j]) > 0)
            {
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }

    printf("Cac chuoi sau khi sap xep:\n");
    for(int i = 0; i < 5; i++)
        printf("%s\n", s[i]);

    return 0;
}

