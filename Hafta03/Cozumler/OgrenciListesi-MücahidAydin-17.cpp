#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <iterator>
#include <limits>
#include <ostream>
#include <string>

using namespace std;

class Ogrenci
{
private:
    string ad;
    string soyad;
    string ogrenciNo;

public:
    //set
    void setAd(string a) { ad = a; }
    void setSoyad(string s) { soyad = s; }
    void setOgrenciNo(string o) { ogrenciNo = o; }

    //get
    string getAd() { return ad; }
    string getSoyad() { return soyad; }
    string getOgrenciNo() { return ogrenciNo; }
};

int main()
{
    char devam, secim;

    while (true)
    {
        system("clear");

        cout << "\t\t====== Ogrenci Listesi ======";
        cout << "\n\n                                          ";
        cout << "\n\n";
        cout << "\n \t\t\t 1. Ekle";
        cout << "\n \t\t\t 2. Listele";
        cout << "\n \t\t\t 3. Cikis";
        cout << "\n\n";
        cout << "\t\t\t Seciminizi yapiniz :=> ";
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

                    // Dosyaya yazmadan önce bilgileri boşluk karakteri ile ayırarak standartlaştırıyoruz.
                    // Okuma yaparken bu bize yardımcı olacak
                    string outStr(yeniOgrenci.getAd() + " " + yeniOgrenci.getSoyad() + " "
                                  + yeniOgrenci.getOgrenciNo() + " ");
                    ogrListesi << outStr << std::endl;
                    system("clear");
                    cout << "\n Yeni bir ogrenci daha eklemek ister misiniz? (E/H) ";
                    cin >> devam;
                    system("clear");
                }
                ogrListesi.close();
                break;
            }
            //Listele
            case '2':
            {
                //dosya okuma
                ifstream ogrListesi2;
                ogrListesi2.open("OgrListesi.txt");
                string kelime;

                int sayac = 1;
                int sayac2 = 1;

                /* Boşluk karakterine gelene kadar olan harfleri (kelime) değişkenine atar 
                ve son kelimeye kadar while döngüsünü çalıştırı. */
                while (ogrListesi2 >> kelime)
                {
                    if (sayac == 1)
                    {
                        cout << sayac2 << ". Ad : " << kelime;
                        sayac++;
                        sayac2++;
                    }
                    else if (sayac == 2)
                    {
                        cout << " || Soyad : " << kelime;
                        sayac++;
                    }
                    else if (sayac == 3)
                    {
                        cout << " || Öğrenci Numarası : " << kelime << endl;
                        sayac = 1;
                    }
                }

                ogrListesi2.close();

                cout << " " << endl;
                cout << "------------------------------------" << endl;
                cout << "Ana menüye dönmek için bir harf gir." << endl;
                cin >> kelime;
            }
            break;

            //Çıkış
            case '3':
                // Çıkış
                exit(0);
        }
    }

    return 0;
}
