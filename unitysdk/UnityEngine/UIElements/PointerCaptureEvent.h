#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/PointerCaptureEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD92B0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerCaptureEvent_TypeDefinitionIndex = 5877;

	class PointerCaptureEvent : public ::UnityEngine::UIElements::PointerCaptureEventBase_1<::UnityEngine::UIElements::PointerCaptureEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREEVENT__CTOR_OFFSET))(this);
		}
	};
}
