typedef enum { 0, 1 } bool; 
#include "symbol.h"
typedef struct symbolList {
symbol * entry;
symbolList *parent;
symbolList *next;


} symbolList;
struct symbolList* initSymbolList(symbol*);
void insert_symbol(symbol* , symbolList*);
bool find_symbol(symbol* , symbolList*);
void free_symbolslist(symbolList*);kjjkjhllkjh

void delete(symbol* , symbolList*);
//void print_symbolslist()
bool find_redelcatrion(symbol* , symbolList*)
