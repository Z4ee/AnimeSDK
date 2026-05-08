#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_ANALYTICS_CONTINUOUSEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C535D80)

namespace UnityEngine::Analytics
{
	inline static constexpr unsigned int ContinuousEvent_TypeDefinitionIndex = 84224;

	class ContinuousEvent : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANALYTICS_CONTINUOUSEVENT__CTOR_OFFSET))(this);
		}
	};
}
