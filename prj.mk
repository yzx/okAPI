-include _.mk
TOP_BASE= ..
BUILD_BASE= $(TOP_BASE)/makeSURE
NAME?= okAPI
#CONFIG?= Release

include $(BUILD_BASE)/env.mk


include $(BUILD_BASE)/def.mk
include $(BUILD_BASE)/rule.mk
