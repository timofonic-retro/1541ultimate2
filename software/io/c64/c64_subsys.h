/*
 * c64_subsys.h
 *
 *  Created on: Jul 16, 2015
 *      Author: Gideon
 */

#ifndef IO_C64_C64_SUBSYS_H_
#define IO_C64_C64_SUBSYS_H_

#include "subsys.h"
#include "menu.h"
#include "filemanager.h"

#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"


class C64_Subsys : public SubSystem, ObjectWithMenu
{
    TaskHandle_t taskHandle;
    FileManager *fm;
    C64 *c64;
    static void poll(void *a);

    /* Subsystem */
	const char *identify(void) { return "C64 Machine"; }
	int executeCommand(SubsysCommand *cmd);

    /* Object With Menu */
    int  fetch_task_items(Path *p, IndexedList<Action *> &item_list);

    /* Others */
    int  dma_load(File *f, const uint8_t *buffer, const int bufferSize,
    		const char *name, uint8_t run_mode, uint16_t reloc=0);
    int  dma_load_buffer(uint8_t prg_buffer, uint8_t run_mode, uint16_t reloc=0);
    int  dma_load_raw(File *f);
    int  dma_load_raw_buffer(uint16_t offset, const uint8_t *buffer, int length);

    int  load_file_dma(File *f, uint16_t reloc);
    int  load_buffer_dma(const uint8_t *buffer, const int bufferSize, uint16_t reloc);
    bool write_vic_state(File *f);
    void restoreCart(void);

public:
	C64_Subsys(C64 *machine);
	virtual ~C64_Subsys();

    friend class FileTypeSID; // sid load does some tricks
};

extern C64_Subsys *c64_subsys;

#endif /* IO_C64_C64_SUBSYS_H_ */
