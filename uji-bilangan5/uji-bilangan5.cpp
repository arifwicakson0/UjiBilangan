//Program kelulusan

#include <iostrean>
using namespace std;

int main() {
    int nilMtk, nilBahasa, nilFisika;
    string status;
    float rerata;

    cout << "Nilai Matematika : " << endl;
    cin >> nilMtk;
    cout << "Nilai Bahasa : " << endl;
    cin >> nilBahasa;
    cout << "Nilai Fisika : " << endl;
    cin >> nilFisika;

    rerata = (nilBahasa + nilMtk + nilFisika) / 3;
    
    if (nilMtk > 70 || rerata > 60) {
        status = "lulus";
        if (nilFisika >= 90)
            status = "Kelulusan Terbaik";

    }
        else {
            status = "Tidak lulus";
    }
            cout << "Nilai Matematika : " << nilMtk << endl;
            cout << "Nilai Bahasa : " << nilBahasa << endl;
            cout << "Nilai Fisika : " << nilFisika << endl;
            cout << "Status Kelulusan : " << status;