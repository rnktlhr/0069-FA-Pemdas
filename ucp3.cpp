#include <iostream> 
#include <string>
using namespace std;


class MataKuliah 
{ 
private: // isi dengan access modifier yang dibutuhkan 
    float presensi; 
    float activity;
    float exercise;
    float tugasakhir;
    float semuanilai;
    // tambahkan dengan variabel lain yang dibutuhkan dibawah ini
public: 
        MataKuliah() 
        { 
            presensi = 0.0;
            activity = 0.0;
            exercise = 0.0;
            tugasakhir = 0.0;
            semuanilai = 0.0; 
            // isi dengan inisialisasi variabel yang dibutuhkan dibawah ini 
        } 
        virtual void namaMataKuliah() {return;} 
        virtual void inputNilai(){return;}
        virtual float hitungNilaiAakhir() {return;}
        virtual void cekKelulusan(){return;}
        // tambahkan virtual fungsi lain yang dibutuhkan dibawah ini 
        
        void setPresensi(float nilai) 
        { 
            this->presensi = nilai; 
        } 
        float getPresensi() 
        { 
            return presensi; 
        }

        void setActivity(float nilai){
            this->activity = nilai;
        }

        float getActivity(){
            return activity;
        }

        void setExercise(float nilai){
            this->exercise = nilai;
        }

        float getExercise(){
            return exercise;
        }

        void setTugasAkhir(float nilai){
            this->tugasakhir = nilai;
        }

        float getTugasAkhir(){
            return tugasakhir;
        }
        
        void setsemuanilai(float nilai){
            this->semuanilai = presensi + activity + exercise + tugasakhir;
        }

        float getsemuanilai(){
            return semuanilai;
        }
};

class Pemrograman : public MataKuliah{
    public:
        Pemrograman(){}

        void inputdata(){
            float presensi;
            float activity;
            float exercise;
            float tugasakhir;

            cout << "Nilai Presensi : " << endl;
            cin >> presensi;
            setPresensi(presensi);

            cout << "Nilai Activity : " << endl;
            cin >> activity;
            setActivity(activity);

            cout << "Nilai Exercise : " << endl;
            cin >> exercise;
            setExercise(exercise);

            cout << "Nilai Tugas Akhir : " << endl;
            cin >> tugasakhir;
            setTugasAkhir(tugasakhir);

        }
        
};
    
  
 
class Jaringan : public MataKuliah 
{ 
    public:

    Jaringan(){}
    
    void input(){
            float activity;
            float exercise;

            cout << "Nilai Activity : " << endl;
            cin >> activity;
            setActivity(activity);

            cout << "Nilai Exercise : " << endl;
            cin >> exercise;
            setExercise(exercise);
            
    }

   
    // isi disini untuk mengisi kelas jaringan 
};

int main(){
   Pemrograman a;
   Jaringan b;

   cout << "Input Nilai Pemrograman : " << endl;
   a.inputdata();

   cout << "Input Nilai Jaringan : " << endl;
   b.input();


}