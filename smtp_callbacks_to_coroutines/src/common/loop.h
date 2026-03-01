#pragma once
#include <stdint.h>

#define LOOP_CAPACITY 32

typedef void (*loop_fn)(void* user);

typedef struct loop_item_t
{
    loop_fn fn;
    void* user;
}loop_item_t;

typedef struct loop_t
{
    loop_item_t loop_item[LOOP_CAPACITY];
    uint32_t    head;
    uint32_t    tail;
    uint32_t    count;
    bool        stop_requested;
}loop_t;

loop_t* loop_init(loop_t* loop);
int loop_post(loop_t* loop, loop_fn fn, void* user);
void loop_run(loop_t* loop);
void loop_stop(loop_t* loop);