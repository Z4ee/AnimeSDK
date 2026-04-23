#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"

#define UNITYENGINE_UI_RAMPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A557F20)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RampData_TypeDefinitionIndex = 5682;

	class RampData : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Color32>* colors; // 0x10
		::System::Single rotation; // 0x18
		::System::Single scale; // 0x1C
		::System::Single offset; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAMPDATA__CTOR_OFFSET))(this);
		}
	};
}
