#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
typedef struct node {
char *token; struct node *node1,*node2, *node3,*node4,*node5,*node6;

} node;


node *initNodes(char *token,node *node1,node* node2,node* node3,node* node4,node* node5,node* node6);
node *makenode(char *token); 
node *makeTree6(char *token,node *node1,node* node2,node* node3,node* node4,node* node5,node* node6);
node *makeTree5(char *token,node *node1,node* node2,node* node3,node* node4,node* node5);
node *makeTree4(char *token,node *node1,node* node2,node* node3,node* node4);
node *makeTree3(char *token,node *node1,node* node2,node* node3);
node *makeTree2(char *token,node *node1,node* node2);
node *makeTree1(char *token,node *node1);
void addChild(node *parent,node *child);




void printtree(node *tree);
#define YYSTYPE struct node*
int main(){


    node* leaf1=makenode("n1");
    node* leaf2=makenode("n2");
    node* leaf3=makenode("n3");
    node* leaf4=makenode("n4");
    node* leaf5=makenode("n5");
    node* leaf6=makenode("n6");
    node* leaf7=makenode("n7");
    node* leaf8=makenode("n8");
    node* leaf9=makenode("n9");
    node* leaf10=makenode("n10");
    node* subtree1=makeTree4("subtree1",leaf1,leaf2,leaf3,leaf4);
    node* subtree2=makeTree3("subtree2",leaf5,leaf6,leaf7);
    node* subtree3=makeTree3("subtree3",leaf8,leaf9,leaf10);
    node* root=makeTree2("root",subtree1,subtree2);
    printtree(root);
    printf("-----------------------------------------------------");
    addChild(root,subtree3);
    printtree(root);
    
    return 0;


}

node *initNodes(char *token,node *node1,node* node2,node* node3,node* node4,node* node5,node* node6){
node *newnode = (node*)malloc(sizeof(node)); 
char *newstr = (char*)malloc(sizeof(token) + 1); 
strcpy(newstr,token);
newnode->node1 = node1;
newnode->node2 = node2;
newnode->node3 = node3;
newnode->node4 = node4;
newnode->node5 = node5;
newnode->node6 = node6;
newnode->token = newstr; 
return newnode; 
}
node *makenode(char *token) {
return initNodes(token,NULL,NULL,NULL,NULL,NULL,NULL);
}
node *makeTree6(char *token,node *node1,node* node2,node* node3,node* node4,node* node5,node* node6){
    return initNodes(token,node1,node2,node3,node4,node5,node6);
}
node *makeTree5(char *token,node *node1,node* node2,node* node3,node* node4,node* node5){
    return initNodes(token,node1,node2,node3,node4,node5,NULL);

}
node *makeTree4(char *token,node *node1,node* node2,node* node3,node* node4){
    return initNodes(token,node1,node2,node3,node4,NULL,NULL);

}
node *makeTree3(char *token,node *node1,node* node2,node* node3){
    return initNodes(token,node1,node2,node3,NULL,NULL,NULL);

}
node *makeTree2(char *token,node *node1,node* node2){
    return initNodes(token,node1,node2,NULL,NULL,NULL,NULL);

}
node *makeTree1(char *token,node *node1){
    return initNodes(token,node1,NULL,NULL,NULL,NULL,NULL);

}
void addChild(node *parent,node *child){
    if(parent->node1==NULL){
        parent->node1=child;
        return;
    }
    if(parent->node2==NULL){
        parent->node2=child;
        return;
    }
    if(parent->node3==NULL){
        parent->node3=child;
        return;}
    if(parent->node4==NULL){
        parent->node4=child; 
        return;
        }                      
    if(parent->node5==NULL){
        parent->node5=child;
        return;
         }   
    if(parent->node6==NULL){

        parent->node6=child;
        return;
        }
}





void printtree(node *tree) {
printf("%s\n", tree->token);
 if(tree->node1)
printtree(tree->node1); 
if(tree->node2)
printtree(tree->node2); 
if(tree->node3)
printtree(tree->node3); 
if(tree->node4)
printtree(tree->node4); 
if(tree->node5)
printtree(tree->node5); 
if(tree->node6)
printtree(tree->node6); 
}