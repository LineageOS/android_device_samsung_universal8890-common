# Copyright (C) 2018 The LineageOS Project
# SPDX-License-Identifier: Apache-2.0

LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES:= audioloader.cpp

LOCAL_SHARED_LIBRARIES := \
    libutils \
    libaudioclient \
    libcutils \
    libbase

LOCAL_MODULE:= audioloader
LOCAL_MODULE_TAGS:= optional
LOCAL_VENDOR_MODULE := true

LOCAL_INIT_RC := audioloader.rc

include $(BUILD_EXECUTABLE)
