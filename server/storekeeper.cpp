#include "storekeeper.h"

TStoreKeeper::TStoreKeeper()
{
   queue_len = 0;
   queue = nullptr;
}

void TStoreKeeper::add_in_queue()
{
    TWorker *newstr1 = new TWorker;
    TWorker *current_worker = queue;
    if (queue_len == 0)
    {
        queue = newstr1;
        queue->next_worker = nullptr;
    }
    else
    {
        for (int i = 0; i < queue_len; i++)
        {
            if (i == queue_len - 1)
            {
                current_worker->next_worker = newstr1;
                newstr1->prev_worker = current_worker;
                newstr1->next_worker = nullptr;
            }
            else
            {
                current_worker = current_worker->next_worker;
            }
        }
    }
    queue_len++;
}

void TStoreKeeper::delete_from_queue()
{
    TWorker *d = queue;

    queue = d->next_worker;
    delete d;
    queue_len--;
}

void TStoreKeeper::delete_queue()
{
    TWorker* d = queue;
    TWorker* save = d;

    while (save != nullptr)
    {
        d = d->next_worker;
        delete save;
        save = d;
    }
    queue = nullptr;
    queue_len = 0;
}

int TStoreKeeper::get_len_queue()
{
    return queue_len;
}

int TStoreKeeper::length_max_queue()
{
    return max_queue;
}
