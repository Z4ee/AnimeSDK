#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace System { class String; }

#define UNITYENGINE_UI_INPUTFIELD_ONCHANGEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x15D9DC00)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int InputField_OnChangeEvent_TypeDefinitionIndex = 5907;

	class InputField_OnChangeEvent : public ::UnityEngine::Events::UnityEvent_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONCHANGEEVENT__CTOR_OFFSET))(this);
		}
	};
}
