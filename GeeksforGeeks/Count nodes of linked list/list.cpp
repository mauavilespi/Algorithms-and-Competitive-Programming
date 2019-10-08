//FIRST FUNCTION (mauavilespi)

int getCount(struct Node* head){
    int aux=0;
    
    while (head!=NULL){
        head=head->next;
        aux++;
    }
    
    return aux;
}


//SECOND FUNCTION (christianT)
int getCount(struct Node* head){
    int aux;
    for(int i=1; head!=NULL; i++){
        head= head->next;
        aux=i;
    }
    return aux;
}

