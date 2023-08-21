#include <iostream>
#include <string>
using namespace std;
string InsertarPunto(string f);
int main()
{
    string frase;
    cout<<"Ingrese frase: ";
    getline(cin, frase);
    cout<<InsertarPunto(frase)<<endl;
    return 0;
}

string InsertarPunto(string f)
{
    string s=".";
    for (int i=3; i<f.size(); i+=4)
    {
        f.insert (i, s);
    }
    return f;
}