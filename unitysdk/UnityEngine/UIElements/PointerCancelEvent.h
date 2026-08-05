#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/PointerEventBase_1.h"

namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_POINTERCANCELEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1D002C60)
#define UNITYENGINE_UIELEMENTS_POINTERCANCELEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1D002D60)
#define UNITYENGINE_UIELEMENTS_POINTERCANCELEVENT_POSTDISPATCH_OFFSET UNITYSDK_OFFSET(0x1D002F30)
#define UNITYENGINE_UIELEMENTS_POINTERCANCELEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D002E30)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerCancelEvent_TypeDefinitionIndex = 28164;

	class PointerCancelEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerCancelEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCANCELEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCANCELEVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCANCELEVENT_LOCALINIT_OFFSET))(this);
		}

		::System::Void PostDispatch(::UnityEngine::UIElements::IPanel* panel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCANCELEVENT_POSTDISPATCH_OFFSET))(this, panel);
		}
	};
}
