#include<iostream>
#include<fstream>
#include"StaticLinkList.h"

using namespace std;

void Store(StaticLinkList S,int s)
{
    int i;
    ofstream fout;
    fout.open("license_plate.txt",ios::out);
    fout<<s<<" ";
    for(i=0;i<MAXSIZE;i++)
    {
        fout<<S[i].data.plate<<" "<<S[i].data.name<<" "<<S[i].data.ID<<" "<<S[i].data.car<<" "<<S[i].cur<<" ";
    }
    fout.close();
}
