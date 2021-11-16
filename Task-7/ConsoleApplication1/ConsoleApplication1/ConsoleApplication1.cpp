#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct students
{
   
    string surname;
    string name;  
    string patronymic;
    int day;
    int month;
    int year;
    int average_score;
    
};
double averageAge(students* m)
{
    double s = 0;
    for (int i = 0; i < 31; i++)
    {
        int a = 2021 * 365 + 11*30+15;
        s = s + (a- m[i].year*365- m[i].month*30- m[i].day);
    }
    return s / 31 / 365;
 }
void  sort(students* &m)
{
    for (int i = 0; i < 31; i++)
    {
        int max = i;
        for (int j = i + 1; j < 31; j++)
        {
            
            if (m[max].average_score < m[j].average_score)
            {
                max = j;
            }
        }
        swap(m[i],m[max]);
    }
}
string mostCommonName(students* m)
{
    string s; int v=1, max=0;
    for (int i = 0; i < 31; i++)
    {
        for (int j = i + 1; j < 31; j++)
        {
            if (m[i].name == m[j].name)
            {
                v++;
            }
        }
        if (v > max)
        {
            s = m[i].name; max = v; v=0;
        }
    }
    return s;
}
void  print(students *m)
{
    cout << "    surname   "  << '|';
    cout  << "     name    "  << '|';
    cout << "   patronymic  "  << '|';
    cout  << "   date   "  << '|';
    cout << "average score" << '|';
    cout << '\n';
    for (int i = 0; i < 31; i++) {
        cout << setw(14) << m[i].surname  << '|';
        cout << setw(13)  << m[i].name   << '|';
        cout << setw(15) << m[i].patronymic  << '|';
        cout << setw(2) << m[i].day <<"." << setw(2) << m[i].month << "." << m[i].year << '|';
        cout << "      " << m[i].average_score << "      " << '|';
        cout << '\n';
    }

    cout << '\n';
}

int main()
{
    students *m = new students[31];
    
    m[0] = { "Artyushevskaya","Ksenia","Olegovna",	7,1,2003	,	8 };
    m[1] = { "Britvich","Konstantin","Dmitrievich",	16,4,2004	,	9 };
    m[2] = { "Bay","Pavel","Valerievich",	17,7,2003	,	6 };
    m[3] = { "Voitekhovich","Daniil","Konstantinovich",	31,1,2003	,	3 };
    m[4] = { "Voytusyonok","Alexander","Andreevich",	19,11,2003	,	8 };
    m[5] = { "Glushets","Maxim","Sergeevich",	5,2,2003	,	7 };
    m[6] = { "Dudarev","Alexey","Dmitrievich",	15,1,2004	,	3 };
    m[7] = { "Zhuk","Semyon","Vyacheslavovich",	18,12,2003	,	9 };
    m[8] = { "Zhuravsky","Evgeny","Alexandrovich",	27,5,2004	,	4 };
    m[9] = { "Korolevskaya","Daria","Timofeevna",	26,6,2003	,	4 };
    m[10] = { "Le","Thanh","Bats",	3,2,2003	,	4 };
    m[11] = { "Lissitzky","Kirill","Yurievich",	20,2,2004	,	4 };
    m[12] = { "Makei","Pavel","Igorevich",	25,9,2003	,	9 };
    m[13] = { "Maksimova","Marina","Alexandrovna",	29,8,2004	,	9 };
    m[14] = { "Mikulsky","Ivan","Sergeevich",	29,12,2003	,	9 };
    m[15] = { "Pishchako","Maxim" ,"Ruslanovich",	19,9,2004	,	3 };
    m[16] = { "Puzevich" ,"Kirill", "Dmitrievich",	17,12,2004	,	9 };
    m[17] = {  "Razumov","Dmitry","Aleksandrovich",	5,12,2003	,	7 };
    m[18] = { "Roshchupkin", "Artur", "Maksimovich",	10,2,2004	,	9 };
    m[19] = { "Sankevich", "Alexander", "Vadimovich",	5,8,2003	,	7 };
    m[20] = { "Semenido", "Nadezhda","Sergeevna",	13,1,2004	,	8 };
    m[21] = { "Skachko","Anton","Gennadievich",	10,11,2004	,	6 };
    m[22] = { "Slizh","Anna","Sergeevna",	29,7,2004	,	9 };
    m[23] = { "Sobolev","Georgy","Nikolaevich",	6,8,2004	,	3 };
    m[24] = { "Stepanchuk","Alexey","Alexandrovich",	15,9,2004	,	9 };
    m[25] = { "Tolokonnikov","Egor","Alexandrovich",	16,12,2003	,	9 };
    m[26] = { "Shamal","Victor","Nikolaevich", 4,5,2004	,	8 };
    m[27] = { "Sharikov","Vladislav","Vasilievich",	6,1,2004	,	4 };
    m[28] = { "Shemerey","Andrey","Alekseevich",	21,9,2004	,	9 };
    m[29] = { "Pavlyukevich" ,"Roman","Dmitrievich",	12,10,2004	,	3 };
    m[30] = { "Tsygankov","Alexander", "Sergeevich",	26,2,2003	,	7 };


    print(m);
   cout<<"\n" <<"most common name:"<< mostCommonName(m)<<"\n\n";
   cout<<"\n" <<"average age:"<< averageAge(m)<<"\n\n";
   sort(m);
   cout << "\n" << "sorting students by average score" << "\n\n";
   print(m);
}


