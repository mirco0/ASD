#include <entry.h>

int null_entry(entry entry_){
  return entry_.key == 0 && entry_.data == 0;
}
