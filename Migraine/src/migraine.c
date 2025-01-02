#include <FiniteStateMachine.h>
#include <migraine.h>

// State enumeration order must match the order of state
// method entries in the state map
enum States
{
    ST_IDLE,
    ST_PRO_DROME,
    ST_AURA,
    ST_ATTACK,
    ST_POST_DROME
};

// State machine state functions
STATE_DECLARE(Idle, NoEventData)
STATE_DECLARE(ProDrome, NoEventData)
STATE_DECLARE(Aura, NoEventData)
STATE_DECLARE(Attack, NoEventData)
STATE_DECLARE(PostDrome, NoEventData)

// State map to define state function order
BEGIN_STATE_MAP(Migraine)
    STATE_MAP_ENTRY(ST_Idle)
    STATE_MAP_ENTRY(ST_ProDrome)
    STATE_MAP_ENTRY(ST_Aura)
    STATE_MAP_ENTRY(ST_Attack)
    STATE_MAP_ENTRY(ST_PostDrome)
END_STATE_MAP(Migraine)


