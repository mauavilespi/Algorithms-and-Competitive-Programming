//FIRST FUNCTION (mauavilespi)

int getCount(struct Node* head){
    int aux=0;
    
    while (head!=NULL){
        head=head->next;
        aux++;
    }
    
    return aux;
}

