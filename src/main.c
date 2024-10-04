#include <stdio.h>
#include "hash_table.h"

int main(void){
    ht_table* hash_table = new_ht();
    delete_ht(hash_table);
    return 0;
}