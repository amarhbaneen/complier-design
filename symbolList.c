#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include "symbolList.h"
#include "symbol.h"

struct symbolList* initSymbolList(symbol* symbol)
{
        symbolList* temp = (symbolList*)malloc(sizeof(symbolList);
        temp->entry = symbol;
        temp->next = NULL;
        temp->parent =NULL;

}
struct symbol* find_symbol(symbol* symbol, symbolList* symbolList)
{
    if(compareSymbol(&symbolList->entry , &symbol))
    {
        return symbolList->entry;
    }
    
    while(symbolList->next != NULL)
    {
        symbolList = symbolList->next;
        if(compareSymbol(&symbolList->entry , &symbol))
        {
            return symbolList->entry;
        }
    }
   
   return NULL;

}

bool find_redelcatrion(symbol* symbol , symbolList* a)
{
 
    if(compareSymbol_redeclatrion(&symbolList->entry , &symbol))
    {
        return 1;
    }
    
    while(symbolList->next != NULL)
    {
        symbolList = symbolList->next;
        if(compareSymbol_redeclatrion(&symbolList->entry , &symbol))
        {
            return 1;
        }
    }
   
    return 0;

  
}
void delete(symbol* newsymbol,symbol* oldsymbol ){

    oldsymbol->kind = newsymbol->kind;


}

void insert_symbol(symbol* symbol , symbolList* symbolList1)
{
    if(find_symbol(symbol,symbolList) != NULL)
    {
       symbolList1->next = (symbolList*)malloc(sizeof(symbolList);
       symbolList1->next->entry = symbol;
     
    }
    else
    {
       if(!find_redelcatrion(symbol,symbolList1))
       {
           printf( "%s already reladrted with the same type " , symbol->id);
           
       }
       else
       {
           delete(find_symbol(symbol,symbolList1),symbol);
           
       }
       
    }
    



}






