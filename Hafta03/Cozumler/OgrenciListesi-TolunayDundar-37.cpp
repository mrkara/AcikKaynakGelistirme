//BUG: terminali temizlemek için kullanılan system("clear") kodu Windows ortamında CMD üzerinde çalıştığında hata veriyor

#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <limits>
#include <sstream>
#include <vector>

using namespace std;

class Ogrenci
{
private:
    string ad;
    string soyad;
    string ogrenciNo;

public:
    void setAd(string ad) { this->ad = ad; }

    void setSoyad(string soyad) { this->soyad = soyad; }

    void setOgrenciNo(string ogrenciNo) { this->ogrenciNo = ogrenciNo; }

    string getAd(void) { return ad; }

    string getSoyad(void) { return soyad; }

    string getOgrenciNo(void) { return ogrenciNo; }
};

int main()
{
    char devam, secim;

    while (true)
    {
        system("clear");
        cout << "====== Ogrenci Listesi Islemleri ======";
        cout << "\n";
        cout << "\n1. Ekle";
        cout << "\n2. Sil";
        cout << "\n3. Listele";
        cout << "\n4. Listeyi Sifirla";
        cout << "\n5. Cikis";
        cout << "\n\n";
        cout << "Seciminizi yapiniz: ";
        cin >> secim;

        // Yapılan seçime göre uygun işlemi yap
        switch (secim)
        {
            //Ekle
            case '1':
            {
                devam = 'E';
                string girdiDizgesi; //Kullanıcıdan alınan değerler için geçici değişken
                ofstream ogrListesi; //Yazma işlemi için dosya nesnesi
                // OgrListesi.txt adlı dosyayı yazma ve sonuna ekleme kipinde açıyoruz
                ogrListesi.open("OgrListesi.txt", std::ofstream::out | std::ofstream::app);

                //Kullanıcı E ya da e yanıtını verdiği sürece yeni öğrenci ekleme
                // işlemi devam edecek
                while (devam == 'E' || devam == 'e')
                {
                    // Yeni bir öğrenci nesnesi oluşturuyoruz.
                    // Kullanıcıdan aldığımız değerleri bu nesneye atayacağız
                    Ogrenci yeniOgrenci;
                    system("clear");
                    cout << "Ogrencinin adi: ";
                    cin >> girdiDizgesi;
                    yeniOgrenci.setAd(girdiDizgesi);
                    cout << "Soyadi: ";
                    cin >> girdiDizgesi;
                    yeniOgrenci.setSoyad(girdiDizgesi);
                    cout << "Numarasi: ";
                    cin >> girdiDizgesi;
                    yeniOgrenci.setOgrenciNo(girdiDizgesi);

                    // Hatalı girdi durumunda, girdiyi gözardı edip kullanıcıyı uyarıyoruz
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Hatali giris. Tekrar denemek icin enter'a basiniz." << endl;
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        continue;
                    }

                    // Dosyaya yazmadan önce bilgileri noktalı virgülle ayırarak standartlaştırıyoruz.
                    // Okuma yaparken bu bize yardımcı olacak
                    string outStr(yeniOgrenci.getAd() + ";" + yeniOgrenci.getSoyad() + ";"
                                  + yeniOgrenci.getOgrenciNo() + ";");
                    ogrListesi << outStr << std::endl;
                    system("clear");
                    cout << "Ogrenci eklendi.\n";
                    cout << "Yeni bir ogrenci daha eklemek ister misiniz? (E/H): ";
                    cin >> devam;
                    system("clear");
                }
                break;
            }

            //Sil
            case '2':
            {
                system("clear");
                devam = 'E';

                while (devam == 'E' || devam == 'e')
                {
                    ifstream ogrListesi;
                    ogrListesi.open("OgrListesi.txt");
                    string satir;

                    ofstream temp;
                    temp.open("temp.txt");

                    string silinecekOgrenci;
                    cout << "Silmek istediginiz ogrencinin numarasini girin: ";
                    cin >> silinecekOgrenci;

                    while (getline(ogrListesi, satir))
                    {
                        if (strstr(satir.c_str(), silinecekOgrenci.c_str()) == nullptr)
                        {
                            temp << satir << endl;
                        }
                    }

                    ogrListesi.close();
                    temp.close();

                    remove("OgrListesi.txt");
                    rename("temp.txt", "OgrListesi.txt");

                    system("clear");
                    cout << "Ogrenci silindi.\n";
                    cout << "Baska bir ogrenciyi daha silmek ister misiniz? (E/H): ";
                    cin >> devam;
                    system("clear");
                }

                break;
            }

            //Listele
            case '3':
            {
                ifstream ogrListesi("OgrListesi.txt");
                string satir;
                bool isEmpty = true;

                system("clear");
                cout << "====== Mevcut Ogrenciler ======\n\n";

                while (getline(ogrListesi, satir))
                {
                    Ogrenci ogrenci;

                    stringstream ss(satir);
                    string bilgi;
                    vector<string> ogrenciBilgileri;

                    while (getline(ss, bilgi, ';'))
                    {
                        ogrenciBilgileri.push_back(bilgi);
                    }

                    ogrenci.setAd(ogrenciBilgileri[0]);
                    ogrenci.setSoyad(ogrenciBilgileri[1]);
                    ogrenci.setOgrenciNo(ogrenciBilgileri[2]);

                    cout << "Ogrenci Adi Soyadi: " << ogrenci.getAd() << " " << ogrenci.getSoyad()
                         << endl;
                    cout << "Ogrenci Numarasi: " << ogrenci.getOgrenciNo() << "\n\n";
                    isEmpty = false;
                }

                if (isEmpty == true)
                {
                    cout << "LISTEDE OGRENCI BULUNMUYOR\n\n";
                }

                cout << "====== Liste Sonu ======\n" << endl;

                ogrListesi.close();

                string hold;
                cout << "Ana menuye donmek icin herhangi bir karakter girin: ";
                cin >> hold;

                system("clear");

                break;
            }

            //Listeyi Sifirla
            case '4':
            {
                system("clear");
                string karar = "h";
                cout << "Bu islem listedeki tum ogrencileri silecektir.\nGerceklestirmek "
                        "istediginizden emin misiniz? (E/H): ";
                cin >> karar;

                if (karar == "h" || karar == "H")
                {
                    system("clear");
                }

                else if (karar == "e" || karar == "E")
                {
                    ofstream temp;
                    temp.open("temp.txt");

                    remove("OgrListesi.txt");
                    rename("temp.txt", "OgrListesi.txt");

                    temp.close();

                    system("clear");
                    cout << "Liste sifirlandi.\nAna menuye donmek icin herhangi bir karakter "
                            "girin: ";

                    string hold;
                    cin >> hold;
                    system("clear");
                }

                else
                {
                    cout << "Gecersiz bir islem girdiniz.\n";
                    cout << "Guvenlik onlemi olarak sifirlama islemi otomatik olarak iptal "
                            "edildi.\n";
                    cout << "Ana menuye donmek icin herhangi bir karakter girin: ";

                    string hold;
                    cin >> hold;
                }

                break;
            }

            //Çıkış
            case '5':
            {
                cout << "\nProgram sonlandirildi.\n";
                exit(0);
            }
        }
    }

    return 0;
}