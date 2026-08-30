#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace System { class String; }

#define UNITYENGINE_UI_INPUTFIELD_SUBMITEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x17712480)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int InputField_SubmitEvent_TypeDefinitionIndex = 6736;

	class InputField_SubmitEvent : public ::UnityEngine::Events::UnityEvent_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SUBMITEVENT__CTOR_OFFSET))(this);
		}
	};
}
