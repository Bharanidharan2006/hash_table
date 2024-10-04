typedef struct {
    char* key;
    char* value;
}ht_item;

typedef struct {
    int size;
    int count;
    ht_item** items;
}ht_table;

void delete_ht_item(ht_item* );
void delete_ht(ht_table *);
static ht_item* new_ht_item(const char* ,const char*);
ht_table* new_ht();