#include<stdio.h>

int kode;
int tarif,total_bayar,total_bayar,bayar,kembalian,total_tarif;
char nama[40],layanan[10],email[50];
float jarak,diskon;

void halaman_awal(){
    printf("\t\t\t\t\t\t  GOJEK\n\n");
    printf("\t\t\t======================================================\n");
    printf("\t\t\t| Kode |\t  Layanan \t|      Tarif/Km      |\n");
    printf("\t\t\t------------------------------------------------------\n");
    printf("\t\t\t|  1.  |\t  Go-Ride \t|        5000        |\n");
    printf("\t\t\t|  2.  |\t  Go-Car  \t|       15000        |\n");
    printf("\t\t\t|  3.  |\t  Go-Food \t|        3000        |\n");
    printf("\t\t\t|  4.  |\t  Go-Send \t|        9000        |\n");
    printf("\t\t\t======================================================\n\n\n\n");
}

void input(){
    printf("\t\t\tGOJEK\n");
    printf("=====================================================\n");
    printf("Masukan Kode (1-4): ");
    scanf("%d",&kode);
        if(kode==1){
            tarif=5000;
        }
        if(kode==2){
            tarif=15000;
        }
        if(kode==3){
            tarif=3000;
        }
        if(kode==4){
            tarif=9000;
        }
    printf("Masukan Jarak(Km) : ");
    scanf("%f",&jarak);
    printf("Masukan Nama : ");
    scanf("%s",&nama);
    printf("Alamat Email : ");
    scanf("%s",&email);
}

void booking(){
    printf("\t\t  GOJEK\n");
    printf("======================================\n");
    printf("\t\t BOOKING\n");
    printf("--------------------------------------\n");
    printf("Nama              : %s\n",nama);
    printf("Alamat Email      : %s\n",email);
    printf("Kode Layanan      : %d\n",kode);
    total_tarif=tarif*jarak;
    if(kode==1){
        printf("Layanan           : Go-Ride\n");
        printf("Tarif             : Rp.%d\n",tarif);
        printf("Jarak(Km)         : %.1f\n",jarak);
        printf("Total Harga       : Rp.%d\n",total_tarif);
    }
    if(kode==2){
        printf("Tarif             : Rp.%d\n",tarif);
        printf("Jarak(Km)         : %.1f\n",jarak);
        printf("Total Harga       : Rp.%d\n",total_tarif);
    }
    if(kode==3){
        printf("Layanan           : Go-Food\n");
        printf("Tarif             : Rp.%d\n",tarif);
        printf("Jarak(Km)         : %.1f\n",jarak);
        printf("Total Harga       : Rp.%d\n",total_tarif);
    }
    if(kode==4){
        printf("Layanan           : Go-Send\n");
        printf("Tarif             : Rp.%d\n",tarif);
        printf("Jarak(Km)         : %.1f\n",jarak);
        printf("Total Harga       : Rp.%d\n",total_tarif);
    }
    diskon=0.05*total_tarif;
    printf("Diskon 5 persen   : Rp.%.1f\n",diskon);
    total_bayar=total_tarif-diskon;
    printf("Total Bayar       : Rp.%d\n",total_bayar);
    printf("Bayar(Rp)         : ");
    scanf("%d",&bayar);
    kembalian=bayar-total_bayar;
    printf("Kembalian         :Rp.%d\n",kembalian);
    printf("--------------------------------------\n");
}

void main(){
halaman_awal();
input();
system("cls");
booking();
return 0;
}
