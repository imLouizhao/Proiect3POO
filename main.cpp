#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

class Animal {
protected:
    string grupa;
    string nume;
    string denumire_stiintifica;
    string familie;
    int durata_de_viata;
    string habitat;
    string hrana;
    string dusmani_naturali;
public:
    Animal() {
        grupa = "-";
        nume = "-";
        denumire_stiintifica = "-";
        familie = "-";
        durata_de_viata = 0;
        habitat = "-";
        hrana = "-";
        dusmani_naturali = "-";
    }

    ~Animal() {
        grupa = "-";
        nume = "-";
        denumire_stiintifica = "-";
        familie = "-";
        durata_de_viata = 0;
        habitat = "-";
        hrana = "-";
        dusmani_naturali = "-";
    }

    Animal(const string& nume, const string& denumire_stiintifica, const string& familie, const int durata_de_viata, const string& habitat, const string& hrana, const string& dusmani_naturali, const string& grupa) {
        this->grupa = grupa;
        this->nume = nume;
        this->denumire_stiintifica = denumire_stiintifica;
        this->familie = familie;
        this->durata_de_viata = durata_de_viata;
        this->habitat = habitat;
        this->hrana = hrana;
        this->dusmani_naturali = dusmani_naturali;
    }

    Animal(const Animal &obj) {
        this->grupa = obj.grupa;
        this->nume = obj.nume;
        this->denumire_stiintifica = obj.denumire_stiintifica;
        this->familie = obj.familie;
        this->durata_de_viata = obj.durata_de_viata;
        this->habitat = obj.habitat;
        this->hrana = obj.hrana;
        this->dusmani_naturali = obj.dusmani_naturali;
    }

    string getGrupa() {
        return grupa;
    }

    void setGrupa(string grup) {
        grupa = grup;
    }

    void afisare() {
        cout << "Grupa:" << grupa << endl;
        cout << "Nume: " << nume << endl;
        cout << "Denumire stiintifica: " << denumire_stiintifica << endl;
        cout << "Familie: " << familie << endl;
        cout << "Durata de viata: " << durata_de_viata << " ani " << endl;
        cout << "Habitat:" << habitat << endl;
        cout << "Hrana:" << hrana << endl;
        cout << "Dusmani naturali:" << dusmani_naturali << endl;
    }

    void citire(ifstream &fin) {
        fin >> nume;
        fin >> denumire_stiintifica;
        fin >> familie;
        fin >> durata_de_viata;
        fin >> habitat;
        fin >> hrana;
        fin >> dusmani_naturali;
    }

    void citire2() {
        cout << ">----- Introduceti numele: -----<" << endl;
        cin >> nume;
        cout << ">----- Introduceti denumirea stiintifica: -----<" << endl;
        cin >> denumire_stiintifica;
        cout << ">----- Introduceti familia: -----<" << endl;
        cin >> familie;
        cout << ">----- Introduceti durata de viata: -----<" << endl;
        cin >> durata_de_viata;
        cout << ">----- Introduceti habitatul: -----<" << endl;
        cin >> habitat;
        cout << ">----- Introduceti hrana: -----<" << endl;
        cin >> hrana;
        cout << ">----- Introduceti dusmani naturali: -----<" << endl;
        cin >> dusmani_naturali;
        cout << endl;
    }

    friend ostream &operator << (ostream &out, const Animal& obj) {
        out << ">-- Grupa: ---<" << endl;
        out << obj.grupa << endl;
        out << ">--- Nume: ---<" << endl;
        out << obj.nume << endl;
        out << ">--- Denumire stiintifica: ---<" << endl;
        out << obj.denumire_stiintifica << endl;
        out << ">--- Familie: ---<" << endl;
        out << obj.familie << endl;
        out << ">--- Durata de viata: ---<" << endl;
        out << obj.durata_de_viata << " ani" << endl;
        out << ">--- Habitat: ---<" << endl;
        out << obj.habitat << endl;
        out << ">--- Hrana: ---<" << endl;
        out << obj.hrana << endl;
        out << ">--- Dusmani naturali: ---<" << endl;
        out << obj.dusmani_naturali << endl;
        return out;
    }

