#include <iostream>
#include <string.h>
using namespace std;
//     float toan, van, ly, hoa, sinh, su, dia, ngoaingu;
//     /*
// Tiếng Anh - N1
// Tiếng Nga - N2
// Tiếng Pháp - N3
// Tiếng Trung Quốc - N4
// Tiếng Nhật - N5
// Tiếng Hàn -N6
// */
//     string maNN[6]{
//         "N1", "N2", "N3", "N4", "N5", "N6"};
struct diem
{
    float toan, van, ly, hoa, sinh, su, dia, ngoaingu;
};

struct DiemCoBan
{
    float toan, van, ly, hoa, sinh, su, dia;
};

struct NgoaiNgu
{
    string ma;
    string ten;
    float diem;
};

struct SinhVien
{
    DiemCoBan diemCoBan;
    NgoaiNgu ngoaiNgu[6];
    int soNgoaiNguDaNhap;
};

NgoaiNgu danhSachNgoaiNgu[6] = {
    {"N1", "Tiếng Anh", 0},
    {"N2", "Tiếng Nga", 0},
    {"N3", "Tiếng Pháp", 0},
    {"N4", "Tiếng Trung", 0},
    {"N5", "Tiếng Nhật", 0},
    {"N6", "Tiếng Hàn", 0}
};
// hàm check
bool check_score(float diem)
{
    // điểm ko  0-10 => true
    /*
    if(diem >=0 && diem <= 10 ) cout<<"true";
    else cout<<"false";
    */
    return diem >= 0 && diem <= 10; // trả về kqua đúng
};
int main()
{
    int n; // nhập số người cần nhập điểm
           /*
           giả sử nếu ko thi lý hóa sinh thì enter để bỏ qua => hệ thống tự động ghi NaN hoặc để trống, tùy
           */
    cout << "Nhập số thí sinh :";
    cin >> n;
}