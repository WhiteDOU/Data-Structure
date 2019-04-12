#include<iostream>
#include<fstream>
#include"StaticLinkList.h"

using namespace std;

int Read(StaticLinkList S)
{
    int i,s;
    ifstream fin;
    fin.open("license_plate.txt",ios::in);
    fin>>s;
    for(i=0;i<MAXSIZE;i++)
    {
        fin>>S[i].data.plate;
        fin>>S[i].data.name;
        fin>>S[i].data.ID;
        fin>>S[i].data.car;
        fin>>S[i].cur;
    }
    fin.close();
    return s;
}
