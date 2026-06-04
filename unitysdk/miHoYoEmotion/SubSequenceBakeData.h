#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace miHoYoEmotion { class SequenceBakeData_BakeData; }

#define MIHOYOEMOTION_SUBSEQUENCEBAKEDATA_GET_BAKEDATA_OFFSET UNITYSDK_OFFSET(0xA27CD30)
#define MIHOYOEMOTION_SUBSEQUENCEBAKEDATA_SET_BAKEDATA_OFFSET UNITYSDK_OFFSET(0xA27CD20)
#define MIHOYOEMOTION_SUBSEQUENCEBAKEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA27CD40)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int SubSequenceBakeData_TypeDefinitionIndex = 41786;

	class SubSequenceBakeData : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SUBSEQUENCEBAKEDATA__CTOR_OFFSET))(this);
		}

		::System::Void set_bakeData(::miHoYoEmotion::SequenceBakeData_BakeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceBakeData_BakeData*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SUBSEQUENCEBAKEDATA_SET_BAKEDATA_OFFSET))(this, a1);
		}

		::miHoYoEmotion::SequenceBakeData_BakeData* get_bakeData()
		{
			return ((::miHoYoEmotion::SequenceBakeData_BakeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SUBSEQUENCEBAKEDATA_GET_BAKEDATA_OFFSET))(this);
		}
	};
}
