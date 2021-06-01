#ifndef TEMPLOYEE_H
#define TEMPLOYEE_H


class TWorker
{
    int id;
public:
    TWorker* next_worker;
    TWorker* prev_worker;
    TWorker();
    TWorker(int);
    int get_id_worker();
};

#endif // TEMPLOYEE_H
