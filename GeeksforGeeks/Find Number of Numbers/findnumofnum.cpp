{
     int digito=0, contador=0;
     
     for(int i=0; i<n; i++){
         int aux=a[i];
         while(aux>0){
             digito= aux%10;
             if(digito==k)
             contador++;
             aux/=10;
         }
     }
     return contador;
}
