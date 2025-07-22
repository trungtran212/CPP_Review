#include <iostream>
#include <string>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

struct Con_nguoi
{
    Con_nguoi(string te, int t, float cc)
    {
        tuoi = t;
        chieu_cao = cc;
        ten = te;
        da_nhap = false;
    }

    virtual string choi_xep_hinh() // Hàm ảo -> khi bị gọi mà có hàm overwrite nó thì nó sẽ lấy hàm kia
    {
        return "Truyen thong";
    }

    int tuoi;
    string ten;
    float chieu_cao;
    bool da_nhap;
};

struct GaiNgoan : public Con_nguoi
{
    GaiNgoan(string te, int t, float cc) : Con_nguoi(te, t, cc) {}
    string choi_xep_hinh()
    {
        return "Cay Keo";
    }
};

struct GaiHu : public Con_nguoi
{
    GaiHu(string te, int t, float cc) : Con_nguoi(te, t, cc) {}
    string choi_xep_hinh()
    {
        return "Full Skill";
    }
};

void nhap_luon(Con_nguoi *em_yeu)
{
    em_yeu->da_nhap = true;
    cout << "Nhap em " << em_yeu->ten << " thanh cong" << " theo kieu: " << em_yeu->choi_xep_hinh() << endl;
}

int main()
{
    Con_nguoi *Hoi_phu_nu[5]{
        new Con_nguoi("Ha Vy", 20, 1.55),
        new GaiHu("Khanh Linh", 22, 1.63),
        new GaiHu("Quynh", 22, 1.60),
        new GaiNgoan("Nhi", 23, 1.58),
        new Con_nguoi("An", 22, 1.60)}; // Down Casting

    Con_nguoi *bo_nhi{nullptr};

    for (int i = 0; i < 5; i++)
    {
        bo_nhi = Hoi_phu_nu[i];
        nhap_luon(bo_nhi);
    }

    return 0;
}