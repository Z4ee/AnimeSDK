#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Toggle.h"

namespace UnityEngine { class GameObject; }

#define UNITYENGINE_RENDERING_UI_UIFOLDOUT_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1EC14360)
#define UNITYENGINE_RENDERING_UI_UIFOLDOUT_SETSTATE_1_OFFSET UNITYSDK_OFFSET(0x1EC14370)
#define UNITYENGINE_RENDERING_UI_UIFOLDOUT_SETSTATE_OFFSET UNITYSDK_OFFSET(0x1EC14350)
#define UNITYENGINE_RENDERING_UI_UIFOLDOUT_START_OFFSET UNITYSDK_OFFSET(0x1EC142B0)
#define UNITYENGINE_RENDERING_UI_UIFOLDOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC144E0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int UIFoldout_TypeDefinitionIndex = 35035;

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

		::System::Void SetState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_UIFOLDOUT_SETSTATE_OFFSET))(this, a1);
		}

		::System::Void SetState_1(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_UIFOLDOUT_SETSTATE_1_OFFSET))(this, a1, a2);
		}
	};
}
