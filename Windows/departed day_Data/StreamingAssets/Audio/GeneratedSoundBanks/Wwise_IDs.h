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
        static const AkUniqueID ADPOST = 425528452U;
        static const AkUniqueID BGM = 412724365U;
        static const AkUniqueID BGM_FINAL = 3295294912U;
        static const AkUniqueID COMPON = 2934282407U;
        static const AkUniqueID DOORCLOSED = 1697683977U;
        static const AkUniqueID DOOROPEN = 1404805401U;
        static const AkUniqueID ENTER = 2368844905U;
        static const AkUniqueID FOOT_PLAYER = 1894362767U;
        static const AkUniqueID OCEAN = 3802555985U;
        static const AkUniqueID PRINTER = 1425580747U;
        static const AkUniqueID RECIPTLINE = 3362966356U;
        static const AkUniqueID RETURNLINE = 1988112949U;
        static const AkUniqueID SENDLINE = 4291330065U;
        static const AkUniqueID TICKET = 2902614501U;
        static const AkUniqueID TRAIN = 3412057565U;
        static const AkUniqueID TRAINIDLE = 1639368407U;
        static const AkUniqueID TRAINSTART = 533153887U;
        static const AkUniqueID TYPE = 2970581085U;
        static const AkUniqueID TYPESHOT = 299065245U;
    } // namespace EVENTS

    namespace STATES
    {
        namespace AMBIENTPLAY
        {
            static const AkUniqueID GROUP = 2459163061U;

            namespace STATE
            {
                static const AkUniqueID OFF = 930712164U;
                static const AkUniqueID ON = 1651971902U;
            } // namespace STATE
        } // namespace AMBIENTPLAY

        namespace TRAINIDLEPLAY
        {
            static const AkUniqueID GROUP = 2796187137U;

            namespace STATE
            {
                static const AkUniqueID IDLESTOP = 1373647823U;
                static const AkUniqueID IDLING = 1750148546U;
            } // namespace STATE
        } // namespace TRAINIDLEPLAY

    } // namespace STATES

    namespace SWITCHES
    {
        namespace MATERIAL
        {
            static const AkUniqueID GROUP = 3865314626U;

            namespace SWITCH
            {
                static const AkUniqueID CONCRETE = 841620460U;
                static const AkUniqueID CONCRETE_FAST = 175143897U;
                static const AkUniqueID TRAININSIDE = 1062003645U;
                static const AkUniqueID WOOD = 2058049674U;
                static const AkUniqueID WOOD_FAST = 2373377839U;
            } // namespace SWITCH
        } // namespace MATERIAL

        namespace SCENE
        {
            static const AkUniqueID GROUP = 1926883983U;

            namespace SWITCH
            {
                static const AkUniqueID CREGIT = 448493529U;
                static const AkUniqueID END = 529726532U;
                static const AkUniqueID LOOP = 691006007U;
                static const AkUniqueID OP = 1651971872U;
                static const AkUniqueID TRAININSIDE = 1062003645U;
            } // namespace SWITCH
        } // namespace SCENE

    } // namespace SWITCHES

    namespace BANKS
    {
        static const AkUniqueID INIT = 1355168291U;
        static const AkUniqueID FINAL = 565529991U;
        static const AkUniqueID GENERAL = 133642231U;
        static const AkUniqueID KEEP = 2685756106U;
        static const AkUniqueID TRAININSIDE = 1062003645U;
    } // namespace BANKS

    namespace BUSSES
    {
        static const AkUniqueID AMBIENCE = 85412153U;
        static const AkUniqueID MAIN_THEME = 2557777556U;
        static const AkUniqueID MASTER_AUDIO_BUS = 3803692087U;
        static const AkUniqueID MOTION = 2012559111U;
        static const AkUniqueID MUSIC = 3991942870U;
        static const AkUniqueID SE = 1584861537U;
        static const AkUniqueID SFX = 393239870U;
        static const AkUniqueID TRAIN = 3412057565U;
    } // namespace BUSSES

    namespace AUX_BUSSES
    {
        static const AkUniqueID LOWPASS = 1685747766U;
    } // namespace AUX_BUSSES

    namespace AUDIO_DEVICES
    {
        static const AkUniqueID NO_OUTPUT = 2317455096U;
        static const AkUniqueID SYSTEM = 3859886410U;
    } // namespace AUDIO_DEVICES

}// namespace AK

#endif // __WWISE_IDS_H__
