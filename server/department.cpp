#include "department.h"
#include "string.h"
#include <random>
#include <time.h>

TDepartment::TDepartment()
{
    storekeepers_count = 1;
    queues_list = new TStoreKeeper[storekeepers_count];
}

void TDepartment::change_length_queues_list(int number, int queue)
{
    input_queue = queue;
    if (input_queue<queues_list->length_max_queue()) {
    int min_len = number>storekeepers_count?storekeepers_count:number;

    TStoreKeeper *tmp = new TStoreKeeper [number];

    for (int i = 0 ;i < min_len; i++)
        tmp[i] = queues_list[i];
    for (int i = min_len; i < storekeepers_count; i++)
        queues_list[i].delete_queue();
    delete [] queues_list;
    storekeepers_count = number;
    queues_list = tmp;
    }
}

void TDepartment::add_new_worker()
{
    if (storekeepers_count == 1)
        queues_list[0].add_in_queue();
    else
    {
        for (int i = 0; i < storekeepers_count; i++)
        {
            if (queues_list[i].get_len_queue() == 0)
            {
                srand(time(0));
                queues_list[(rand() % storekeepers_count + 1) - 1].add_in_queue();
                return;
            }
        }
    }
}


void TDepartment::delete_worker()
{
    for (int i = 0; i < storekeepers_count; i++)
    {
        if (queues_list[i].get_len_queue() > 0)
            queues_list[i].delete_from_queue();
    }
}
int TDepartment::get_quantity_workers()
{
    return storekeepers_count;
}

TStoreKeeper* TDepartment::get_queues_list()
{
    return queues_list;
}
