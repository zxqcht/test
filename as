#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    char data;
    struct node *lchild,*rchild;
}node;

node* create(){
    node *T;
    char c;
    scanf("%c",&c);
    if(c=='0'){
        T=NULL;
    }
    else{
        T=(node*)malloc(sizeof(node));
        T->data=c;
        T->lchild=create();
        T->rchild=create();
    }
    return T;
}

print(node *T){
    if(T==NULL){
        return 0;
    }
        printf("%c ",T->data);
        print(T->lchild);
        print(T->rchild);

}

node* parent(char x,node *r){
    node *p;
    if(r==NULL)
        return NULL;
    if(r->lchild->data==x||r->rchild->data==x){
        printf("%c ",r->data);
        return r;
    }
    p=parent(x,r->lchild);
    if(p!=NULL){
        return p;
    }
    else{
        return(parent(x,r->rchild));
    }
}
void visit(node *b){
    printf("%c",b->data);
}
void cht(node *T,char x){
    if(!T)
        printf("0");
    node *s[100],*pre;
    int top=-1,c=0,d=0;
    while(T||top!=-1){
        while(T){
            s[++top]=T;
            T=T->lchild;
        }
        if(top!=-1){
            T=s[top];
            if(T->rchild==NULL||T->rchild==pre){
                top--;
                if(T->data==x){
                    c=c+1;
                    while(top!=-1){
                        visit(s[top--]);
                        d=d+1;
                    }
                }
                pre=T;
                T=NULL;
            }
            else
                T=T->rchild;
        }
    }
    if(c==0||d==0){
        printf("0");
    }
}
int main(){
    node *M;
    char a;
    M=create();
    print(M);
}
