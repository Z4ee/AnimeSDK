#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture2D; }

#define MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_FRAMEKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0CC30)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int SequenceFrameBakeData_FrameKey_TypeDefinitionIndex = 39324;

	class SequenceFrameBakeData_FrameKey : public ::System::Object
	{
	public:
		::System::Single frameTime; // 0x10
		::UnityEngine::Texture2D* frame; // 0x18
		::System::Int32 bindingIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_FRAMEKEY__CTOR_OFFSET))(this);
		}
	};
}
