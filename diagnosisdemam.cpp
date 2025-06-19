#include <iostream>
#include <vector>
#include <fstream> 
using namespace std;

struct RekamMedis {
    string nama, nik;
    int umur;
    char jk;
    string diagnosis, tindakan;
};

vector<RekamMedis> dataRekamMedis;

void garis() {
    cout << "--------------------------------------------------------" << endl;
}

void simpanRekamMedis(string nama, string nik, int umur, char jk, string diagnosis, string tindakan) {
    RekamMedis rm = {nama, nik, umur, jk, diagnosis, tindakan};
    dataRekamMedis.push_back(rm);
}

void cariRekamMedis() {
    string cariNama, cariNIK;
    cout << "Masukkan Nama atau NIK pasien yang ingin dicari: " << endl;
    cout << "Nama: ";
    cin >> cariNama;
    cout << "NIK: ";
    cin >> cariNIK;
    bool ketemu = false;
    for (auto &rm : dataRekamMedis) {
        if (rm.nama == cariNama || rm.nik == cariNIK) {
            garis();
            cout << "Biodata Pasien:" << endl;
            cout << "Nama: " << rm.nama << endl;
            cout << "NIK: " << rm.nik << endl;
            cout << "Umur: " << rm.umur << endl;
            cout << "Jenis Kelamin: " << (rm.jk == 'L' || rm.jk == 'l' ? "Laki-laki" : "Perempuan") << endl;
            garis();
            cout << "Diagnosis: " << rm.diagnosis << endl;
            cout << "Tindakan: " << rm.tindakan << endl;
            ketemu = true;
        }
    }
    if (!ketemu) {
        cout << "Rekam medis tidak ditemukan." << endl;
    }
}


void tindakan1() {
    garis();
    cout << "TINDAKAN:" << endl;
    cout << "Berobat ke fasilitas kesehatan tingkat pertama (FKTP) terdekat." << endl;
}
void tindakan2() {
    garis();
    cout << "TINDAKAN:" << endl;
    cout << "Segera bawa ke Instalasi Gawat Darurat (IGD) rumah sakit terdekat." << endl;
}
void tindakan3() {
    garis();
    cout << "TINDAKAN:" << endl;
    cout << "Segera berobat ke dokter spesialis penyakit dalam." << endl;
}
void tindakan4() {
    garis();
    cout << "TINDAKAN:" << endl;
    cout << "Istirahat yang cukup, minum air putih yang banyak, dan makan makanan bergizi." << endl;
}
void tindakan5() {
    garis();
    cout << "TINDAKAN:" << endl;
    cout << "Berobat ke dokter spesialis THT." << endl;
}

void biodata(string &nama, string &nik, int &umur, char &jk) {
    garis();
    cout << "Masukkan Biodata Pasien:" << endl;
    cout << "Nama: ";
    cin >> nama;
    cout << "NIK: ";
    cin >> nik;
    cout << "Umur: ";
    cin >> umur;
    cout << "Jenis Kelamin (P/L): ";
    cin >> jk;
    garis();
    cout << "Biodata Pasien:" << endl;
    cout << "Nama: " << nama << endl;
    cout << "NIK: " << nik << endl;
    cout << "Umur: " << umur << endl;
    cout << "Jenis Kelamin: " << (jk == 'L' || jk == 'l' ? "Laki-laki" : "Perempuan") << endl; 
}