    friend istream &operator >> (istream &in, Animal& obj) {
        cout << ">----- Introduceti grupa -----<" << endl;
        in >> obj.grupa;
        cout << endl;
        cout << ">----- Introduceti numele -----<" << endl;
        in >> obj.nume;
        cout << endl;
        cout << ">----- Introduceti denumirea stiintifica -----<" << endl;
        in >> obj.denumire_stiintifica;
        cout << endl;
        cout << ">----- Introduceti familia -----<" << endl;
        in >> obj.familie;
        cout << endl;
        cout << ">----- Introduceti durata de viata -----<" << endl;
        in >> obj.durata_de_viata;
        cout << endl;
        cout << ">----- Introduceti habitatul -----<" << endl;
        in >> obj.habitat;
        cout << endl;
        cout << ">----- Introduceti hrana -----<" << endl;
        in >> obj.hrana;
        cout << endl;
        cout << ">----- Introduceti dusmani naturali -----<" << endl;
        in >> obj.dusmani_naturali;
        cout << endl;
        return in;
    }

    friend ifstream &operator >> (ifstream &fin, Animal& obj) {
        fin >> obj.grupa;
        fin >> obj.nume;
        fin >> obj.denumire_stiintifica;
        fin >> obj.familie;
        fin >> obj.durata_de_viata;
        fin >> obj.habitat;
        fin >> obj.hrana;
        fin >> obj.dusmani_naturali;
        return fin;
    }
};

class Vertebrate : public Animal {
protected:
    int numar_osos;
    string tip_sange;
    string sistem_respirator;
public:
    Vertebrate() : Animal() {
        numar_osos = 0;
        tip_sange = "-";
        sistem_respirator = "-";
    }
    ~Vertebrate() {
        numar_osos = 0;
        tip_sange = "-";
        sistem_respirator = "-";
    }
    Vertebrate(const string& nume, const string& denumire_stiintifica, const string& familie, const int durata_de_viata, const string& habitat, const string& hrana, const string& dusmani_naturali, const string& grupa, const int numar_osos, const string& tip_sange, const string& sistem_respirator) : Animal(nume, denumire_stiintifica, familie, durata_de_viata, habitat, hrana, dusmani_naturali, grupa){
        this->numar_osos = numar_osos;
        this->tip_sange = tip_sange;
        this->sistem_respirator = sistem_respirator;
    }
    Vertebrate(const Vertebrate &obj)  : Animal(obj) {
        this->numar_osos = obj.numar_osos;
        this->tip_sange = obj.tip_sange;
        this->sistem_respirator = obj.sistem_respirator;
    }
    friend ostream &operator << (ostream &out, const Vertebrate& obj) {
        ((Animal *)&obj)->afisare();
        out << "Numar osos:";
        out << obj.numar_osos << endl;
        cout << "Tip sange:";
        out << obj.tip_sange << endl;
        cout << "Sistem respirator:";
        out << obj.sistem_respirator << endl;
        cout << endl;
        return out;
    }
    friend istream &operator >> (istream &in, Vertebrate& obj) {
        ((Animal*)&obj)->citire2();
        cout << ">----- Introduceti numarul de oase -----<" << endl;
        in >> obj.numar_osos;
        cout << endl;
        cout << ">----- Introduceti tipul de sange -----<" << endl;
        in >> obj.tip_sange;
        cout << endl;
        cout << ">----- Introduceti sistemul respirator -----<" << endl;
        in >> obj.sistem_respirator;
        cout << endl;
        return in;
    }
    friend ifstream &operator >> (ifstream &fin, Vertebrate& obj) {
        ((Animal*)&obj)->citire(fin);
        fin >> obj.numar_osos;
        fin >> obj.tip_sange;
        fin >> obj.sistem_respirator;
        return fin;
    }
};

