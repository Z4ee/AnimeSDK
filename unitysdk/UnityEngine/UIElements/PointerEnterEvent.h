#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/PointerEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_POINTERENTEREVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1B361D10)
#define UNITYENGINE_UIELEMENTS_POINTERENTEREVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1B361D50)
#define UNITYENGINE_UIELEMENTS_POINTERENTEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B361D60)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerEnterEvent_TypeDefinitionIndex = 6239;

	class PointerEnterEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerEnterEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERENTEREVENT__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERENTEREVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERENTEREVENT_LOCALINIT_OFFSET))(this);
		}
	};
}
