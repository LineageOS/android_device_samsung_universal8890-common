/*
 * Copyright (C) 2018 The LineageOS Project
 * SPDX-License-Identifier: Apache-2.0
 */

#include <media/AudioSystem.h>
#include <cutils/properties.h>
#include <android-base/file.h>

int main(int, char**)
{
    android::AudioSystem::setParameters(0, android::String8("support_output_device=3"));
    android::AudioSystem::setParameters(0, android::String8("support_input_device=-2004876860"));
    android::AudioSystem::setParameters(0, android::String8("ril_state_connected=1"));
    android::AudioSystem::setParameters(0, android::String8("FixedRingVol=0.0354813375"));
    android::AudioSystem::setParameters(0, android::String8("FixedRingVolBt=0.1122018397"));
    android::AudioSystem::setParameters(0, android::String8("mCameraForced="));
    android::AudioSystem::setParameters(0, android::String8("toMono=0"));
    android::AudioSystem::setParameters(0, android::String8("voice_assistant=0"));
    android::AudioSystem::setParameters(0, android::String8("nb_quality=off"));
    android::AudioSystem::setParameters(0, android::String8("bwe=off"));
    android::AudioSystem::setParameters(0, android::String8("sound_balance=50"));
    android::AudioSystem::setParameters(0, android::String8("RefreshModem="));
    android::AudioSystem::setParameters(0, android::String8("CallState=514"));

    return 0;
}
