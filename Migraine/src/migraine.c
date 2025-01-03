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

EVENT_DEFINE(MGR_Stress, MigraineData)
{
    BEGIN_TRANSITION_MAP                    // Current State
        TRANSITION_MAP_ENTRY(ST_PRO_DROME)  // ST_Idle
        TRANSITION_MAP_ENTRY(ST_PRO_DROME)  // ST_ProDrome
        TRANSITION_MAP_ENTRY(ST_ATTACK)     // ST_Aura
        TRANSITION_MAP_ENTRY(ST_ATTACK)     // ST_Attack
        TRANSITION_MAP_ENTRY(ST_ATTACK)     // ST_PostDrome
    END_TRANSITION_MAP(Migraine, pEventData)
}

EVENT_DEFINE(MGR_FoodTrigger, MigraineData)
{
    BEGIN_TRANSITION_MAP                    // Current State
        TRANSITION_MAP_ENTRY(ST_PRO_DROME)  // ST_Idle
        TRANSITION_MAP_ENTRY(ST_PRO_DROME)  // ST_ProDrome
        TRANSITION_MAP_ENTRY(ST_ATTACK)     // ST_Aura
        TRANSITION_MAP_ENTRY(ST_ATTACK)     // ST_Attack
        TRANSITION_MAP_ENTRY(ST_ATTACK)     // ST_PostDrome
    END_TRANSITION_MAP(Migraine, pEventData)
}

EVENT_DEFINE(MGR_RelaxAndRest, MigraineData)
{
    BEGIN_TRANSITION_MAP                        // Current State
        TRANSITION_MAP_ENTRY(ST_IDLE)           // ST_Idle
        TRANSITION_MAP_ENTRY(ST_IDLE)           // ST_ProDrome
        TRANSITION_MAP_ENTRY(ST_POST_DROME)     // ST_Aura
        TRANSITION_MAP_ENTRY(ST_POST_DROME)     // ST_Attack
        TRANSITION_MAP_ENTRY(ST_IDLE)           // ST_PostDrome
    END_TRANSITION_MAP(Migraine, pEventData)
}

STATE_DEFINE(Idle, NoEventData)
{

}

STATE_DEFINE(ProDrome, NoEventData){}
STATE_DEFINE(Aura, NoEventData){}
STATE_DEFINE(Attack, NoEventData){}
STATE_DEFINE(PostDrome, NoEventData){}
