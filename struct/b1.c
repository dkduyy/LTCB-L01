#include <stdio.h>
#include <string.h>

struct so_lieu_ban_hang{
    char TenHang[100];
    int DonGia, SoLuong, ThanhTien;
};
typedef struct so_lieu_ban_hang sl;

void swap(sl *a, sl *b){
    sl tmp= *b;
        *b=*a;
        *a=tmp;
}
void sapxep(sl a[], int n){
    for(int i=0; i<n-1; i++)
        for(int j= 0; j<n-i-1; j++){
            if (strncmp(a[j].TenHang,a[j+1].TenHang,1)>0) swap(&a[j],&a[j+1]);
        }
}

int main(){
    int n;
    printf("nhap so luong mat hang: "); scanf("%d", &n);
    sl a[n];
    int tong=0;
    for (int i=0; i<n; i++){
        getchar();
        printf("nhap ten hang %d: ",i+1); gets(a[i].TenHang);
        printf("don gia %d: ",i+1); scanf("%d",&a[i].DonGia);
        printf("so luong %d: ",i+1); scanf("%d",&a[i].SoLuong);
        a[i].ThanhTien= a[i].DonGia * a[i].SoLuong;
        tong+=a[i].ThanhTien;
    }
    sapxep(a,n);
    printf("\n%-5s %-15s %-10s %-10s %-10s", "STT", "Ten Hang", "Don Gia", "So Luong", "Thanh Tien");
    for(int i=0; i<n; i++){
        printf("\n %-5d %-15s %-10d %-10d %-10d", i+1, a[i].TenHang, a[i].DonGia, a[i].SoLuong, a[i].ThanhTien);
    }
    printf("\n %35s %10d","Tong tien", tong);
    return 0;
}