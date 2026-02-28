/******************************************************************************
 * Họ và tên: [bùi đăng khoa]
 * MSSV:      [PS48500]
 * Lớp:       [COM108-CS21302]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
//  Input: nhập vào 1 chuỗi 
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi 
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u


#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];

    printf("Xin moi nhap vao chuoi: ");
    gets(s);   

    int i = 0;
    int n = 0;   
    int p = 0;   

    while(s[i] != '\0')
    {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'
            || s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
                n++;
            else
                p++;
        }
        i++;
    }

    printf("Chuoi '%s' co chua: %d nguyen am va %d phu am.", s, n, p);

    return 0;
}

