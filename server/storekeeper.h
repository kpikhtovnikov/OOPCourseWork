#ifndef TCASHBOX_H
#define TCASHBOX_H

#include "worker.h"

class TStoreKeeper
{
    int number;
    int max_queue = 10;
    TWorker *queue;
    int queue_len;
public:
    TStoreKeeper();
    void add_in_queue();
    void delete_from_queue();
    int get_len_queue();
    void delete_queue();
    int length_max_queue();
};

#endif // TCASHBOX_H
