#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/PointerCaptureEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREOUTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A515AF0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerCaptureOutEvent_TypeDefinitionIndex = 5888;

	class PointerCaptureOutEvent : public ::UnityEngine::UIElements::PointerCaptureEventBase_1<::UnityEngine::UIElements::PointerCaptureOutEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREOUTEVENT__CTOR_OFFSET))(this);
		}
	};
}
