#ifndef __LIBRARIAN_H_
#define __LIBRARIAN_H_
#include <stdint.h>

typedef struct lib_s lib_t;
typedef struct bridge_s bridge_t;
typedef struct library_s library_t;
typedef struct kh_mapsymbols_s kh_mapsymbols_t;

lib_t *NewLibrarian();
void FreeLibrarian(lib_t **maplib);

kh_mapsymbols_t* GetMapSymbol(lib_t* maplib);
int AddNeededLib(lib_t* maplib, const char* path); // 0=success, 1=error
uintptr_t FindGlobalSymbol(lib_t *maplib, const char* name);
int GetGlobalSymbolStartEnd(lib_t *maplib, const char* name, uintptr_t* start, uintptr_t* end);

void AddSymbol(kh_mapsymbols_t *mapsymbols, const char* name, uintptr_t addr, uint32_t sz);
uintptr_t FindSymbol(kh_mapsymbols_t *mapsymbols, const char* name);
int GetSymbolStartEnd(kh_mapsymbols_t* mapsymbols, const char* name, uintptr_t* start, uintptr_t* end);

#endif //__LIBRARIAN_H_