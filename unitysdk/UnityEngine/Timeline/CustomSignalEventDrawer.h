#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define UNITYENGINE_TIMELINE_CUSTOMSIGNALEVENTDRAWER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F243770)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int CustomSignalEventDrawer_TypeDefinitionIndex = 33007;

	class CustomSignalEventDrawer : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUSTOMSIGNALEVENTDRAWER__CTOR_OFFSET))(this);
		}
	};
}
