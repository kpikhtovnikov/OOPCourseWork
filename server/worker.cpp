#include "worker.h"

TWorker::TWorker()
{

}

TWorker::TWorker(int num)
{
    id = num;
}

int TWorker::get_id_worker()
{
    return id;
}
