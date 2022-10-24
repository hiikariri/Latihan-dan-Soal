#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SENIN 0
#define SELASA 1
#define RABU 2
#define KAMIS 3
#define JUMAT 4
#define SABTU 5
#define MINGGU 6

int main()
{
    int tanggal, hari, bulan2;
    char bulan[30], day[30];
    int day_in_a_month[12] = {0,31,59,90,120,151,181,212,243,273,304,334};
    printf("Input tanggal dan bulan (Ex: 2 Februari): ");
    scanf ("%d %s", &tanggal, &bulan);
    if(strcmp(bulan,"Januari") == 0){bulan2 = 0;}
    else if(strcmp(bulan,"Februari") == 0){bulan2 = 1;}
    else if(strcmp(bulan,"Maret") == 0){bulan2 = 2;}
    else if(strcmp(bulan,"April") == 0){bulan2 = 3;}
    else if(strcmp(bulan,"Mei") == 0){bulan2 = 4;}
    else if(strcmp(bulan,"Juni") == 0){bulan2 = 5;}
    else if(strcmp(bulan,"Juli") == 0){bulan2 = 6;}
    else if(strcmp(bulan,"Agustus") == 0){bulan2 = 7;}
    else if(strcmp(bulan,"September") == 0){bulan2 = 8;}
    else if(strcmp(bulan,"Oktober") == 0){bulan2 = 9;}
    else if(strcmp(bulan,"November") == 0){bulan2 = 10;}
    else if(strcmp(bulan,"Desember") == 0){bulan2 = 11;}

    hari = (SABTU+(tanggal+day_in_a_month[bulan2]))%7;

    if(hari == 1){
        strcpy(day,"Senin");
    }
    else if(hari == 2){
        strcpy(day,"Selasa");
    }
    else if(hari == 3){
        strcpy(day,"Rabu");
    }
    else if(hari == 4){
        strcpy(day,"Kamis");
    }
    else if(hari == 5){
        strcpy(day,"Jumat");
    }
    else if(hari == 6){
        strcpy(day,"Sabtu");
    }
    else if(hari == 0){
        strcpy(day,"Minggu");
    }
    if (tanggal>=1 && tanggal<=31){
        if (strcmp(bulan,"Februari") == 0){
                if(tanggal>=1 && tanggal <= 28){
                        printf("%s", day);
                }
                else {
                        printf("Format tanggal tidak sesuai");
                }
        }
        else if (strcmp(bulan,"April") == 0){
                if(tanggal>=1 && tanggal <= 30){
                        printf("%s", day);
                }
                else {
                        printf("Format tanggal tidak sesuai");
                }
        }
        else if (strcmp(bulan,"Juni") == 0){
                if(tanggal>=1 && tanggal <= 30){
                        printf("%s", day);
                }
                else {
                        printf("Format tanggal tidak sesuai");
                }
        }
        else if (strcmp(bulan,"September") == 0){
                if(tanggal>=1 && tanggal <= 30){
                        printf("%s", day);
                }
                else {
                        printf("Format tanggal tidak sesuai");
                }
        }
        else if (strcmp(bulan,"November") == 0){
                if(tanggal>=1 && tanggal <= 30){
                        printf("%s", day);
                }
                else {
                        printf("Format tanggal tidak sesuai");
                }
        }
        else {
            printf("%s", day);
            }
        }
    else {
        printf("Format tanggal tidak sesuai");
    }
    return 0;
}
