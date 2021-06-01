#ifndef TDATA_H
#define TDATA_H

#include "storekeeper.h"

class TDepartment
{
    int storekeepers_count;
    TStoreKeeper *queues_list;
    int input_queue;

public:
    TDepartment();
    void change_length_queues_list(int,int);
    void add_new_worker();
    void delete_worker();
    int get_quantity_workers();
    TStoreKeeper* get_queues_list();
};

#endif // TDATA_H
