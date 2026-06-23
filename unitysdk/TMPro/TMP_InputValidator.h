#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }

#define TMPRO_TMP_INPUTVALIDATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E747510)

namespace TMPro
{
	inline static constexpr unsigned int TMP_InputValidator_TypeDefinitionIndex = 39166;

	class TMP_InputValidator : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTVALIDATOR__CTOR_OFFSET))(this);
		}
	};
}
