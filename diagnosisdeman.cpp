#include <iostream>
using namespace std;

void garis() {
    cout << "---------------------------------------------" << endl;
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

void diagnosis1(){
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Terdapat ruam pada kulit." << endl;
    cout << "2. Terdapat muntah, penurunan kesadaran, dan atau nyeri kepala." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Toxic Shock Syndrome (TSS) atau Sindrom Syok Beracun." << endl;
    tindakan2();
}
void diagnosis2(){
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Terdapat ruam pada kulit." << endl;
    cout << "2. Tidak terdapat muntah, penurunan kesadaran, dan atau nyeri kepala." << endl;
    cout << "3. Terdapat ruam berbentuk bintik atau berukuran kecil." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Demam Berdarah." << endl;
    tindakan1();
}
void diagnosis3(){
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
}
void diagnosis4(){
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
}
void diagnosis5(){
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
}
void diagnosis6(){
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
}
void diagnosis7(){
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
}
void diagnosis8(){
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
}
void diagnosis9(){
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
}
void diagnosis10(){
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
}
void diagnosis11(){
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
}
void diagnosis12(){
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
}
void diagnosis13(){
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
}
void diagnosis14(){
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
}
void diagnosis15(){
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
}
void diagnosis16(){
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
}
void diagnosis17(){
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
}
void diagnosis18(){
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
}
void diagnosis19(){
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
}
void diagnosis20(){
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
}
void diagnosis21(){
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
}
void diagnosis22(){
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
}
void diagnosis23(){
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
}
void diagnosis24(){
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
}
void diagnosis25(){
    garis();
    cout << "TANDA DAN GEJALA:" << endl;
    cout << "1. Tidak terdapat ruam pada kulit." << endl;
    cout << "2. Demam lebih dari seminggu." << endl;
    cout << "3. Terdapat mual, muntah, nyeri perut, susah BAB, dan atau diare." << endl;
    garis();
    cout << "DIAGNOSIS:" << endl;
    cout << "Demam tifoid minggu kedua." << endl;
    tindakan1();
}
void diagnosis26(){
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
}
void diagnosis27(){
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
}
void diagnosis28(){
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
}
void diagnosis29(){
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
}
void diagnosis30(){
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
}
void diagnosis31(){
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
}