class Nevertebrate : public Animal {
protected:
    int numar_picioare;
    string structura_corpului;
    string metode_reproducere;
public:
    Nevertebrate() : Animal() {
        numar_picioare = 0;
        structura_corpului = "-";
        metode_reproducere = "-";
    }
    ~Nevertebrate() {
        numar_picioare = 0;
        structura_corpului = "-";
        metode_reproducere = "-";
    }
    Nevertebrate(const string& nume, const string& denumire_stiintifica, const string& familie, const int durata_de_viata, const string& habitat, const string& hrana, const string& dusmani_naturali, const string& grupa, const int numar_picioare, const string& structura_corpului, const string& metode_reproducere) : Animal(nume, denumire_stiintifica, familie, durata_de_viata, habitat, hrana, dusmani_naturali, grupa) {
        this->numar_picioare = numar_picioare;
        this->structura_corpului = structura_corpului;
        this->metode_reproducere = metode_reproducere;
    }
    Nevertebrate(const Nevertebrate &obj)  : Animal(obj) {
        this->numar_picioare = obj.numar_picioare;
        this->structura_corpului = obj.structura_corpului;
        this->metode_reproducere = obj.metode_reproducere;
    }
    friend ostream &operator << (ostream &out, const Nevertebrate& obj) {
        ((Animal *)&obj)->afisare();
        out << "Numar picioare:";
        out << obj.numar_picioare << endl;
        out << "Structura corpului:";
        out << obj.structura_corpului << endl;
        out << "Metode reproducere:";
        out << obj.metode_reproducere << endl << endl;
        return out;
    }
    friend istream &operator >> (istream &in, Nevertebrate& obj) {
        ((Animal*)&obj)->citire2();
        cout << ">----- Introduceti numarul de picioare -----<" << endl;
        in >> obj.numar_picioare;
        cout << endl;
        cout << ">----- Introduceti structura corpului -----<" << endl;
        in >> obj.structura_corpului;
        cout << endl;
        cout << ">----- Introduceti metode de reproducere -----<" << endl;
        in >> obj.metode_reproducere;
        cout << endl;
        return in;
    }
    friend ifstream &operator >> (ifstream &fin, Nevertebrate& obj) {
        ((Animal*)&obj)->citire(fin);
        fin >> obj.numar_picioare;
        fin >> obj.structura_corpului;
        fin >> obj.metode_reproducere;
        return fin;
    }
};

class Pesti : public Vertebrate {
protected:
    int lungime;
    bool rapitor;
public:
    Pesti() : Vertebrate() {
        lungime = 0;
        rapitor = false;
    }
    ~Pesti() {
        lungime = 0;
        rapitor = false;
    }
    Pesti(const string& nume, const string& denumire_stiintifica, const string& familie, const int durata_de_viata, const string& habitat, const string& hrana, const string& dusmani_naturali, const string& grupa, const int lungime, const bool rapitor) : Vertebrate(nume, denumire_stiintifica, familie, durata_de_viata, habitat, hrana, dusmani_naturali, grupa, numar_osos, tip_sange, sistem_respirator) {
        this->lungime = lungime;
        this->rapitor = rapitor;
    }
    Pesti(const Pesti &obj) : Vertebrate(obj) {
        this->lungime = obj.lungime;
        this->rapitor = obj.rapitor;
    }

    friend ostream &operator << (ostream &out, const Pesti& obj) {
        ((Vertebrate *)&obj)->afisare();
        out << "Lungime: ";
        out << obj.lungime << " metri" << endl;
        out << "Rapitor: ";
        if(obj.rapitor)
            out << "Da" << endl;
        else
            out << "Nu" << endl;
        return out;
    }

    friend istream &operator >> (istream &in, Pesti& obj) {
        string esterapitor;
        ((Vertebrate *)&obj)->citire2();
        cout << ">----- Introduceti lungimea: -----<" << endl;
        in >> obj.lungime;
        cout << ">----- Introduceti daca este rapitor: -----<" << endl;
        in >> esterapitor;
        if(esterapitor == "da")
            obj.rapitor = true;
        if(esterapitor == "nu")
            obj.rapitor = false;
        return in;
    }

    friend ifstream &operator >> (ifstream &fin, Pesti& obj) {
        ((Vertebrate*)&obj)->citire(fin);
        fin >> obj.lungime;
        fin >> obj.rapitor;
        return fin;
    }
};

