#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace System { class String; }

#define MIHOYOEMOTION_EMOTIONSETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19791FD0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EmotionSetData_TypeDefinitionIndex = 37747;

	class EmotionSetData : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::Il2CppArray<::System::String*>* phonemeSet; // 0x58
		::Il2CppArray<::System::String*>* emotionSet; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTIONSETDATA__CTOR_OFFSET))(this);
		}
	};
}
