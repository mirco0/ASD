#ifndef ENTRY_H
#define ENTRY_H

typedef struct entry {
  char data;
  int key; 
} entry;

int null_entry(entry);
#endif
