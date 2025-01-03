#ifndef _MIGRAINE_H
#define _MIGRAINE_H

#ifndef NULL
#define NULL    ((void *)0)
#endif

typedef Migraine;
typedef MigraineData;

EVENT_DECLARE(MGR_Stress, MigraineData)
EVENT_DECLARE(MGR_FoodTrigger, MigraineData)
EVENT_DECLARE(MGR_RelaxAndRest, MigraineData)

#endif