#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string cadena;
    
    while(cin >> cadena){
        
        for(int i=0; i<cadena.size(); i++)
            cadena [i]-=7;
        
        cout << cadena<<'\n';
    }
        
    
    return 0;
}
   
