#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int numero;
    vector<int>vectorcito;
    cout << "Hello World!" << endl;
    cin>>numero;
    int i=2;
    while(i<=numero)
      {
        if(numero%i==0)  //a%b=0, implica que b es factor de a.
        {
        vectorcito.push_back(i); //Añadimos el factor al arreglo.
        numero=numero/i;
        }else{
            i++;
        }
}
    for(auto e: vectorcito){
        cout<<e;
    }
    return 0;
}
