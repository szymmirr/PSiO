#include <iostream>
using namespace std;
int main()
{
    int pyknal,pyknelo=0;
    string wyraz1,wyraz2;
    cin>>wyraz1>>wyraz2;
    for(int i=0;i<wyraz1.size();i++)
    {
        pyknal=0;
        for(int j=0;j<wyraz2.size();j++)
        {
            if(wyraz1[i]!=wyraz2[j])
            {
                break;
            }
            if(wyraz1[i]==wyraz2[j])
            {
                pyknal+=1;
                i+=1;
            }

            if(pyknal==wyraz2.size())
            {
                cout<<"tak"<<endl;
                pyknelo=1;
            }
        }
    }
    if(pyknelo==0)
    {
        cout<<"nie"<<endl;
    }
    return 0;
}
