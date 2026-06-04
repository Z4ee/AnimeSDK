#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace System { class String; }

#define TMPRO_TMP_INPUTFIELD_SUBMITEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B5C00)

namespace TMPro
{
	inline static constexpr unsigned int TMP_InputField_SubmitEvent_TypeDefinitionIndex = 40981;

	class TMP_InputField_SubmitEvent : public ::UnityEngine::Events::UnityEvent_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD_SUBMITEVENT__CTOR_OFFSET))(this);
		}
	};
}