template <class T>
class AtlasZoologic {
protected:
    T **v;
    int n;
public:
    void citire() {
        string grupa;

        ifstream fin("animale.in");
        if(!fin) {
            cout << "fisierul nu a putut fi deschis" << endl;
            exit(-1);
        }
        fin >> n;
        v = new T*[n];
        for(int i = 0; i < n; i++) {
            fin >> grupa;
            if(grupa == "vertebrate") {
                Vertebrate *obj = new Vertebrate();
                obj->setGrupa(grupa);
                fin >> *obj;
                v[i] = obj;
            }
            else if(grupa == "nevertebrate") {
                Nevertebrate *obj = new Nevertebrate();
                obj->setGrupa(grupa);
                fin >> *obj;
                v[i] = obj;
            }
            else if(grupa == "vertebrate_peste") {
                Pesti *obj = new Pesti();
                obj->setGrupa(grupa);
                fin >> *obj;
                v[i] = obj;
            }
        }
    }
    void afisare() {
        if(n == 0) {
            cout << "!!NU EXISTA ANIMALE!!" << endl;
            return;
        }
        for(int i = 0; i < n; i++) {
            if(v[i]->getGrupa() == "vertebrate") {
                cout << *(Vertebrate *)v[i];
            }
            else if(v[i]->getGrupa() == "nevertebrate") {
                cout << *(Nevertebrate *)v[i];
            }
            else if(v[i]->getGrupa() == "vertebrate_peste") {
                cout << *(Pesti *)v[i];
            }
        }
        cout << endl;
    }

    void adaugare(Animal *obj) {
        v[n] = obj;
        n++;
    }

    AtlasZoologic& operator+= (Animal *obj) {
        T **tmp = new T*[n];
        for (int i = 0; i < n; i++) {
            tmp[i] = v[i];
        }
        delete[] v;
        v = new T*[n+1];
        for (int i = 0; i < n; i++) {
            v[i] = tmp[i];
        }
        v[n] = obj;
        n++;

        return *this;
    }

    void del_poz(int pozitie) {
        for(int i = pozitie-1; i < n-1; i++) {
            v[i] = v[i+1];
        }
        n--;
    }

    void del() {
        delete[] v;
    }
};

int main() {
    AtlasZoologic<Animal> a{};
    int optiune;
    string grupa;

    do {
        cout << "!>------- MENIU: -------<!" << endl;
        cout << "1. Introducere n animale din fisier" << endl;
        cout << "2. Introducere animal la tastatura" << endl;
        cout << "3. Afisare animale " << endl;
        cout << "4. Stergere animal " << endl;
        cout << "5. Stergere toate animalele " << endl;
        cout << "6. Iesire " << endl;
        cout << "Introduceti o optiune: ";
        cin >> optiune;
        if(optiune == 1) {
            a.citire();
        }
        else if(optiune == 2) {
            cout << ">----- Introducere animal -----<" << endl;
            cout << ">----- Introduceti grupa -----<" << endl;
            cin >> grupa;
            if(grupa == "vertebrate") {
                Vertebrate *obj = new Vertebrate();
                obj->setGrupa(grupa);
                cin >> *obj;
                a += obj;
            }
            else if(grupa == "nevertebrate") {
                Nevertebrate *obj = new Nevertebrate();
                obj->setGrupa(grupa);
                cin >> *obj;
                a += obj;
            }
            else if(grupa == "vertebrate_peste") {
                Pesti *obj = new Pesti();
                obj->setGrupa(grupa);
                cin >> *obj;
                a += obj;
            }
        }
        else if(optiune == 3) {
            cout << ">--- Afisarea animalelor: ---<" << endl;
            a.afisare();
        }
        else if(optiune == 4) {
            int pozitie;
            cout << ">--- Alegeti animalul dorit pentru stergere: ---<" << endl;
            cin >> pozitie;
            a.del_poz(pozitie);
        }
        else if(optiune == 5) {
            a.del();
        }
    }while(optiune != 6);
    return 0;
}
