#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/MouseCaptureEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_MOUSECAPTUREEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B35D320)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseCaptureEvent_TypeDefinitionIndex = 6169;

	class MouseCaptureEvent : public ::UnityEngine::UIElements::MouseCaptureEventBase_1<::UnityEngine::UIElements::MouseCaptureEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSECAPTUREEVENT__CTOR_OFFSET))(this);
		}
	};
}
