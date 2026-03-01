#include "loop.h"

void loop_init(loop_t* loop)
{
    if(loop == NULL)
    {
        return;
    }

    loop->tail  = 0;
    loop->head  = 0;
    loop->count = 0;
    loop->stop_requested = false;
}

int loop_post(loop_t* loop, loop_fn fn, void* user)
{
    if(loop == NULL || fn == NULL)
    {
        return -1;
    }

    if(stop_requested == true)
    {
        return -2;
    }

    if(loop->count == LOOP_CAPACITY)
    {
        return -3;
    }

    loop->loop_item[loop->tail].fn = fn;
    loop->loop_item[loop->tail].user = user;

    loop->tail == (loop->tail++) % LOOP_CAPACITY;
    loop->count++;

    return 0;
}

void loop_run(loop_t* loop)
{
    if(loop == NULL)
    {
        return -1;
    }

    while(loop->stop_requested == false)
    {
        if(loop->count == 0)
        {
            return;
        }
        loo
    }
}
