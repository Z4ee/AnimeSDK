#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace System { class String; }

#define TMPRO_TMP_INPUTFIELD_ONCHANGEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x171AF310)

namespace TMPro
{
	inline static constexpr unsigned int TMP_InputField_OnChangeEvent_TypeDefinitionIndex = 41797;

	class TMP_InputField_OnChangeEvent : public ::UnityEngine::Events::UnityEvent_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD_ONCHANGEEVENT__CTOR_OFFSET))(this);
		}
	};
}
