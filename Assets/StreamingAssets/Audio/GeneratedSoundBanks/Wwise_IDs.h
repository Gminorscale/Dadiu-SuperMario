/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Audiokinetic Wwise generated include file. Do not edit.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __WWISE_IDS_H__
#define __WWISE_IDS_H__

#include <AK/SoundEngine/Common/AkTypes.h>

namespace AK
{
    namespace EVENTS
    {
        static const AkUniqueID BRICKBREAK = 951086285U;
        static const AkUniqueID COINPICKUP = 2752428610U;
        static const AkUniqueID MARIODEAD = 1648573193U;
        static const AkUniqueID MUS_LEVEL101 = 2723243971U;
        static const AkUniqueID MUS_LEVEL102 = 2723243968U;
        static const AkUniqueID MUS_PLAYMAINPLAYLIST = 2115743526U;
        static const AkUniqueID PLAY_DB_SYNTH_2D_LP = 2517391619U;
        static const AkUniqueID PLAY_DB_SYNTH_2D_OS = 2534169461U;
        static const AkUniqueID PLAY_DB_SYNTH_2D_OS_P100 = 2834276857U;
        static const AkUniqueID PLAY_DB_SYNTH_2D_OS_P200 = 2935089634U;
        static const AkUniqueID PLAY_DB_SYNTH_2D_OS_P300 = 3035902443U;
        static const AkUniqueID PLAY_DB_SYNTH_2D_OS_P400 = 3136715220U;
        static const AkUniqueID PLAY_DB_SYNTH_200HZ_2D_LP = 318505690U;
        static const AkUniqueID PLAY_DB_SYNTH_400HZ_3D_LP = 3266186833U;
        static const AkUniqueID PLAY_FLAGPOLE = 3011457342U;
        static const AkUniqueID PLAY_MARIO_FOOTSTEPS = 3279359330U;
        static const AkUniqueID PLAY_MARIO_JUMP = 2044119629U;
        static const AkUniqueID PLAY_MARIO_JUMP_AIR = 264438660U;
        static const AkUniqueID PLAY_MARIO_LANDING = 2951688446U;
        static const AkUniqueID PLAY_MARIO_RUNNING = 2903442078U;
        static const AkUniqueID PLAY_MARIO_UPGRADE_MUSHROOM = 2083511724U;
        static const AkUniqueID PLAY_PIPE_IDLE = 653287783U;
    } // namespace EVENTS

    namespace STATES
    {
        namespace LEVELS
        {
            static const AkUniqueID GROUP = 2678230316U;

            namespace STATE
            {
                static const AkUniqueID LEVEL_101 = 1370465240U;
                static const AkUniqueID LEVEL_102 = 1370465243U;
                static const AkUniqueID LEVEL_103 = 1370465242U;
                static const AkUniqueID LEVEL_104 = 1370465245U;
                static const AkUniqueID LEVEL_DEATH = 3444166614U;
                static const AkUniqueID LEVEL_MENU = 3281625917U;
                static const AkUniqueID NONE = 748895195U;
            } // namespace STATE
        } // namespace LEVELS

        namespace MARIOLIVES
        {
            static const AkUniqueID GROUP = 2055629040U;

            namespace STATE
            {
                static const AkUniqueID MARIOLIVE_00 = 3637637980U;
                static const AkUniqueID MARIOLIVE_01 = 3637637981U;
                static const AkUniqueID MARIOLIVE_02 = 3637637982U;
                static const AkUniqueID MARIOLIVE_03 = 3637637983U;
                static const AkUniqueID NONE = 748895195U;
            } // namespace STATE
        } // namespace MARIOLIVES

        namespace MARIORUNNING
        {
            static const AkUniqueID GROUP = 3290740104U;

            namespace STATE
            {
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID RUNNING = 3863236874U;
                static const AkUniqueID START = 1281810935U;
            } // namespace STATE
        } // namespace MARIORUNNING

        namespace MARIOSIZE
        {
            static const AkUniqueID GROUP = 866639936U;

            namespace STATE
            {
                static const AkUniqueID MARIOSIZEBIG = 1915863002U;
                static const AkUniqueID MARIOSIZESMALL = 2458678061U;
                static const AkUniqueID NONE = 748895195U;
            } // namespace STATE
        } // namespace MARIOSIZE

    } // namespace STATES

    namespace SWITCHES
    {
        namespace ELEVATION
        {
            static const AkUniqueID GROUP = 2141048674U;

            namespace SWITCH
            {
                static const AkUniqueID HIGHUPINAIR = 3301294737U;
                static const AkUniqueID NOTHIGHUP = 3210465691U;
            } // namespace SWITCH
        } // namespace ELEVATION

        namespace MARIOCLOSENESSTOPIPE
        {
            static const AkUniqueID GROUP = 2245053687U;

            namespace SWITCH
            {
                static const AkUniqueID RUNNING = 3863236874U;
                static const AkUniqueID WALKING = 340271938U;
            } // namespace SWITCH
        } // namespace MARIOCLOSENESSTOPIPE

        namespace SWITCHGROUP
        {
            static const AkUniqueID GROUP = 206060290U;

            namespace SWITCH
            {
                static const AkUniqueID DB_SWITCH_ONE = 1220551583U;
                static const AkUniqueID DB_SWITCH_TWO = 833827773U;
            } // namespace SWITCH
        } // namespace SWITCHGROUP

    } // namespace SWITCHES

    namespace GAME_PARAMETERS
    {
        static const AkUniqueID COINPICKUP = 2752428610U;
        static const AkUniqueID DISTANCE_GOOMBA = 4216763010U;
        static const AkUniqueID DISTANCE_KOOPA = 3318567297U;
        static const AkUniqueID MARIO_DISTANCETOBUSH = 2077347574U;
        static const AkUniqueID MARIO_JUMP_AIR = 710739923U;
        static const AkUniqueID MARIODISTANCETOFLAGPOLE = 2489148713U;
        static const AkUniqueID MARIODISTANCETOPIPE = 4279643429U;
        static const AkUniqueID MARIOJUMPAIR = 2252070993U;
        static const AkUniqueID MARIOSPEED = 2335757700U;
        static const AkUniqueID MARIOYAXIS = 3827456195U;
        static const AkUniqueID TIMELEFT = 2486342905U;
        static const AkUniqueID TIMEOFDAY = 3729505769U;
        static const AkUniqueID WIND_INTENSITY = 855296609U;
    } // namespace GAME_PARAMETERS

    namespace BANKS
    {
        static const AkUniqueID INIT = 1355168291U;
        static const AkUniqueID BNK_MAIN = 1020463552U;
    } // namespace BANKS

    namespace BUSSES
    {
        static const AkUniqueID GOOMBA = 4285895376U;
        static const AkUniqueID KOOPA = 806331687U;
        static const AkUniqueID MASTER_AUDIO_BUS = 3803692087U;
        static const AkUniqueID MASTER_AUDIO_BUS_01 = 4267419003U;
        static const AkUniqueID MUSIC = 3991942870U;
        static const AkUniqueID MUSIC_BUS = 2680856269U;
        static const AkUniqueID NEW_MASTER_BUS = 3193046343U;
    } // namespace BUSSES

    namespace AUDIO_DEVICES
    {
        static const AkUniqueID NO_OUTPUT = 2317455096U;
        static const AkUniqueID SYSTEM = 3859886410U;
    } // namespace AUDIO_DEVICES

}// namespace AK

#endif // __WWISE_IDS_H__
