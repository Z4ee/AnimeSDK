#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_3.h"

namespace System { class String; }

#define TMPRO_TMP_INPUTFIELD_TEXTSELECTIONEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x171AF300)

namespace TMPro
{
	inline static constexpr unsigned int TMP_InputField_TextSelectionEvent_TypeDefinitionIndex = 41799;

	class TMP_InputField_TextSelectionEvent : public ::UnityEngine::Events::UnityEvent_3<::System::String*, ::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD_TEXTSELECTIONEVENT__CTOR_OFFSET))(this);
		}
	};
}
