#include"symbol.h"
#include <string.h>
void initParas(symbol entry,char* id,char* kind ,char* type,bool isFunc){
    entry.id = id;
    entry.kind = kind;
    entry.type = type;
    entry.isFunc = isFunc;
}
struct symbol *initSymbol(char* id,char* kind ,char* type,bool  isFunc){
    
    symbol* temp = (symbol*)malloc(sizeof(symbol);
    symbol temp1 = &temp;
    initParas(temp1, id,kind,type,isFunc);
   /* if(temp1.isFunc == 1 )
    {
        temp1.parameters = (symbol*)malloc(sizeof(symbol);
        initParas(&temp1.parameters)

    }
    */


}  
void freeSymbol(symbol symbol)
{
    symbol.parameters = NULL;
}

bool compareSymbol(symbol s1,symbol s2)
{
    if(strcmp(s1.id,s2.id) && strcmp(s1.type,s2.type))
    {
        return 1; 
    }
   
   return 0 ;    
}
bool compareSymbol_redeclatrion(symbol s1,symbol s2)
{
    if(strcmp(s1.type,s2.type))
    {
        return 0; 
    }
   
   return 1;    
}








