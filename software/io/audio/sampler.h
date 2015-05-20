#ifndef SAMPLER_H
#define SAMPLER_H

#include "event.h"
#include "poll.h"
#include "menu.h"
#include "iomap.h"

#define VOICES              8
#define BYTES_PER_VOICE     32


#define SAMPLER_VERSION        *((volatile uint8_t *) (SAMPLER_BASE + 1))
#define VOICE_CONTROL(x)       *((volatile uint8_t *) (SAMPLER_BASE + (x*BYTES_PER_VOICE) + 0x00))
#define VOICE_VOLUME(x)        *((volatile uint8_t *) (SAMPLER_BASE + (x*BYTES_PER_VOICE) + 0x01))
#define VOICE_PAN(x)           *((volatile uint8_t *) (SAMPLER_BASE + (x*BYTES_PER_VOICE) + 0x02))
#define VOICE_START(x)         *((volatile uint32_t *)(SAMPLER_BASE + (x*BYTES_PER_VOICE) + 0x04))
#define VOICE_LENGTH(x)        *((volatile uint32_t *)(SAMPLER_BASE + (x*BYTES_PER_VOICE) + 0x08))
#define VOICE_REPEAT_A(x)      *((volatile uint32_t *)(SAMPLER_BASE + (x*BYTES_PER_VOICE) + 0x10))
#define VOICE_REPEAT_B(x)      *((volatile uint32_t *)(SAMPLER_BASE + (x*BYTES_PER_VOICE) + 0x14))
#define VOICE_RATE(x)          *((volatile uint32_t *)(SAMPLER_BASE + (x*BYTES_PER_VOICE) + 0x0C))
#define VOICE_RATE_H(x)        *((volatile uint16_t *)(SAMPLER_BASE + (x*BYTES_PER_VOICE) + 0x0E))
#define VOICE_RATE_L(x)        *((volatile uint16_t *)(SAMPLER_BASE + (x*BYTES_PER_VOICE) + 0x0F))

#define VOICE_CTRL_ENABLE   0x01
#define VOICE_CTRL_REPEAT   0x02
#define VOICE_CTRL_IRQ      0x04
#define VOICE_CTRL_8BIT     0x00
#define VOICE_CTRL_16BIT    0x10

#define MENU_SAMP_PLAY8B  0x8301
#define MENU_SAMP_PLAY16B 0x8302

class Sampler : public ObjectWithMenu
{
public:
    Sampler();
    ~Sampler();

    void poll(Event &e);
	int  fetch_task_items(IndexedList<CachedTreeNode*> &item_list);
};

#endif
