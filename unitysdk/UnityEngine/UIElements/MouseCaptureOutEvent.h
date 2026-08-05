#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/MouseCaptureEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_MOUSECAPTUREOUTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D000930)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseCaptureOutEvent_TypeDefinitionIndex = 28091;

	class MouseCaptureOutEvent : public ::UnityEngine::UIElements::MouseCaptureEventBase_1<::UnityEngine::UIElements::MouseCaptureOutEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSECAPTUREOUTEVENT__CTOR_OFFSET))(this);
		}
	};
}
