#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/DragAndDropEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_DRAGENTEREVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1B3529C0)
#define UNITYENGINE_UIELEMENTS_DRAGENTEREVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1B352A00)
#define UNITYENGINE_UIELEMENTS_DRAGENTEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B352A10)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DragEnterEvent_TypeDefinitionIndex = 6178;

	class DragEnterEvent : public ::UnityEngine::UIElements::DragAndDropEventBase_1<::UnityEngine::UIElements::DragEnterEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGENTEREVENT__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGENTEREVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGENTEREVENT_LOCALINIT_OFFSET))(this);
		}
	};
}
