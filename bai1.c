/******************************************************************************
 * Họ và tên: [Lê Minh Tường]
 * MSSV :      [PS37909]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC
// Input: Nhập vào điểm của sinh viên (0-10)
// Output: Hiển thị ra màn hình học lực của sinh viên
// Biết rằng:
// Học lực xuất sắc: Điểm >= 9
// Học lực giỏi: 9 > điểm >= 8
// Học lực khá: 8 > điểm >= 6.5
// Học lực trung bình: 6.5 > điểm >= 5
// Học lực yếu: 5 > điểm >= 3.5
// Học lực kém: 3.5 > điểm

#include <stdio.h>

int main()
{
    float diem;

    printf("Nhập điểm của sinh viên: ");
    scanf("%f", &diem);

    if (0 < diem && diem < 3.5)
    {
        printf("Sinh viên học lực kém");
    }
    else if (diem < 5)
    {
        printf("Sinh viên học lực yếu");
    }
    else if (diem < 6.5)
    {
        printf("Sinh viên học lực trung bình");
    }
    else if (diem < 8)
    {
        printf("Sinh viên học lực khá");
    }
    else if (diem < 9)
    {
        printf("Sinh viên học lực giỏi");
    }
    else if (diem < 10)
    {
        printf("Sinh viên học lực xuất sắc");
    }
    else
    {
        printf("Điểm cho sinh viên phải từ 0 -> 10");
    }

    return 0;
}