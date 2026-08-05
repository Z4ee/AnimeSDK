#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

#define UNITYENGINE_UI_MASKABLEGRAPHIC_CULLSTATECHANGEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F819840)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int MaskableGraphic_CullStateChangedEvent_TypeDefinitionIndex = 19269;

	class MaskableGraphic_CullStateChangedEvent : public ::UnityEngine::Events::UnityEvent_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_CULLSTATECHANGEDEVENT__CTOR_OFFSET))(this);
		}
	};
}