void diagnosis1(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Terdapat ruam pada kulit." << endl;
    cout << "2. Terdapat muntah, penurunan kesadaran, dan atau nyeri kepala." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Toxic Shock Syndrome (TSS) atau Sindrom Syok Beracun." << endl;
    tindakan2();
    simpanRekamMedis(nama, nik, umur, jk, "Toxic Shock Syndrome (TSS)", "Segera bawa ke Instalasi Gawat Darurat (IGD) rumah sakit terdekat.");
}
void diagnosis2(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Terdapat ruam pada kulit." << endl;
    cout << "2. Tidak terdapat muntah, penurunan kesadaran, dan atau nyeri kepala." << endl;
    cout << "3. Terdapat ruam berbentuk bintik atau berukuran kecil." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Demam Berdarah." << endl;
    tindakan1();
    simpanRekamMedis(nama, nik, umur, jk, "Demam Berdarah", "Berobat ke fasilitas kesehatan tingkat pertama (FKTP) terdekat.");
}
void diagnosis3(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Terdapat ruam pada kulit." << endl;
    cout << "2. Tidak terdapat muntah, penurunan kesadaran, dan atau nyeri kepala." << endl;
    cout << "3. Tidak terdapat ruam berbentuk bintik atau berukuran kecil." << endl;
    cout << "4. Terdapat ruam berisi cairan" << endl;
    cout << "5. Ruam muncul setelah demam turun" << endl;
    cout << "6. Ruam muncul sdi tangan, kaki, dan mulut" << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Hand Foot and Mouth Disease (HFMD)" << endl;
    tindakan1();
    simpanRekamMedis(nama, nik, umur, jk, "Hand Foot and Mouth Disease (HFMD)", "Berobat ke fasilitas kesehatan tingkat pertama (FKTP) terdekat.");
}
void diagnosis4(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Terdapat ruam pada kulit." << endl;
    cout << "2. Tidak terdapat muntah, penurunan kesadaran, dan atau nyeri kepala." << endl;
    cout << "3. Tidak terdapat ruam berbentuk bintik atau berukuran kecil." << endl;
    cout << "4. Terdapat ruam berisi cairan" << endl;
    cout << "5. Ruam muncul setelah demam turun" << endl;
    cout << "6. Ruam tidak muncul di tangan, kaki, dan mulut" << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Cacar air atau Varisela" << endl;
    tindakan1();
    simpanRekamMedis(nama, nik, umur, jk, "Cacar air atau Varisela", "Berobat ke fasilitas kesehatan tingkat pertama (FKTP) terdekat.");
}
void diagnosis5(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Terdapat ruam pada kulit." << endl;
    cout << "2. Tidak terdapat muntah, penurunan kesadaran, dan atau nyeri kepala." << endl;
    cout << "3. Tidak terdapat ruam berbentuk bintik atau berukuran kecil." << endl;
    cout << "4. Terdapat ruam berisi cairan." << endl;
    cout << "5. Ruam tidak muncul setelah demam turun." << endl;
    cout << "6. Ruam terasa terbakar, dan berada di sekitar mulut atau genital." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Herpes Simpleks Virus (HSV)" << endl;
    tindakan1();
    simpanRekamMedis(nama, nik, umur, jk, "Herpes Simpleks Virus (HSV)", "Berobat ke fasilitas kesehatan tingkat pertama (FKTP) terdekat.");
}
void diagnosis6(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Terdapat ruam pada kulit." << endl;
    cout << "2. Tidak terdapat muntah, penurunan kesadaran, dan atau nyeri kepala." << endl;
    cout << "3. Tidak terdapat ruam berbentuk bintik atau berukuran kecil." << endl;
    cout << "4. Terdapat ruam berisi cairan." << endl;
    cout << "5. Ruam tidak muncul setelah demam turun." << endl;
    cout << "6. Ruam tidak terasa terbakar, dan tidak berada di sekitar mulut atau genital." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Kawasaki Disease" << endl;
    tindakan3();
    simpanRekamMedis(nama, nik, umur, jk, "Kawasaki Disease", "Segera berobat ke dokter spesialis penyakit dalam.");
}
void diagnosis7(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Terdapat ruam pada kulit." << endl;
    cout << "2. Tidak terdapat muntah, penurunan kesadaran, dan atau nyeri kepala." << endl;
    cout << "3. Tidak terdapat ruam berbentuk bintik atau berukuran kecil." << endl;
    cout << "4. Tidak terdapat ruam berisi cairan." << endl;
    cout << "5. Ruam muncul setelah demam turun." << endl;
    cout << "6. Kulit terasa kasar seperti pasir dan lidah seperti stoberi." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Scarlet Fever" << endl;
    tindakan1();
    simpanRekamMedis(nama, nik, umur, jk, "Scarlet Fever", "Berobat ke fasilitas kesehatan tingkat pertama (FKTP) terdekat.");
}
void diagnosis8(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Terdapat ruam pada kulit." << endl;
    cout << "2. Tidak terdapat muntah, penurunan kesadaran, dan atau nyeri kepala." << endl;
    cout << "3. Tidak terdapat ruam berbentuk bintik atau berukuran kecil." << endl;
    cout << "4. Tidak terdapat ruam berisi cairan." << endl;
    cout << "5. Ruam muncul setelah demam turun." << endl;
    cout << "6. Kulit tidak terasa kasar seperti pasir dan lidah tidak seperti stoberi." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Roseola Infantum" << endl;
    tindakan1();
    simpanRekamMedis(nama, nik, umur, jk, "Roseola Infantum", "Berobat ke fasilitas kesehatan tingkat pertama (FKTP) terdekat.");
}
void diagnosis9(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Terdapat ruam pada kulit." << endl;
    cout << "2. Tidak terdapat muntah, penurunan kesadaran, dan atau nyeri kepala." << endl;
    cout << "3. Tidak terdapat ruam berbentuk bintik atau berukuran kecil." << endl;
    cout << "4. Tidak terdapat ruam berisi cairan." << endl;
    cout << "5. Ruam tidak muncul setelah demam turun." << endl;
    cout << "6. Terdapat 3C (Cough, Coryza, Conjunctivitis), batuk, pilek, dan mata merah." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Campak" << endl;
    tindakan1();
    simpanRekamMedis(nama, nik, umur, jk, "Campak", "Berobat ke fasilitas kesehatan tingkat pertama (FKTP) terdekat.");
}
void diagnosis10(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Terdapat ruam pada kulit." << endl;
    cout << "2. Tidak terdapat muntah, penurunan kesadaran, dan atau nyeri kepala." << endl;
    cout << "3. Tidak terdapat ruam berbentuk bintik atau berukuran kecil." << endl;
    cout << "4. Tidak terdapat ruam berisi cairan." << endl;
    cout << "5. Ruam tidak muncul setelah demam turun." << endl;
    cout << "6. Tidak terdapat 3C (Cough, Coryza, Conjunctivitis), batuk, pilek, dan mata merah." << endl;
    cout << "7. Terdapat benjolan di belakang telinga" << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Rubella" << endl;
    tindakan1();
    simpanRekamMedis(nama, nik, umur, jk, "Rubella", "Berobat ke fasilitas kesehatan tingkat pertama (FKTP) terdekat.");
}
void diagnosis11(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Terdapat ruam pada kulit." << endl;
    cout << "2. Tidak terdapat muntah, penurunan kesadaran, dan atau nyeri kepala." << endl;
    cout << "3. Tidak terdapat ruam berbentuk bintik atau berukuran kecil." << endl;
    cout << "4. Tidak terdapat ruam berisi cairan." << endl;
    cout << "5. Ruam tidak muncul setelah demam turun." << endl;
    cout << "6. Tidak terdapat 3C (Cough, Coryza, Conjunctivitis), batuk, pilek, dan mata merah." << endl;
    cout << "7. Tidak terdapat benjolan di belakang telinga" << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Erythema Infectiosum" << endl;
    tindakan1();
    simpanRekamMedis(nama, nik, umur, jk, "Erythema Infectiosum", "Berobat ke fasilitas kesehatan tingkat pertama (FKTP) terdekat.");
}
void diagnosis12(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Tidak terdapat ruam pada kulit." << endl;
    cout << "2. Demam kurang dari seminggu." << endl;
    cout << "3. Demam terus menerus sepanjang hari." << endl;
    cout << "4. Terdapat nyeri kepala, penurunan kesadaran dan atau kejang." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Meningitis." << endl;
    tindakan2();
    simpanRekamMedis(nama, nik, umur, jk, "Meningitis", "Segera bawa ke Instalasi Gawat Darurat (IGD) rumah sakit terdekat.");
}
void diagnosis13(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Tidak terdapat ruam pada kulit." << endl;
    cout << "2. Demam kurang dari seminggu." << endl;
    cout << "3. Demam terus menerus sepanjang hari." << endl;
    cout << "4. Tidak terdapat nyeri kepala, penurunan kesadaran dan atau kejang." << endl;
    cout << "5. Terdapat gangguan pendengaran, keseimbangan dan atau cairan dari lubang telinga." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Otitis." << endl;
    tindakan1();
    simpanRekamMedis(nama, nik, umur, jk, "Otitis", "Berobat ke fasilitas kesehatan tingkat pertama (FKTP) terdekat.");
}
void diagnosis14(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Tidak terdapat ruam pada kulit." << endl;
    cout << "2. Demam kurang dari seminggu." << endl;
    cout << "3. Demam terus menerus sepanjang hari." << endl;
    cout << "4. Tidak terdapat nyeri kepala, penurunan kesadaran dan atau kejang." << endl;
    cout << "5. Tidak terdapat gangguan pendengaran, keseimbangan dan atau cairan dari lubang telinga." << endl;
    cout << "6. Terdapat batuk, pilek, nyeri menelan, dan atau nyeri dahi dan pipi." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Infeksi Saluran Pernapasan Atas (ISPA)." << endl;
    tindakan1();
    simpanRekamMedis(nama, nik, umur, jk, "Infeksi Saluran Pernapasan Atas (ISPA)", "Berobat ke fasilitas kesehatan tingkat pertama (FKTP) terdekat.");
}
void diagnosis15(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Tidak terdapat ruam pada kulit." << endl;
    cout << "2. Demam kurang dari seminggu." << endl;
    cout << "3. Demam terus menerus sepanjang hari." << endl;
    cout << "4. Tidak terdapat nyeri kepala, penurunan kesadaran dan atau kejang." << endl;
    cout << "5. Tidak terdapat gangguan pendengaran, keseimbangan dan atau cairan dari lubang telinga." << endl;
    cout << "6. Tidak terdapat batuk, pilek, nyeri menelan, dan atau nyeri dahi dan pipi." << endl;
    cout << "7. Terdapat diare, susah BAB, dan atau mual muntah." << endl;
    cout << "8. Pasien lemas, tidak mau minum, dan atau penurunan kesadaran." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Infeksi Saluran Pencernaan, dengan dehidrasi berat." << endl;
    tindakan2();
    simpanRekamMedis(nama, nik, umur, jk, "Infeksi Saluran Pencernaan, dengan dehidrasi berat", "Segera bawa ke Instalasi Gawat Darurat (IGD) rumah sakit terdekat.");
}
void diagnosis16(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Tidak terdapat ruam pada kulit." << endl;
    cout << "2. Demam kurang dari seminggu." << endl;
    cout << "3. Demam terus menerus sepanjang hari." << endl;
    cout << "4. Tidak terdapat nyeri kepala, penurunan kesadaran dan atau kejang." << endl;
    cout << "5. Tidak terdapat gangguan pendengaran, keseimbangan dan atau cairan dari lubang telinga." << endl;
    cout << "6. Tidak terdapat batuk, pilek, nyeri menelan, dan atau nyeri dahi dan pipi." << endl;
    cout << "7. Terdapat diare, susah BAB, dan atau mual muntah." << endl;
    cout << "8. Pasien tidak lemas, mau minum, dan atau tidak ada penurunan kesadaran." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Infeksi Saluran Pencernaan, tanpa dehidrasi." << endl;
    tindakan1();
    simpanRekamMedis(nama, nik, umur, jk, "Infeksi Saluran Pencernaan, tanpa dehidrasi", "Berobat ke fasilitas kesehatan tingkat pertama (FKTP) terdekat.");
}
void diagnosis17(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Tidak terdapat ruam pada kulit." << endl;
    cout << "2. Demam kurang dari seminggu." << endl;
    cout << "3. Demam terus menerus sepanjang hari." << endl;
    cout << "4. Tidak terdapat nyeri kepala, penurunan kesadaran dan atau kejang." << endl;
    cout << "5. Tidak terdapat gangguan pendengaran, keseimbangan dan atau cairan dari lubang telinga." << endl;
    cout << "6. Tidak terdapat batuk, pilek, nyeri menelan, dan atau nyeri dahi dan pipi." << endl;
    cout << "7. Tidak terdapat diare, susah BAB, dan atau mual muntah." << endl;
    cout << "8. BAK terasa nyeri, lebih sedikit, berdarah, dan atau terdapat nyeri perut bagian bawah." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Infeksi saluran kemih." << endl;
    tindakan1();
    simpanRekamMedis(nama, nik, umur, jk, "Infeksi saluran kemih", "Berobat ke fasilitas kesehatan tingkat pertama (FKTP) terdekat.");
}
void diagnosis18(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Tidak terdapat ruam pada kulit." << endl;
    cout << "2. Demam kurang dari seminggu." << endl;
    cout << "3. Demam terus menerus sepanjang hari." << endl;
    cout << "4. Tidak terdapat nyeri kepala, penurunan kesadaran dan atau kejang." << endl;
    cout << "5. Tidak terdapat gangguan pendengaran, keseimbangan dan atau cairan dari lubang telinga." << endl;
    cout << "6. Tidak terdapat batuk, pilek, nyeri menelan, dan atau nyeri dahi dan pipi." << endl;
    cout << "7. Tidak terdapat diare, susah BAB, dan atau mual muntah." << endl;
    cout << "8. BAK tidak terasa nyeri, tidak lebih sedikit, tidak berdarah, dan atau tidak terdapat nyeri perut bagian bawah." << endl;
    cout << "9. Terdapat nyeri kepala, nyeri belakang mata, nyeri otot, dan atau nyeri sendi." << endl;
    cout << "10. Dari 1 - 10 skala nyeri di atas 6." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Chikungunya." << endl;
    tindakan1();
    simpanRekamMedis(nama, nik, umur, jk, "Chikungunya", "Berobat ke fasilitas kesehatan tingkat pertama (FKTP) terdekat.");    
}
void diagnosis19(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Tidak terdapat ruam pada kulit." << endl;
    cout << "2. Demam kurang dari seminggu." << endl;
    cout << "3. Demam terus menerus sepanjang hari." << endl;
    cout << "4. Tidak terdapat nyeri kepala, penurunan kesadaran dan atau kejang." << endl;
    cout << "5. Tidak terdapat gangguan pendengaran, keseimbangan dan atau cairan dari lubang telinga." << endl;
    cout << "6. Tidak terdapat batuk, pilek, nyeri menelan, dan atau nyeri dahi dan pipi." << endl;
    cout << "7. Tidak terdapat diare, susah BAB, dan atau mual muntah." << endl;
    cout << "8. BAK tidak terasa nyeri, tidak lebih sedikit, tidak berdarah, dan atau tidak terdapat nyeri perut bagian bawah." << endl;
    cout << "9. Terdapat nyeri kepala, nyeri belakang mata, nyeri otot, dan atau nyeri sendi." << endl;
    cout << "10. Dari 1 - 10 skala nyeri di bawah 6." << endl;
    cout << "11. Terdapat nyeri perut, muntah terus menerus, sesak, dan atau pendarahan." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Demam berdarah dengan tanda bahaya." << endl;
    tindakan2();
    simpanRekamMedis(nama, nik, umur, jk, "Demam berdarah dengan tanda bahaya", "Segera bawa ke Instalasi Gawat Darurat (IGD) rumah sakit terdekat.");  
}
void diagnosis32(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Tidak terdapat ruam pada kulit." << endl;
    cout << "2. Demam kurang dari seminggu." << endl;
    cout << "3. Demam terus menerus sepanjang hari." << endl;
    cout << "4. Tidak terdapat nyeri kepala, penurunan kesadaran dan atau kejang." << endl;
    cout << "5. Tidak terdapat gangguan pendengaran, keseimbangan dan atau cairan dari lubang telinga." << endl;
    cout << "6. Tidak terdapat batuk, pilek, nyeri menelan, dan atau nyeri dahi dan pipi." << endl;
    cout << "7. Tidak terdapat diare, susah BAB, dan atau mual muntah." << endl;
    cout << "8. BAK tidak terasa nyeri, tidak lebih sedikit, tidak berdarah, dan atau tidak terdapat nyeri perut bagian bawah." << endl;
    cout << "9. Terdapat nyeri kepala, nyeri belakang mata, nyeri otot, dan atau nyeri sendi." << endl;
    cout << "10. Dari 1 - 10 skala nyeri di bawah 6." << endl;
    cout << "11. Tidak terdapat nyeri perut, muntah terus menerus, sesak, dan atau pendarahan." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Demam berdarah tanpa tanda bahaya." << endl;
    tindakan1();
    simpanRekamMedis(nama, nik, umur, jk, "Demam berdarah tanpa tanda bahaya", "Berobat ke fasilitas kesehatan tingkat pertama (FKTP) terdekat.");
}
void diagnosis20(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Tidak terdapat ruam pada kulit." << endl;
    cout << "2. Demam kurang dari seminggu." << endl;
    cout << "3. Demam terus menerus sepanjang hari." << endl;
    cout << "4. Tidak terdapat nyeri kepala, penurunan kesadaran dan atau kejang." << endl;
    cout << "5. Tidak terdapat gangguan pendengaran, keseimbangan dan atau cairan dari lubang telinga." << endl;
    cout << "6. Tidak terdapat batuk, pilek, nyeri menelan, dan atau nyeri dahi dan pipi." << endl;
    cout << "7. Tidak terdapat diare, susah BAB, dan atau mual muntah." << endl;
    cout << "8. BAK tidak terasa nyeri, tidak lebih sedikit, tidak berdarah, dan atau tidak terdapat nyeri perut bagian bawah." << endl;
    cout << "9. Tidak terdapat nyeri kepala, nyeri belakang mata, nyeri otot, dan atau nyeri sendi." << endl;
    cout << "10. Terdapat kuning pada mata atau kulit." << endl;
    cout << "11. Pernah kontak dengan banjir, air yang terinfeksi, atau urine binatang." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Leptospirosis." << endl;
    tindakan1();
    simpanRekamMedis(nama, nik, umur, jk, "Leptospirosis", "Berobat ke fasilitas kesehatan tingkat pertama (FKTP) terdekat.");
}
void diagnosis21(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Tidak terdapat ruam pada kulit." << endl;
    cout << "2. Demam kurang dari seminggu." << endl;
    cout << "3. Demam terus menerus sepanjang hari." << endl;
    cout << "4. Tidak terdapat nyeri kepala, penurunan kesadaran dan atau kejang." << endl;
    cout << "5. Tidak terdapat gangguan pendengaran, keseimbangan dan atau cairan dari lubang telinga." << endl;
    cout << "6. Tidak terdapat batuk, pilek, nyeri menelan, dan atau nyeri dahi dan pipi." << endl;
    cout << "7. Tidak terdapat diare, susah BAB, dan atau mual muntah." << endl;
    cout << "8. BAK tidak terasa nyeri, tidak lebih sedikit, tidak berdarah, dan atau tidak terdapat nyeri perut bagian bawah." << endl;
    cout << "9. Tidak terdapat nyeri kepala, nyeri belakang mata, nyeri otot, dan atau nyeri sendi." << endl;
    cout << "10. Terdapat kuning pada mata atau kulit." << endl;
    cout << "11. Tidak pernah kontak dengan banjir, air yang terinfeksi, atau urine binatang." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Cari penyebab infeksi lain. Kemungkinan keganasan atau autoimun." << endl;
    tindakan3();
    simpanRekamMedis(nama, nik, umur, jk, "Keganasan atau autoimun", "Segera berobat ke dokter spesialis penyakit dalam.");
}
void diagnosis22(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Tidak terdapat ruam pada kulit." << endl;
    cout << "2. Demam kurang dari seminggu." << endl;
    cout << "3. Demam terus menerus sepanjang hari." << endl;
    cout << "4. Tidak terdapat nyeri kepala, penurunan kesadaran dan atau kejang." << endl;
    cout << "5. Tidak terdapat gangguan pendengaran, keseimbangan dan atau cairan dari lubang telinga." << endl;
    cout << "6. Tidak terdapat batuk, pilek, nyeri menelan, dan atau nyeri dahi dan pipi." << endl;
    cout << "7. Tidak terdapat diare, susah BAB, dan atau mual muntah." << endl;
    cout << "8. BAK tidak terasa nyeri, tidak lebih sedikit, tidak berdarah, dan atau tidak terdapat nyeri perut bagian bawah." << endl;
    cout << "9. Tidak terdapat nyeri kepala, nyeri belakang mata, nyeri otot, dan atau nyeri sendi." << endl;
    cout << "10. Tidak terdapat kuning pada mata atau kulit." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Kemungkinan infeksi virus" << endl;
    tindakan4();
    simpanRekamMedis(nama, nik, umur, jk, "Infeksi virus", "Berobat ke fasilitas kesehatan tingkat pertama (FKTP) terdekat.");
}
void diagnosis23(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Tidak terdapat ruam pada kulit." << endl;
    cout << "2. Demam kurang dari seminggu." << endl;
    cout << "3. Demam tidak terus menerus sepanjang hari." << endl;
    cout << "4. Ada riwayat traveling ke tempat endemik seperti wilayah timur Indonesia." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Malaria" << endl;
    tindakan1();
    simpanRekamMedis(nama, nik, umur, jk, "Malaria", "Berobat ke fasilitas kesehatan tingkat pertama (FKTP) terdekat.");
}
void diagnosis24(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Tidak terdapat ruam pada kulit." << endl;
    cout << "2. Demam kurang dari seminggu." << endl;
    cout << "3. Demam tidak terus menerus sepanjang hari." << endl;
    cout << "4. Tidak ada riwayat traveling ke tempat endemik seperti wilayah timur Indonesia." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Pantau gejala lainnya. Kemungkinan demam tifoid minggu pertama." << endl;
    tindakan1();
    simpanRekamMedis(nama, nik, umur, jk, "Demam tifoid minggu pertama", "Berobat ke fasilitas kesehatan tingkat pertama (FKTP) terdekat.");    
}
void diagnosis25(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Tidak terdapat ruam pada kulit." << endl;
    cout << "2. Demam lebih dari seminggu." << endl;
    cout << "3. Terdapat mual, muntah, nyeri perut, susah BAB, dan atau diare." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Demam tifoid minggu kedua." << endl;
    tindakan1();
    simpanRekamMedis(nama, nik, umur, jk, "Demam tifoid minggu kedua", "Berobat ke fasilitas kesehatan tingkat pertama (FKTP) terdekat.");
}
void diagnosis26(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Tidak terdapat ruam pada kulit." << endl;
    cout << "2. Demam lebih dari seminggu." << endl;
    cout << "3. Terdapat mual, muntah, nyeri perut, susah BAB, dan atau diare." << endl;
    cout << "4. Batuk lebih dari dua minggu dan atau kontak dengan orang yang memiliki riwayat Tuberculosis (TB)." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Tuberculosis (TB)." << endl;
    tindakan1();
    simpanRekamMedis(nama, nik, umur, jk, "Tuberculosis (TB)", "Segera berobat ke dokter spesialis penyakit dalam.");
}
void diagnosis27(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Tidak terdapat ruam pada kulit." << endl;
    cout << "2. Demam lebih dari seminggu." << endl;
    cout << "3. Terdapat mual, muntah, nyeri perut, susah BAB, dan atau diare." << endl;
    cout << "4. Tidak batuk lebih dari dua minggu dan atau kontak dengan orang yang memiliki riwayat Tuberculosis (TB)." << endl;
    cout << "5. Terdapat nyeri menelan" << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Tonsilitis." << endl;
    tindakan1();
    simpanRekamMedis(nama, nik, umur, jk, "Tonsilitis", "Berobat ke fasilitas kesehatan tingkat pertama (FKTP) terdekat.");
}
void diagnosis28(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Tidak terdapat ruam pada kulit." << endl;
    cout << "2. Demam lebih dari seminggu." << endl;
    cout << "3. Terdapat mual, muntah, nyeri perut, susah BAB, dan atau diare." << endl;
    cout << "4. Tidak batuk lebih dari dua minggu dan atau kontak dengan orang yang memiliki riwayat Tuberculosis (TB)." << endl;
    cout << "5. Tidak nyeri menelan" << endl;
    cout << "6. Terdapat cairan keluar dari telinga" << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Otitis media kronis." << endl;
    tindakan5();
    simpanRekamMedis(nama, nik, umur, jk, "Otitis media kronis", "Segera berobat ke dokter spesialis THT.");
}
void diagnosis29(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Tidak terdapat ruam pada kulit." << endl;
    cout << "2. Demam lebih dari seminggu." << endl;
    cout << "3. Terdapat mual, muntah, nyeri perut, susah BAB, dan atau diare." << endl;
    cout << "4. Tidak batuk lebih dari dua minggu dan atau kontak dengan orang yang memiliki riwayat Tuberculosis (TB)." << endl;
    cout << "5. Tidak nyeri menelan" << endl;
    cout << "6. Tidak terdapat cairan keluar dari telinga" << endl;
    cout << "7. Terdapat gerakan tidak wajar (sydenham chorea), nyeri sendi, dan atau ruam pada kulit." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Demam rematik akut" << endl;
    tindakan3();
    simpanRekamMedis(nama, nik, umur, jk, "Demam rematik akut", "Segera berobat ke dokter spesialis penyakit dalam.");  
}
void diagnosis30(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Tidak terdapat ruam pada kulit." << endl;
    cout << "2. Demam lebih dari seminggu." << endl;
    cout << "3. Terdapat mual, muntah, nyeri perut, susah BAB, dan atau diare." << endl;
    cout << "4. Tidak batuk lebih dari dua minggu dan atau kontak dengan orang yang memiliki riwayat Tuberculosis (TB)." << endl;
    cout << "5. Tidak nyeri menelan" << endl;
    cout << "6. Tidak terdapat cairan keluar dari telinga" << endl;
    cout << "7. Tidak terdapat gerakan tidak wajar (sydenham chorea), nyeri sendi, dan atau ruam pada kulit." << endl;
    cout << "8. Terdapat penurunan berat badan drastis, lemas dan atau pucat." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Keganasan" << endl;
    tindakan3();
    simpanRekamMedis(nama, nik, umur, jk, "Keganasan", "Segera berobat ke dokter spesialis penyakit dalam.");
}
void diagnosis31(string nama, string nik, int umur, char jk) {
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Tidak terdapat ruam pada kulit." << endl;
    cout << "2. Demam lebih dari seminggu." << endl;
    cout << "3. Terdapat mual, muntah, nyeri perut, susah BAB, dan atau diare." << endl;
    cout << "4. Tidak batuk lebih dari dua minggu dan atau kontak dengan orang yang memiliki riwayat Tuberculosis (TB)." << endl;
    cout << "5. Tidak nyeri menelan" << endl;
    cout << "6. Tidak terdapat cairan keluar dari telinga" << endl;
    cout << "7. Tidak terdapat gerakan tidak wajar (sydenham chorea), nyeri sendi, dan atau ruam pada kulit." << endl;
    cout << "8. Tidak terdapat penurunan berat badan drastis, lemas dan atau pucat." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Autoimun" << endl;
    tindakan3();
    simpanRekamMedis(nama, nik, umur, jk, "Autoimun", "Segera berobat ke dokter spesialis penyakit dalam.");
}
void simpanSemuaRekamMedisKeFile() {
    ofstream file("rekam_medis.txt");
    if (!file.is_open()) {
        cout << "Gagal membuka file rekam_medis.txt" << endl;
        return;
    }
    for (const auto &rm : dataRekamMedis) {
        file << "Nama: " << rm.nama << endl;
        file << "NIK: " << rm.nik << endl;
        file << "Umur: " << rm.umur << endl;
        file << "Jenis Kelamin: " << (rm.jk == 'L' || rm.jk == 'l' ? "Laki-laki" : "Perempuan") << endl;
        file << "Diagnosis: " << rm.diagnosis << endl;
        file << "Tindakan: " << rm.tindakan << endl;
        file << "------------------------" << endl;
    }
    file.close();
    cout << "Data rekam medis berhasil disimpan ke rekam_medis.txt" << endl;
}
int main() {
    char menu, lanjut;
    do {
        cout << "===== MENU UTAMA =====" << endl;
        cout << "1. Diagnosis Demam" << endl;
        cout << "2. Cari Rekam Medis" << endl;
        cout << "Pilih menu (1/2): ";
        cin >> menu;

        if (menu == '1') {
            string nama, nik;
            int umur;
            char jk;
            char pilihan;
            garis();
            cout << "SISTEM DIAGNOSIS PENYAKIT DEMAM" << endl;
            garis();
            cout << "Jawab pertanyaan berikut dengan Y (Ya) atau T (Tidak)" << endl;
            cout << "Apakah terdapat ruam pada kulit? ";
            cin >> pilihan;
            if (pilihan == 'Y' || pilihan == 'y') {
                cout << "Apakah terdapat muntah, penurunan kesadaran, dan atau nyeri kepala?";
                cin >> pilihan;
                if (pilihan == 'Y' || pilihan == 'y') {
                    biodata(nama, nik, umur, jk);
                    diagnosis1(nama, nik, umur, jk);
                } else if (pilihan == 'T' || pilihan == 't') {
                    cout << "Apakah terdapat ruam berbentuk bintik atau berukuran kecil?";
                    cin >> pilihan;
                    if (pilihan == 'Y' || pilihan == 'y') {
                        biodata(nama, nik, umur, jk);
                        diagnosis2(nama, nik, umur, jk);
                    } else if (pilihan == 'T' || pilihan == 't') {
                        cout << "Apakah terdapat ruam berisi cairan?";
                        cin >> pilihan;
                        if (pilihan == 'Y' || pilihan == 'y') {
                            cout << "Apakah ruam muncul setelah demam turun?";
                            cin >> pilihan;
                            if (pilihan == 'Y' || pilihan == 'y') {
                                cout << "Apakah ruam muncul di tangan, kaki, dan mulut?";
                                cin >> pilihan;
                                if (pilihan == 'Y' || pilihan == 'y') {
                                    biodata(nama, nik, umur, jk);
                                    diagnosis3(nama, nik, umur, jk);
                                } else if (pilihan == 'T' || pilihan == 't') {
                                    biodata(nama, nik, umur, jk);
                                    diagnosis4(nama, nik, umur, jk);
                                }
                            } else if (pilihan == 'T' || pilihan == 't') {
                                cout << "Apakah ruam terasa terbakar, dan berada di sekitar mulut atau genital?";
                                cin >> pilihan;
                                if (pilihan == 'Y' || pilihan == 'y') {
                                    biodata(nama, nik, umur, jk);
                                    diagnosis5(nama, nik, umur, jk);
                                } else if (pilihan == 'T' || pilihan == 't') {
                                    biodata(nama, nik, umur, jk);
                                    diagnosis6(nama, nik, umur, jk);
                                }
                            }
                        } else if (pilihan == 'T' || pilihan == 't') {
                            cout << "Apakah ruam muncul setelah demam turun?";
                            cin >> pilihan;
                            if (pilihan == 'Y' || pilihan == 'y') {
                                cout << "Apakah kulit terasa kasar seperti pasir dan lidah seperti stoberi?";
                                cin >> pilihan;
                                if (pilihan == 'Y' || pilihan == 'y') {
                                    biodata(nama, nik, umur, jk);
                                    diagnosis7(nama, nik, umur, jk);
                                } else if (pilihan == 'T' || pilihan == 't') {
                                    biodata(nama, nik, umur, jk);
                                    diagnosis8(nama, nik, umur, jk);
                                }
                            } else if (pilihan == 'T' || pilihan == 't') {
                                cout << "Apakah terdapat 3C (Cough, Coryza, Conjunctivitis), batuk, pilek, dan mata merah?";
                                cin >> pilihan;
                                if (pilihan == 'Y' || pilihan == 'y') {
                                    biodata(nama, nik, umur, jk);
                                    diagnosis9(nama, nik, umur, jk);
                                } else if (pilihan == 'T' || pilihan == 't') {
                                    cout << "Apakah terdapat benjolan di belakang telinga?";
                                    cin >> pilihan;
                                    if (pilihan == 'Y' || pilihan == 'y') {
                                        biodata(nama, nik, umur, jk);
                                        diagnosis10(nama, nik, umur, jk);
                                    } else if (pilihan == 'T' || pilihan == 't') {
                                        biodata(nama, nik, umur, jk);
                                        diagnosis11(nama, nik, umur, jk);
                                    }
                                }
                            }
                        }
                    }
                }
            } else if (pilihan == 'T' || pilihan == 't') {
                cout << "Apakah demam kurang dari seminggu?";
                cin >> pilihan;
                if (pilihan == 'Y' || pilihan == 'y') {
                    cout << "Apakah demam terus menerus sepanjang hari?";
                    cin >> pilihan;
                    if (pilihan == 'Y' || pilihan == 'y') {
                        cout << "Apakah terdapat nyeri kepala, penurunan kesadaran dan atau kejang?";
                        cin >> pilihan;
                        if (pilihan == 'Y' || pilihan == 'y') {
                            biodata(nama, nik, umur, jk);
                            diagnosis12(nama, nik, umur, jk);
                        } else if (pilihan == 'T' || pilihan == 't') {
                            cout << "Apakah terdapat gangguan pendengaran, keseimbangan dan atau cairan dari lubang telinga?";
                            cin >> pilihan;
                            if (pilihan == 'Y' || pilihan == 'y') {
                                biodata(nama, nik, umur, jk);
                                diagnosis13(nama, nik, umur, jk);
                            } else if (pilihan == 'T' || pilihan == 't') {
                                cout << "Apakah terdapat batuk, pilek, nyeri menelan, dan atau nyeri dahi dan pipi?";
                                cin >> pilihan;
                                if (pilihan == 'Y' || pilihan == 'y') {
                                    biodata(nama, nik, umur, jk);
                                    diagnosis14(nama, nik, umur, jk);
                                } else if (pilihan == 'T' || pilihan == 't') {
                                    cout << "Apakah terdapat diare, susah BAB, dan atau mual muntah?";
                                    cin >> pilihan;
                                    if (pilihan == 'Y' || pilihan == 'y') {
                                        cout << "Apakah pasien lemas, tidak mau minum, dan atau penurunan kesadaran?";
                                        cin >> pilihan;
                                        if (pilihan == 'Y' || pilihan == 'y') {
                                            biodata(nama, nik, umur, jk);
                                            diagnosis15(nama, nik, umur, jk);
                                        } else if (pilihan == 'T' || pilihan == 't') {
                                            biodata(nama, nik, umur, jk);
                                            diagnosis16(nama, nik, umur, jk);
                                        }
                                    } else if (pilihan == 'T' || pilihan == 't') {
                                        cout << "Apakah BAK terasa nyeri, lebih sedikit, berdarah, dan atau terdapat nyeri perut bagian bawah?";
                                        cin >> pilihan;
                                        if (pilihan == 'Y' || pilihan == 'y') {
                                            biodata(nama, nik, umur, jk);
                                            diagnosis17(nama, nik, umur, jk);
                                        } else if (pilihan == 'T' || pilihan == 't') {
                                            cout << "Apakah terdapat nyeri kepala, nyeri belakang mata, nyeri otot, dan atau nyeri sendi?";
                                            cin >> pilihan;
                                            if (pilihan == 'Y' || pilihan == 'y') {
                                                cout << "Dari 1 - 10 skala nyeri di atas 6? ";
                                                cin >> pilihan;
                                                if (pilihan == 'Y' || pilihan == 'y') {
                                                    biodata(nama, nik, umur, jk);
                                                    diagnosis18(nama, nik, umur, jk);
                                                } else if (pilihan == 'T' || pilihan == 't') {
                                                    cout << "Apakah terdapat nyeri perut, muntah terus menerus, sesak, dan atau pendarahan?";
                                                    cin >> pilihan;
                                                    if (pilihan == 'Y' || pilihan == 'y') {
                                                        biodata(nama, nik, umur, jk);
                                                        diagnosis19(nama, nik, umur, jk);
                                                    } else if (pilihan == 'T' || pilihan == 't') {
                                                        biodata(nama, nik, umur, jk);
                                                        diagnosis32(nama, nik, umur, jk);
                                                    }
                                                }
                                            } else if (pilihan == 'T' || pilihan == 't') {
                                                cout << "Apakah terdapat kuning pada mata atau kulit?";
                                                cin >> pilihan;
                                                if (pilihan == 'Y' || pilihan == 'y') {
                                                    cout << "Pernah kontak dengan banjir, air yang terinfeksi, atau urine binatang? ";
                                                    cin >> pilihan;
                                                    if (pilihan == 'Y' || pilihan == 'y') {
                                                        biodata(nama, nik, umur, jk);
                                                        diagnosis20(nama, nik, umur, jk);
                                                    } else if (pilihan == 'T' || pilihan == 't') {
                                                        biodata(nama, nik, umur, jk);
                                                        diagnosis21(nama, nik, umur, jk);
                                                    }
                                                } else if (pilihan == 'T' || pilihan == 't') {
                                                    biodata(nama, nik, umur, jk);
                                                    diagnosis22(nama, nik, umur, jk);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if (pilihan == 'T' || pilihan == 't') {
                        cout << "Apakah ada riwayat traveling ke tempat endemik seperti wilayah timur Indonesia?";
                        cin >> pilihan;
                        if (pilihan == 'Y' || pilihan =='y') {
                            biodata(nama, nik, umur, jk);
                            diagnosis23(nama, nik, umur, jk);
                        } else if (pilihan == 'T' || pilihan == 't') {
                            biodata(nama, nik, umur, jk);
                            diagnosis24(nama, nik, umur, jk);
                        }
                    }
                } else if (pilihan == 'T' || pilihan == 't') {
                    cout << "Apakahterdapat mual, muntah, nyeri perut, susah BAB, dan atau diare?";
                    cin >> pilihan;
                    if (pilihan == 'Y' || pilihan =='y') {
                        biodata(nama, nik, umur, jk);
                        diagnosis25(nama, nik, umur, jk);
                    } else if (pilihan == 'T' || pilihan == 't') {
                        cout << "Apakah batuk lebih dari dua minggu dan atau kontak dengan orang yang memiliki riwayat Tuberculosis (TB)?";
                        cin >> pilihan;
                        if (pilihan == 'Y' || pilihan =='y') {
                            biodata(nama, nik, umur, jk);
                            diagnosis26(nama, nik, umur, jk);
                        } else if (pilihan == 'T' || pilihan == 't') {
                            cout << "Apakah terdapat nyeri menelan?";
                            cin >> pilihan;
                            if (pilihan == 'Y' || pilihan =='y') {
                                biodata(nama, nik, umur, jk);
                                diagnosis27(nama, nik, umur, jk);
                            } else if (pilihan == 'T' || pilihan == 't') {
                                cout << "Apakah terdapat cairan keluar dari telinga?";
                                cin >> pilihan;
                                if (pilihan == 'Y' || pilihan =='y') {
                                    biodata(nama, nik, umur, jk);
                                    diagnosis28(nama, nik, umur, jk);
                                } else if (pilihan == 'T' || pilihan == 't') {
                                    cout << "Apakah terdapat gerakan tidak wajar (sydenham chorea), nyeri sendi, dan atau ruam pada kulit?";
                                    cin >> pilihan;
                                    if (pilihan == 'Y' || pilihan =='y') {
                                        biodata(nama, nik, umur, jk);
                                        diagnosis29(nama, nik, umur, jk);
                                    } else if (pilihan == 'T' || pilihan == 't') {
                                        cout << "Apakah terdapat penurunan berat badan drastis, lemas dan atau pucat?";
                                        cin >> pilihan;
                                        if (pilihan == 'Y' || pilihan =='y') {
                                            biodata(nama, nik, umur, jk);
                                            diagnosis30(nama, nik, umur, jk);
                                        } else if (pilihan == 'T' || pilihan == 't') {
                                            biodata(nama, nik, umur, jk);
                                            diagnosis31(nama, nik, umur, jk);
                                        }
                                    }
                                }
                            }
                        }
                    }
                } 
            }
            simpanSemuaRekamMedisKeFile();                           
        } else if (menu == '2') {
            cariRekamMedis();
        } else {
            cout << "Menu tidak valid!" << endl;
        }

        cout << "Kembali ke menu utama? (Y/T): ";
        cin >> lanjut;
    } while (lanjut == 'Y' || lanjut == 'y');
    cout << "Terima kasih telah menggunakan program ini." << endl;
    return 0;
}