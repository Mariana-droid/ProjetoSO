#ifndef FS_H
#define FS_H
#include "state.h"

void init_fs();
void destroy_fs();
int is_dir_empty(DirEntry *dirEntries);
int create(char *name, type nodeType);
int delete(char *name);
int lookup(char* name);
int lookup_path(char *name,int *array);
void path_unlocker(int *array,int n); 
void print_tecnicofs_tree(FILE *fp);

#endif /* FS_H */
