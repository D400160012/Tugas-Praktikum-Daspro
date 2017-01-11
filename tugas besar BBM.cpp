#include<stdio.h>
#include<string.h>
int kdrn,cod,a,b,tipe;
int biaya,pre,jar,pakai,kom,biy,bensin;
char otw[50],motor[50];
int kode[5]={1,2,3,4,5};
char tujuan[100][100]={"Solo-Brebes","Solo-Boyolali","Solo-Klaten","Solo-Banyumas","Solo-Jogja"};
int jarak [5]={200,30,30,150,35};
char kendaraan[][100]={"Vega R","Mio","Supra 125","CBR","Jupiter MX"};
int premium[5]={5,3,4,30,5};

void input()
{
    printf("\t\t==============================\t\t\n");
    printf("\t\t>>>>>>>>>Tugas Besar<<<<<<<<<<\t\t\n");
    printf("\t\t>>>>>>>Dasar Pemograman<<<<<<<\t\t\n");
    printf("\t\t==============================\t\t\n");
    printf("\t\t^^^^^^^My Trip My Dolan^^^^^^^\t\t\n");
    printf("\t\t^^^^^^^^^ Tujuan Dolan^^^^^^^^\t\t\n");
    printf("------------------------------------------------------------------------\n");
    printf("1.Solo-Brebes 2.Solo-Boyolali 3.Solo-Klaten 4.Solo-Banyumas 5.Solo-Jogja\n");
    printf("------------------------------------------------------------------------\n");
    printf("\t\t |Vega R| |Mio| |Supra 125| |CBR| |Jupiter MX|\t\t\n");

    printf("Kota tujuan : ");
    scanf("%d",&cod);
        if (cod == kode[0])
    {
        strcpy(otw,tujuan[0]);
        jar=jarak[0];
    }
     if (cod == kode[1])
    {
        strcpy(otw,tujuan[1]);
        jar=jarak[1];
    }
     if (cod == kode[2])
    {
        strcpy(otw,tujuan[2]);
        jar=jarak[2];
    }
     if (cod == kode[3])
    {
        strcpy(otw,tujuan[3]);
        jar=jarak[3];
    }
     if (cod == kode[4])
    {
        strcpy(otw,tujuan[4]);
        jar=jarak[4];
    }
    printf("%s\n",otw);
    printf("Jarak : %d km/ltr\n",jar);
    printf("Jumlah kendaraan :");
    scanf("%d",&kdrn);
    printf("\n");
    printf("Tipe kendaraan 1 : ");
    scanf("%d",&tipe);
    if (tipe == kode[0])
    {
        strcpy(motor,kendaraan[0]);
        pre=premium[0];
    }
    if (tipe == kode[1])
    {
        strcpy(motor,kendaraan[1]);
        pre=premium[1];
    }
    if (tipe == kode[2])
    {
        strcpy(motor,kendaraan[2]);
        pre=premium[2];
    }
    if (tipe == kode[3])
    {
        strcpy(motor,kendaraan[3]);
        pre=premium[3];
    }
    if (tipe == kode[4])
    {
        strcpy(motor,kendaraan[4]);
        pre=premium[4];
    }
    printf("Motor : %s\n",motor);
    printf("Premium :%d km/ltr\n",pre);
    kom=jar/pre;
    printf("Konsumsi bbm :%d ltr\n",kom);
    bensin=6050;
    biy=kom*bensin;
    printf("Biaya perjalanan : Rp.%d \n",biy);
    printf("\n");
    }
void hitung ()
{
    printf("Tipe kendaraan 2 : ");
    scanf("%d",&tipe);
    if (tipe == kode[0])
    {
        strcpy(motor,kendaraan[0]);
        pre=premium[0];
    }
    if (tipe == kode[1])
    {
        strcpy(motor,kendaraan[1]);
        pre=premium[1];
    }
    if (tipe == kode[2])
    {
        strcpy(motor,kendaraan[2]);
        pre=premium[2];
    }
    if (tipe == kode[3])
    {
        strcpy(motor,kendaraan[3]);
        pre=premium[3];
    }
    if (tipe == kode[4])
    {
        strcpy(motor,kendaraan[4]);
        pre=premium[4];
    }
    printf("Motor : %s\n",motor);
    printf("Premium :%d km/ltr\n",pre);
    kom=jar/pre;
    printf("Konsumsi bbm :%d ltr\n",kom);
    bensin=6050;
    biy=kom*bensin;
    printf("Biaya perjalanan : Rp.%d",biy);
    printf("\n");
}
void awal()
{
printf("\t\t\t TOURING \t\t\t");
printf("=======================================\n");
printf("\t    TOTAL PERHITUNGAN \t\n");
printf("=======================================\n");
printf("NO\tKendaraan\tPremium\tKonsumsi BBM\tBiaya\n");
printf("1\t%s\t%d\t%d\t%d\n",motor,pre,kom,biy);
printf("2\t%s\t%d\t%d\t%d\n",motor,pre,kom,biy);
printf("\n");
printf("---------------------------------------\n");
}
int main()
{
    input();
    hitung();
    system("cls");
    awal();
}

