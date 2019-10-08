#include <bits/stdc++.h>
using namespace std;

int main(){
    int T=0;
    cin>>T;
    
    while (T>0){
        int N =0;
        cin >> N;
        vector <int> vec1, vec2, vec3, vec4, vec5, vec6;

        
        for (int i=0; i<N; i++){
            
            int aux=0, contador=0, valor=0;
            cin >> aux;
            
            valor =aux;
            
            if (valor==0)
                vec1.push_back(aux);
            
            while (valor>0){
                valor = valor /10;
                contador++;
            }
            
            
            
            
            switch (contador){
                case 1:
                    vec1.push_back(aux);
                    break;
                case 2:
                    vec2.push_back(aux);
                    break;
                case 3:
                    vec3.push_back(aux);
                    break;
                case 4:
                    vec4.push_back(aux);
                    break;
                case 5:
                    vec5.push_back(aux);
                    break;
                case 6:
                    vec6.push_back(aux);
                    break;
            }
            
    }
    
    
    int nvec=1, pos=0, k=0;
    cin >> k;
    
    
    pos=k;
    
    k=k-vec1.size();
    
    if (k>0){
        pos=k;
        k=k-vec2.size();
        nvec++;
        if (k>0){
            pos=k;
            k=k-vec3.size();
            nvec++;
            if(k>0){
                pos =k;
                k=k-vec4.size();
                nvec++;
                if(k>0){
                    pos=k;
                    k=k-vec5.size();
                    nvec++;
                    if(k>0){
                        pos=k;
                        k=k-vec6.size();
                        nvec++;
                    }
                }
            }
        }
    }
    
    //cout << "k: " << k << "nvec: " << nvec << "pos: " << pos;
    
    switch (nvec){
        case 1:
            sort(vec1.begin(), vec1.end());
            cout << vec1[pos-1];
            break;
        case 2:
            sort(vec2.begin(), vec2.end());
            cout << vec2[pos-1];
            break;
        case 3:
            sort(vec3.begin(), vec3.end());
            cout << vec3[pos-1];
            break;
        case 4:
            sort(vec4.begin(), vec4.end());
            cout << vec4[pos-1];
            break;
        case 5:
            sort(vec5.begin(), vec5.end());
            cout << vec5[pos-1];
            break;
        case 6:
            sort(vec6.begin(), vec6.end());
            cout << vec6[pos-1];
            break;
    }
    
    cout << '\n';
    
    
    

    
    T--;
    
    }
    return 0;
    
}
