#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Toggle.h"

namespace UnityEngine { class GameObject; }

#define UNITYENGINE_RENDERING_UI_UIFOLDOUT_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1A3359B0)
#define UNITYENGINE_RENDERING_UI_UIFOLDOUT_SETSTATE_1_OFFSET UNITYSDK_OFFSET(0x1A3359C0)
#define UNITYENGINE_RENDERING_UI_UIFOLDOUT_SETSTATE_OFFSET UNITYSDK_OFFSET(0x1A3359A0)
#define UNITYENGINE_RENDERING_UI_UIFOLDOUT_START_OFFSET UNITYSDK_OFFSET(0x1A3358C0)
#define UNITYENGINE_RENDERING_UI_UIFOLDOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A335B30)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int UIFoldout_TypeDefinitionIndex = 33615;

	class UIFoldout : public ::UnityEngine::UI::Toggle
	{
	public:
		::UnityEngine::GameObject* content; // 0x138
		::UnityEngine::GameObject* arrowOpened; // 0x140
		::UnityEngine::GameObject* arrowClosed; // 0x148

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_UIFOLDOUT__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_UIFOLDOUT_START_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_UIFOLDOUT_ONVALIDATE_OFFSET))(this);
		}

		::System::Void SetState(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_UIFOLDOUT_SETSTATE_OFFSET))(this, state);
		}

		::System::Void SetState_1(::System::Boolean state, ::System::Boolean rebuildLayout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_UIFOLDOUT_SETSTATE_1_OFFSET))(this, state, rebuildLayout);
		}
	};
}
