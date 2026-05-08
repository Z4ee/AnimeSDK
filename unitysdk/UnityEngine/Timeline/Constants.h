#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_TIMELINE_CONSTANTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E10D0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int Constants_TypeDefinitionIndex = 30802;

	class Constants : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONSTANTS__CTOR_OFFSET))(this);
		}
	};
}
