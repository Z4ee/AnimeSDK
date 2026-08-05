#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/miHoYoEmotion/FrameShapeElement_TYPE.h"

namespace System { class String; }
namespace miHoYoEmotion { class SequenceFrameBakeData_FrameBindingIndex; }
namespace miHoYoEmotion { class SequenceFrameBakeData_FrameKey; }

#define MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_FRAMEBINDING_APPLY_OFFSET UNITYSDK_OFFSET(0x1D049E40)
#define MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_FRAMEBINDING_GETBINDINGBYKEY_OFFSET UNITYSDK_OFFSET(0x1D049EC0)
#define MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_FRAMEBINDING_RESETFRAME_OFFSET UNITYSDK_OFFSET(0x1D049650)
#define MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_FRAMEBINDING_UPDATEFRAME_OFFSET UNITYSDK_OFFSET(0x1D049BD0)
#define MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_FRAMEBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D04F960)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int SequenceFrameBakeData_FrameBinding_TypeDefinitionIndex = 40000;

	class SequenceFrameBakeData_FrameBinding : public ::System::Object
	{
	public:
		::miHoYoEmotion::FrameShapeElement_TYPE bindingType; // 0x10
		::Il2CppArray<::miHoYoEmotion::SequenceFrameBakeData_FrameKey*>* bindingFrames; // 0x18
		::Il2CppArray<::miHoYoEmotion::SequenceFrameBakeData_FrameBindingIndex*>* bindingIndexes; // 0x20
		::System::String* preBindingName; // 0x28
		::System::Single _timeCnt; // 0x30
		::System::Int32 _currFrameCnt; // 0x34
		::System::Int32 _nextFrameCnt; // 0x38
		::System::Boolean _needApply; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_FRAMEBINDING__CTOR_OFFSET))(this);
		}

		::System::Void ResetFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_FRAMEBINDING_RESETFRAME_OFFSET))(this);
		}

		::System::Void UpdateFrame(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_FRAMEBINDING_UPDATEFRAME_OFFSET))(this, deltaTime);
		}

		::miHoYoEmotion::SequenceFrameBakeData_FrameKey* Apply()
		{
			return ((::miHoYoEmotion::SequenceFrameBakeData_FrameKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_FRAMEBINDING_APPLY_OFFSET))(this);
		}

		::miHoYoEmotion::SequenceFrameBakeData_FrameBindingIndex* GetBindingByKey(::miHoYoEmotion::SequenceFrameBakeData_FrameKey* key)
		{
			return ((::miHoYoEmotion::SequenceFrameBakeData_FrameBindingIndex*(*)(::PVOID, ::miHoYoEmotion::SequenceFrameBakeData_FrameKey*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_FRAMEBINDING_GETBINDINGBYKEY_OFFSET))(this, key);
		}
	};
}
