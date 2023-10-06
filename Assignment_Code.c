#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*Next;
};

void addfirst(int key,struct Node**head){ //Function To Add Node At Start Of Linked List.....
    struct Node*temp;
    temp=malloc(sizeof(struct Node));
    if(temp!=NULL){ //Linking Temp Node To The Start Of The Linked List....
        temp->data=key;
        temp->Next=*head;
        *head=temp;
    }
}

int CompareLL(struct Node**head1,struct Node**head2){
    struct Node*temp1=(*head1);
    struct Node*temp2=(*head2);
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data == temp2->data){
            temp1=temp1->Next;
            temp2=temp2->Next;
        }
        else{
            return (-1);
        }
    }
    return 0;
}

void print(struct Node**head,int n){ //Function To Print Nodes Of Linked List.....
    struct Node*temp=(*head);
    printf("THE LINKED LIST-%d IS ::: ",n);
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->Next;
    }
    printf("NULL\n");
}

int main(){
    printf("\n");
    struct Node*Head1=NULL;
    for(int i=5;i>0;i--){
        addfirst(i*10,&Head1);
    }
    print(&Head1,1);    

    struct Node*Head2=NULL;
    for(int i=5;i>0;i--){
        addfirst(i*10,&Head2);
    }
    print(&Head2,2);    
    printf("\n");
    int ans=CompareLL(&Head1,&Head2);
    if(ans==(-1)){
        printf("THE 2 LINKED LIST ARE NOT EQUAL\n");
    }
    else{
        printf("THE 2 LINKED LIST ARE EQUAL\n");
    }
    return 0;
}