#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/MouseEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_MOUSEENTEREVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1BBE9720)
#define UNITYENGINE_UIELEMENTS_MOUSEENTEREVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1BBE9760)
#define UNITYENGINE_UIELEMENTS_MOUSEENTEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBE9770)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseEnterEvent_TypeDefinitionIndex = 27540;

	class MouseEnterEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseEnterEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEENTEREVENT__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEENTEREVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEENTEREVENT_LOCALINIT_OFFSET))(this);
		}
	};
}
