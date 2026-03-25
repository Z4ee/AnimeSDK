#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }

#define TMPRO_TMP_INPUTVALIDATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18936B80)

namespace TMPro
{
	inline static constexpr unsigned int TMP_InputValidator_TypeDefinitionIndex = 34344;

	class TMP_InputValidator : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTVALIDATOR__CTOR_OFFSET))(this);
		}
	};
}
