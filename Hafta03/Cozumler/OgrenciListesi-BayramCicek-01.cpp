#include <iostream>
#include <fstream>
#include <cstdlib>
#include <limits>
#include <vector>
#include <sstream>

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

    string getAd() { return this->ad; }

    string getSoyad() { return this->soyad; }

    string getOgrenciNo() { return this->ogrenciNo; }
};

int main()
{
    char devam, secim;

    while (true)
    {
        cout << "====== Ogrenci Listesi ======";
        cout << "\n 1. Ekle";
        cout << "\n 2. Listele";
        cout << "\n 3. Cikis";
        cout << "\n";
        cout << "Seciminizi yapiniz :=> ";
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
                    ogrListesi << outStr << endl;
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
                cout << "\n====== Dosya Çıktısı ======\n\n";

                ifstream ListFile("OgrListesi.txt");

                try
                {
                    string line;

                    while (getline(ListFile, line))
                    {
                        Ogrenci ogr;
                        string temp;
                        vector<string> seglist;
                        stringstream stream(line);

                        // ';' ile ad, soyad ve no 'yu ayır. seglist listesine at.
                        while (getline(stream, temp, ';'))
                        {
                            seglist.push_back(temp);
                        }

                        ogr.setAd(seglist[0]);
                        ogr.setSoyad(seglist[1]);
                        ogr.setOgrenciNo(seglist[2]);

                        string student
                            = ogr.getAd() + " " + ogr.getSoyad() + " " + ogr.getOgrenciNo();

                        cout << student << "\n";
                    }
                }
                catch (exception e)
                {
                    cout << "an error occurred\n" << e.what();
                }
                ListFile.close();
                cout << "\n";
                break;
            }

                // exit
            case '3':
                exit(0);
            default:
                cout << "\n\n---- please select 1, 2, or 3---- \n\n";
        }
    }
}