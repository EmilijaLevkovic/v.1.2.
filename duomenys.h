ifndef FAILAI_H
#define FAILAI_H
#include "lib.h"
#include "studentas.h"
#include "skaiciavimai.h"
struct stud{
    string vardas,pavarde;
    vector<int>pazymiai;
    int egzaminas;

};
void Skaitymas(vector<Studentasc> &temp,std::stringstream &temp2,Timer &t_vis);
void outf(vector<Studentasc> &temp);
void sukurtifaila(int filesize,int ndsk);
void isskaidymas(vector<Studentasc> &studentai,int tipas);
void out_failo_sukurimas(vector<Studentasc> &temp,string tipas);
void tipas2(vector<Studentasc> &studentai);
void tipas3(vector<Studentasc> &studentai);
bool paz_skirst(Studentasc &temp);
bool partition(Studentasc &temp);
void out_failo_sukurimas3(vector<Studentasc> &temp,string tipas,vector<Studentasc>::iterator it);

#endif
