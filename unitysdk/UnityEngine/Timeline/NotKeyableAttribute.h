#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_TIMELINE_NOTKEYABLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x189ADCC0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int NotKeyableAttribute_TypeDefinitionIndex = 29900;

	class NotKeyableAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_NOTKEYABLEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
