#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
    string username;
    int password;
    int jenis;
    int fiksi;
    int nfiksi;
    int qty;
    int jumlah_a, jumlah_b, jumlah_c;
    int jumlah_sd, jumlah_smp, jumlah_sma;
    int harga_a = 15000, harga_b = 25000, harga_c = 50000;
    int harga_sd = 25000, harga_smp = 50000, harga_sma = 75000;
    char yn;

    system("cls");
    cout << "===================================" << endl;
    cout << "SELAMAT DATANG DI NATZ BOOK'S STORE" << endl;
    cout << "===================================" << endl;

    //LOGIN
    string user = "nathan";
    int pass = 12345678;
    validasi:
        cout << "\nSilahkan Login" << endl;
        cout << "==============\n";
        cout << "Username : "; cin >> username;
        cout << "Password : "; cin >> password;
        if (username == user && password == pass){
         cout << "\n==============";
         cout << "\nLOGIN BERHASIL\n";
         cout << "==============\n";

        system("pause");
        system("cls");

    //MENU
    menu:
        cout << "\n===== Menu =====" << endl;
        cout << "1. Buku Fiksi" << endl;
        cout << "2. Buku Non Fiksi" << endl;
        cout << "\nPilih [1-2] : "; cin >> jenis;

    //JENIS 1
        if (jenis == 1){
            menu_fiksi:
            cout << "\n===== BUKU FIKSI =====" << endl;
            cout << "1. Cerpen" << endl;
            cout << "2. Komik" << endl;
            cout << "3. Novel" << endl;
            cout << "\nPilih [1-3] : "; cin >> fiksi;

            system ("cls");
    //CERPEN
            if (fiksi == 1){
                int fiksi_1;
                system ("cls");
                cout << "\n===== CERPEN =====" << endl;
                cout << "1. Cerpen A" << endl;
                cout << "2. Cerpen B" << endl;
                cout << "3. Cerpen C" << endl;
                cout << "\nPilih [1-3] : "; cin >> fiksi_1;
                
                    while (fiksi_1 != 4){
                        switch (fiksi_1){
                        case 1:
                            cout << "\n==================" << endl;
                            cout << "Harga : " << harga_a << endl;
                            cout << "==================" << endl;
                            cout << "\nMasukkan Quantity : ";
                            cin >> qty;

                            jumlah_a = qty * harga_a;

                            system("cls");
                            cout << "\n======================" << endl;
                            cout << "Judul Buku : Cerpen A" << endl;
                            cout << "Quantity   : " << qty << endl;
                            cout << "Harga \t   : " << harga_a << endl;
                            cout << "Total \t   : " << jumlah_a << endl;
                            cout << "======================" << endl;

                            cerpenyn1:
                            cout << "Lanjutkan Berbelanja (y/n) : ";
                            cin >> yn;

                                if ((yn == 'y') | (yn == 'Y')){
                                    system("cls");
                                    goto menu;
                                } else if ((yn == 'n') | (yn == 'N')){
                                    system("cls");
                                    cout << "\n===============================" << endl;
                                    cout << "TERIMA KASIH TELAH BERBELANJA !" << endl;
                                    cout << "===============================" << endl;
                                    exit(0);
                                    break;
                                } else {
                                    goto cerpenyn1; 
                                }
                            break;
                        case 2:
                            cout << "\n==================" << endl;
                            cout << "Harga : " << harga_a << endl;
                            cout << "==================" << endl;
                            cout << "\nMasukkan Quantity : ";
                            cin >> qty;

                            jumlah_a = qty * harga_a;
                            
                            system("cls");
                            cout << "\n======================" << endl;
                            cout << "Judul Buku : Cerpen B" << endl;
                            cout << "Quantity   : " << qty << endl;
                            cout << "Harga \t   : " << harga_a << endl;
                            cout << "Total \t   : " << jumlah_a << endl;
                            cout << "======================" << endl;

                            cerpenyn2:
                            cout << "Lanjutkan Berbelanja (y/n) : ";
                            cin >> yn;

                                if ((yn == 'y') | (yn == 'Y')){
                                    system("cls");
                                    goto menu;
                                } else if ((yn == 'n') | (yn == 'N')){
                                    system("cls");
                                    cout << "\n===============================" << endl;
                                    cout << "TERIMA KASIH TELAH BERBELANJA !" << endl;
                                    cout << "===============================" << endl;
                                    exit(0);
                                    break;
                                } else {
                                    goto cerpenyn2; 
                                }
                            break;
                        case 3:
                            cout << "\n==================" << endl;
                            cout << "Harga : " << harga_a << endl;
                            cout << "==================" << endl;
                            cout << "\nMasukkan Quantity : ";
                            cin >> qty;

                            jumlah_a = qty * harga_a;
                            
                            system("cls");
                            cout << "\n======================" << endl;
                            cout << "Judul Buku : Cerpen C" << endl;
                            cout << "Quantity   : " << qty << endl;
                            cout << "Harga \t   : " << harga_a << endl;
                            cout << "Total \t   : " << jumlah_a << endl;
                            cout << "======================" << endl;

                            cerpenyn3:
                            cout << "Lanjutkan Berbelanja (y/n) : ";
                            cin >> yn;

                                if ((yn == 'y') | (yn == 'Y')){
                                    system("cls");
                                    goto menu;
                                } else if ((yn == 'n') | (yn == 'N')){
                                    system("cls");
                                    cout << "\n===============================" << endl;
                                    cout << "TERIMA KASIH TELAH BERBELANJA !" << endl;
                                    cout << "===============================" << endl;
                                    exit(0);
                                    break;
                                } else {
                                    goto cerpenyn3;
                                }
                            break;
                            default:
                            cout << "INPUT TIDAK VALID !" << endl;
                            break;
                        }
                    }
    //KOMIK                
            } else if (fiksi == 2){
                int fiksi_2;
                cout << "\n===== KOMIK =====" << endl;
                cout << "1. Komik A" << endl;
                cout << "2. Komik B" << endl;
                cout << "3. Komik C" << endl;
                cout << "\nPilih [1-3] : "; cin >> fiksi_2;
                
                    while (fiksi_2 != 4){
                        switch (fiksi_2){
                        case 1:
                            cout << "\n==================" << endl;
                            cout << "Harga : " << harga_b << endl;
                            cout << "==================" << endl;
                            cout << "\nMasukkan Quantity : ";
                            cin >> qty;

                            jumlah_b = qty * harga_b;
                            
                            system("cls");
                            cout << "\n======================" << endl;
                            cout << "Judul Buku : Komik A" << endl;
                            cout << "Quantity   : " << qty << endl;
                            cout << "Harga \t   : " << harga_b << endl;
                            cout << "Total \t   : " << jumlah_b << endl;
                            cout << "======================" << endl;

                            komikyn1:
                            cout << "Lanjutkan Berbelanja (y/n) : ";
                            cin >> yn;

                                if ((yn == 'y') | (yn == 'Y')){
                                    system("cls");
                                    goto menu;
                                } else if ((yn == 'n') | (yn == 'N')){
                                    system("cls");
                                    cout << "\n===============================" << endl;
                                    cout << "TERIMA KASIH TELAH BERBELANJA !" << endl;
                                    cout << "===============================" << endl;
                                    exit(0);
                                    break;
                                } else {
                                    goto komikyn1; 
                                }
                            break;
                        case 2:
                            cout << "\n==================" << endl;
                            cout << "Harga : " << harga_b << endl;
                            cout << "==================" << endl;
                            cout << "\nMasukkan Quantity : ";
                            cin >> qty;

                            jumlah_b = qty * harga_b;
                            
                            system("cls");
                            cout << "\n======================" << endl;
                            cout << "Judul Buku : Komik B" << endl;
                            cout << "Quantity   : " << qty << endl;
                            cout << "Harga \t   : " << harga_b << endl;
                            cout << "Total \t   : " << jumlah_b << endl;
                            cout << "======================" << endl;

                            komikyn2:
                            cout << "Lanjutkan Berbelanja (y/n) : ";
                            cin >> yn;

                                if ((yn == 'y') | (yn == 'Y')){
                                    system("cls");
                                    goto menu;
                                } else if ((yn == 'n') | (yn == 'N')){
                                    system("cls");
                                    cout << "\n===============================" << endl;
                                    cout << "TERIMA KASIH TELAH BERBELANJA !" << endl;
                                    cout << "===============================" << endl;
                                    exit(0);
                                    break;
                                } else {
                                    goto komikyn2; 
                                }
                            break;
                        case 3:
                            cout << "\n==================" << endl;
                            cout << "Harga : " << harga_b << endl;
                            cout << "==================" << endl;
                            cout << "\nMasukkan Quantity : ";
                            cin >> qty;

                            jumlah_b = qty * harga_b;
                            
                            system("cls");
                            cout << "\n======================" << endl;
                            cout << "Judul Buku : Komik C" << endl;
                            cout << "Quantity   : " << qty << endl;
                            cout << "Harga \t   : " << harga_b << endl;
                            cout << "Total \t   : " << jumlah_b << endl;
                            cout << "======================" << endl;

                            komikyn3:
                            cout << "Lanjutkan Berbelanja (y/n) : ";
                            cin >> yn;

                                if ((yn == 'y') | (yn == 'Y')){
                                    system("cls");
                                    goto menu;
                                } else if ((yn == 'n') | (yn == 'N')){
                                    system("cls");
                                    cout << "\n===============================" << endl;
                                    cout << "TERIMA KASIH TELAH BERBELANJA !" << endl;
                                    cout << "===============================" << endl;
                                    exit(0);
                                    break;
                                } else {
                                    goto komikyn3;
                                }
                            break;
                            default:
                            break;
                        }
                    }
    //NOVEL
            } else if (fiksi == 3){
                int fiksi_3;
                cout << "\n===== NOVEL =====" << endl;
                cout << "1. Novel A" << endl;
                cout << "2. Novel B" << endl;
                cout << "3. Novel C" << endl;
                cout << "\nPilih [1-3] : "; cin >> fiksi_3;
                
                    while (fiksi_3 != 4){
                        switch (fiksi_3){
                        case 1:
                            cout << "\n==================" << endl;
                            cout << "Harga : " << harga_c << endl;
                            cout << "==================" << endl;
                            cout << "\nMasukkan Quantity : ";
                            cin >> qty;

                            jumlah_c = qty * harga_c;
                            
                            system("cls");
                            cout << "\n======================" << endl;
                            cout << "Judul Buku : Novel A" << endl;
                            cout << "Quantity   : " << qty << endl;
                            cout << "Harga \t   : " << harga_c << endl;
                            cout << "Total \t   : " << jumlah_c << endl;
                            cout << "======================" << endl;

                            novelyn1:
                            cout << "Lanjutkan Berbelanja (y/n) : ";
                            cin >> yn;

                                if ((yn == 'y') | (yn == 'Y')){
                                    system("cls");
                                    goto menu;
                                } else if ((yn == 'n') | (yn == 'N')){
                                    system("cls");
                                    cout << "\n===============================" << endl;
                                    cout << "TERIMA KASIH TELAH BERBELANJA !" << endl;
                                    cout << "===============================" << endl;
                                    exit(0);
                                    break;
                                } else {
                                    goto novelyn1; 
                                }
                            break;
                        case 2:
                            cout << "\n==================" << endl;
                            cout << "Harga : " << harga_c << endl;
                            cout << "==================" << endl;
                            cout << "\nMasukkan Quantity : ";
                            cin >> qty;

                            jumlah_c = qty * harga_c;
                            
                            system("cls");
                            cout << "\n======================" << endl;
                            cout << "Judul Buku : Novel B" << endl;
                            cout << "Quantity   : " << qty << endl;
                            cout << "Harga \t   : " << harga_c << endl;
                            cout << "Total \t   : " << jumlah_c << endl;
                            cout << "======================" << endl;

                            novelyn2:
                            cout << "Lanjutkan Berbelanja (y/n) : ";
                            cin >> yn;

                                if ((yn == 'y') | (yn == 'Y')){
                                    system("cls");
                                    goto menu;
                                } else if ((yn == 'n') | (yn == 'N')){
                                    system("cls");
                                    cout << "\n===============================" << endl;
                                    cout << "TERIMA KASIH TELAH BERBELANJA !" << endl;
                                    cout << "===============================" << endl;
                                    exit(0);
                                    break;
                                } else {
                                    goto novelyn2; 
                                }
                            break;
                        case 3:
                            cout << "\n==================" << endl;
                            cout << "Harga : " << harga_c << endl;
                            cout << "==================" << endl;
                            cout << "\nMasukkan Quantity : ";
                            cin >> qty;

                            jumlah_c = qty * harga_c;
                            
                            system("cls");
                            cout << "\n======================" << endl;
                            cout << "Judul Buku : Novel C" << endl;
                            cout << "Quantity   : " << qty << endl;
                            cout << "Harga \t   : " << harga_c << endl;
                            cout << "Total \t   : " << jumlah_c << endl;
                            cout << "======================" << endl;

                            novelyn3:
                            cout << "Lanjutkan Berbelanja (y/n) : ";
                            cin >> yn;

                                if ((yn == 'y') | (yn == 'Y')){
                                    system("cls");
                                    goto menu;
                                } else if ((yn == 'n') | (yn == 'N')){
                                    system("cls");
                                    cout << "\n===============================" << endl;
                                    cout << "TERIMA KASIH TELAH BERBELANJA !" << endl;
                                    cout << "===============================" << endl;
                                    exit(0);
                                    break;
                                } else {
                                    goto novelyn3;
                                }
                            break;
                            default:
                            break;
                        }
                    }
            } else{
                cout << "\nINPUT TIDAK VALID !" << endl;
                system("pause");
                system("cls");
                goto menu_fiksi;
            }
    //JENIS 2
        } else if (jenis == 2){
            menu_nfiksi:
            cout << "\n===== BUKU NON FIKSI =====" << endl;
            cout << "1. Buku paket SD/MI" << endl;
            cout << "2. Buku paket SMP/MTS" << endl;
            cout << "3. Buku paket SMA/SMK/MA" << endl;
            cout << "\nPilih [1-3] : "; cin >> nfiksi;

            system("cls");

    //BUKU PAKET SD/MI
            if (nfiksi == 1){
                int sd;
                system("cls");
                cout << "\n===== PAKET SD/MI =====" << endl;
                cout << "1. SD/MI A" << endl;
                cout << "2. SD/MI B" << endl;
                cout << "3. SD/MI C" << endl;
                cout << "\nPilih [1-3] : "; cin >> sd;

                    while (sd != 4){
                        switch (sd){
                        case 1:
                            cout << "\n==================" << endl;
                            cout << "Harga : " << harga_sd << endl;
                            cout << "\n==================" << endl;
                            cout << "\nMasukkan Quantity : "; cin >> qty;

                            jumlah_sd = qty * harga_sd;

                            system("cls");
                            cout << "\n======================" << endl;
                            cout << "Judul Buku : SD/MI A" << endl;
                            cout << "Quantity   : " << qty << endl;
                            cout << "Harga \t   : " << harga_sd << endl;
                            cout << "Total \t   : " << jumlah_sd << endl;
                            cout << "======================" << endl;

                            sdyn1:
                            cout << "Lanjutkan Berbelanja (y/n) : ";
                            cin >> yn;

                                if ((yn == 'y') | (yn == 'Y')){
                                    system("cls");
                                    goto menu;
                                } else if ((yn == 'n') | (yn == 'N')){
                                    system("cls");
                                    cout << "\n===============================" << endl;
                                    cout << "TERIMA KASIH TELAH BERBELANJA !" << endl;
                                    cout << "===============================" << endl;
                                    exit(0);
                                    break;
                                } else {
                                    goto sdyn1; 
                                }
                            break;
                        case 2:
                            cout << "\n==================" << endl;
                            cout << "Harga : " << harga_sd << endl;
                            cout << "\n==================" << endl;
                            cout << "\nMasukkan Quantity : "; cin >> qty;

                            jumlah_sd = qty * harga_sd;

                            system("cls");
                            cout << "\n======================" << endl;
                            cout << "Judul Buku : SD/MI B" << endl;
                            cout << "Quantity   : " << qty << endl;
                            cout << "Harga \t   : " << harga_sd << endl;
                            cout << "Total \t   : " << jumlah_sd << endl;
                            cout << "======================" << endl;

                            sdyn2:
                            cout << "Lanjutkan Berbelanja (y/n) : ";
                            cin >> yn;

                                if ((yn == 'y') | (yn == 'Y')){
                                    system("cls");
                                    goto menu;
                                } else if ((yn == 'n') | (yn == 'N')){
                                    system("cls");
                                    cout << "\n===============================" << endl;
                                    cout << "TERIMA KASIH TELAH BERBELANJA !" << endl;
                                    cout << "===============================" << endl;
                                    exit(0);
                                    break;
                                } else {
                                    goto sdyn2; 
                                }
                            break;
                        case 3:
                            cout << "\n==================" << endl;
                            cout << "Harga : " << harga_sd << endl;
                            cout << "\n==================" << endl;
                            cout << "\nMasukkan Quantity : "; cin >> qty;

                            jumlah_sd = qty * harga_sd;

                            system("cls");
                            cout << "\n======================" << endl;
                            cout << "Judul Buku : SD/MI C" << endl;
                            cout << "Quantity   : " << qty << endl;
                            cout << "Harga \t   : " << harga_sd << endl;
                            cout << "Total \t   : " << jumlah_sd << endl;
                            cout << "======================" << endl;

                            sdyn3:
                            cout << "Lanjutkan Berbelanja (y/n) : ";
                            cin >> yn;

                                if ((yn == 'y') | (yn == 'Y')){
                                    system("cls");
                                    goto menu;
                                } else if ((yn == 'n') | (yn == 'N')){
                                    system("cls");
                                    cout << "\n===============================" << endl;
                                    cout << "TERIMA KASIH TELAH BERBELANJA !" << endl;
                                    cout << "===============================" << endl;
                                    exit(0);
                                    break;
                                } else {
                                    goto sdyn3; 
                                }
                            break;
                        default:
                        cout << "INPUT TIDAK VALID !" << endl;
                            break;
                        }
                    }
    //BUKU PAKET SMP/MTS
                } else if (nfiksi == 2){
                int smp;
                system("cls");
                cout << "\n===== PAKET SMP/MTS =====" << endl;
                cout << "1. SMP/MTS A" << endl;
                cout << "2. SMP/MTS B" << endl;
                cout << "3. SMP/MTS C" << endl;
                cout << "\nPilih [1-3] : "; cin >> smp;

                    while (smp != 4){
                        switch (smp){
                        case 1:
                            cout << "\n==================" << endl;
                            cout << "Harga : " << harga_smp << endl;
                            cout << "\n==================" << endl;
                            cout << "\nMasukkan Quantity : "; cin >> qty;

                            jumlah_smp = qty * harga_smp;

                            system("cls");
                            cout << "\n======================" << endl;
                            cout << "Judul Buku : SMP/MTS A" << endl;
                            cout << "Quantity   : " << qty << endl;
                            cout << "Harga \t   : " << harga_smp << endl;
                            cout << "Total \t   : " << jumlah_smp << endl;
                            cout << "======================" << endl;

                            smpyn1:
                            cout << "Lanjutkan Berbelanja (y/n) : ";
                            cin >> yn;

                                if ((yn == 'y') | (yn == 'Y')){
                                    system("cls");
                                    goto menu;
                                } else if ((yn == 'n') | (yn == 'N')){
                                    system("cls");
                                    cout << "\n===============================" << endl;
                                    cout << "TERIMA KASIH TELAH BERBELANJA !" << endl;
                                    cout << "===============================" << endl;
                                    exit(0);
                                    break;
                                } else {
                                    goto smpyn1; 
                                }
                            break;
                        case 2:
                            cout << "\n==================" << endl;
                            cout << "Harga : " << harga_smp << endl;
                            cout << "\n==================" << endl;
                            cout << "\nMasukkan Quantity : "; cin >> qty;

                            jumlah_smp = qty * harga_smp;

                            system("cls");
                            cout << "\n======================" << endl;
                            cout << "Judul Buku : SMP/MTS B" << endl;
                            cout << "Quantity   : " << qty << endl;
                            cout << "Harga \t   : " << harga_smp << endl;
                            cout << "Total \t   : " << jumlah_smp << endl;
                            cout << "======================" << endl;

                            smpyn2:
                            cout << "Lanjutkan Berbelanja (y/n) : ";
                            cin >> yn;

                                if ((yn == 'y') | (yn == 'Y')){
                                    system("cls");
                                    goto menu;
                                } else if ((yn == 'n') | (yn == 'N')){
                                    system("cls");
                                    cout << "\n===============================" << endl;
                                    cout << "TERIMA KASIH TELAH BERBELANJA !" << endl;
                                    cout << "===============================" << endl;
                                    exit(0);
                                    break;
                                } else {
                                    goto smpyn2; 
                                }
                            break;
                        case 3:
                            cout << "\n==================" << endl;
                            cout << "Harga : " << harga_smp << endl;
                            cout << "\n==================" << endl;
                            cout << "\nMasukkan Quantity : "; cin >> qty;

                            jumlah_smp = qty * harga_smp;

                            system("cls");
                            cout << "\n======================" << endl;
                            cout << "Judul Buku : SMP/MTS C" << endl;
                            cout << "Quantity   : " << qty << endl;
                            cout << "Harga \t   : " << harga_smp << endl;
                            cout << "Total \t   : " << jumlah_smp << endl;
                            cout << "======================" << endl;

                            smpyn3:
                            cout << "Lanjutkan Berbelanja (y/n) : ";
                            cin >> yn;

                                if ((yn == 'y') | (yn == 'Y')){
                                    system("cls");
                                    goto menu;
                                } else if ((yn == 'n') | (yn == 'N')){
                                    system("cls");
                                    cout << "\n===============================" << endl;
                                    cout << "TERIMA KASIH TELAH BERBELANJA !" << endl;
                                    cout << "===============================" << endl;
                                    exit(0);
                                    break;
                                } else {
                                    goto smpyn3; 
                                }
                            break;
                        default:
                        cout << "INPUT TIDAK VALID !" << endl;
                            break;
                        }
                    }
    //BUKU PAKET SMA/SMK/MA
                } else if (nfiksi == 3){
                int sma;
                system("cls");
                cout << "\n===== PAKET SMA/MA =====" << endl;
                cout << "1. SMA/SMK/MA A" << endl;
                cout << "2. SMA/SMK/MA B" << endl;
                cout << "3. SMA/SMK/MA C" << endl;
                cout << "\nPilih [1-3] : "; cin >> sma;

                    while (sma != 4){
                        switch (sma){
                        case 1:
                            cout << "\n==================" << endl;
                            cout << "Harga : " << harga_sma << endl;
                            cout << "\n==================" << endl;
                            cout << "\nMasukkan Quantity : "; cin >> qty;

                            jumlah_sma = qty * harga_sma;

                            system("cls");
                            cout << "\n======================" << endl;
                            cout << "Judul Buku : SMA/SMK/MA A" << endl;
                            cout << "Quantity   : " << qty << endl;
                            cout << "Harga \t   : " << harga_sma << endl;
                            cout << "Total \t   : " << jumlah_sma << endl;
                            cout << "======================" << endl;

                            smayn1:
                            cout << "Lanjutkan Berbelanja (y/n) : ";
                            cin >> yn;

                                if ((yn == 'y') | (yn == 'Y')){
                                    system("cls");
                                    goto menu;
                                } else if ((yn == 'n') | (yn == 'N')){
                                    system("cls");
                                    cout << "\n===============================" << endl;
                                    cout << "TERIMA KASIH TELAH BERBELANJA !" << endl;
                                    cout << "===============================" << endl;
                                    exit(0);
                                    break;
                                } else {
                                    goto smayn1; 
                                }
                            break;
                        case 2:
                            cout << "\n==================" << endl;
                            cout << "Harga : " << harga_sma << endl;
                            cout << "\n==================" << endl;
                            cout << "\nMasukkan Quantity : "; cin >> qty;

                            jumlah_sma = qty * harga_sma;

                            system("cls");
                            cout << "\n======================" << endl;
                            cout << "Judul Buku : SMA/SMK/MA B" << endl;
                            cout << "Quantity   : " << qty << endl;
                            cout << "Harga \t   : " << harga_sma << endl;
                            cout << "Total \t   : " << jumlah_sma << endl;
                            cout << "======================" << endl;

                            smayn2:
                            cout << "Lanjutkan Berbelanja (y/n) : ";
                            cin >> yn;

                                if ((yn == 'y') | (yn == 'Y')){
                                    system("cls");
                                    goto menu;
                                } else if ((yn == 'n') | (yn == 'N')){
                                    system("cls");
                                    cout << "\n===============================" << endl;
                                    cout << "TERIMA KASIH TELAH BERBELANJA !" << endl;
                                    cout << "===============================" << endl;
                                    exit(0);
                                    break;
                                } else {
                                    goto smayn2; 
                                }
                            break;
                        case 3:
                            cout << "\n==================" << endl;
                            cout << "Harga : " << harga_sma << endl;
                            cout << "\n==================" << endl;
                            cout << "\nMasukkan Quantity : "; cin >> qty;

                            jumlah_sma = qty * harga_sma;

                            system("cls");
                            cout << "\n======================" << endl;
                            cout << "Judul Buku : SMA/SMK/MA C" << endl;
                            cout << "Quantity   : " << qty << endl;
                            cout << "Harga \t   : " << harga_sma << endl;
                            cout << "Total \t   : " << jumlah_sma << endl;
                            cout << "======================" << endl;

                            smayn3:
                            cout << "Lanjutkan Berbelanja (y/n) : ";
                            cin >> yn;

                                if ((yn == 'y') | (yn == 'Y')){
                                    system("cls");
                                    goto menu;
                                } else if ((yn == 'n') | (yn == 'N')){
                                    system("cls");
                                    cout << "\n===============================" << endl;
                                    cout << "TERIMA KASIH TELAH BERBELANJA !" << endl;
                                    cout << "===============================" << endl;
                                    exit(0);
                                    break;
                                } else {
                                    goto smayn3; 
                                }
                            break;
                        default:
                        cout << "INPUT TIDAK VALID !" << endl;
                            break;
                        }
                    }
                } else{
                    cout << "\nINPUT TIDAK VALID !" << endl;
                    system("pause");
                    system("cls");
                    goto menu_nfiksi;
                }

        } else {
            cout << "INPUT TIDAK VALID" << endl;
            system("pause");
            system("cls");
            goto menu;
        }

        } else{
            cout << "Maaf, Username / Password salah !" << endl;
            system("pause");
            system("cls");
            goto validasi;
        }
    cin.get();
}