/******************************************************************************
 * Họ và tên: [bui dang khoa]
 * MSSV:      [ps48500]
 * Lớp:       [com108-cs21302]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD 
//  Input: Nhập vào username và password 
//  Output: Đăng nhập thành công hay không thành công

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>
       
int main()
{
    char username[20];
    char password[20];

    printf("Nhap username: ");
    gets(username);

    printf("Nhap password: ");
    gets(password);

    if(strcmp(username, "admin") == 0 && strcmp(password, "123456") == 0)
        printf("Dang nhap thanh cong!");
    else
        printf("Dang nhap khong thanh cong!");

    return 0;
}

