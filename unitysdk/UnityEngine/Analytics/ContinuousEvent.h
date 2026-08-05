#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_ANALYTICS_CONTINUOUSEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC435D0)

namespace UnityEngine::Analytics
{
	inline static constexpr unsigned int ContinuousEvent_TypeDefinitionIndex = 93734;

	class ContinuousEvent : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANALYTICS_CONTINUOUSEVENT__CTOR_OFFSET))(this);
		}
	};
}
