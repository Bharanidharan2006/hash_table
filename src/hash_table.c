#include "hash_table.h"
#include <stdlib.h>
#include <string.h>

static ht_item* new_ht_item(const char* key, const char* value){
    ht_item* i = (ht_item* )malloc(sizeof(ht_item));
    i->key = strdup(key);
    i->value = strdup(value);
    return i;
}

ht_table* new_ht(){
    ht_table* ht = malloc(sizeof(ht_table));
    ht->size = 53;
    ht->count = 0;
    ht->items = calloc((size_t)ht->size, sizeof(ht_item));

    return ht;
}

void delete_ht_item(ht_item* i){
    free(i->key);
    free(i->value);
    free(i);
}

void delete_ht(ht_table* ht){
    for(int i = 0; i < ht->size; i++){
        ht_item* item = ht->items[i];
        if(item != NULL){
            delete_ht_item(item);
        }
    }
    free(ht->items);
    free(ht);
}
