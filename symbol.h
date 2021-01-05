typedef enum { 0, 1 } bool; 
typedef struct symbol {
char * id;
char * kind,type;
int isFunc;
int paraNum;

struct symbol *parameters;

} symbol;

struct symbol *initSymbol(char* id,char* kind  ,char* type,bool isFunc);    
void initParas(symbol entry,char* id,char* kind ,char* type,bool  isFunc);
//void printSymbol(symbol symbol);
void freeSymbol(symbol symbol);
bool compareSymbol(symbol s1,symbol s2);
 //bool checkId(symbol s,chaar* id); // no need for now 

 bool compareSymbol_redeclatrion(symbol s1,symbol s2);
 
