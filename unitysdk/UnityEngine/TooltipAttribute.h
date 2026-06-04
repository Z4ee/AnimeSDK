#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

namespace System { class String; }

#define UNITYENGINE_TOOLTIPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2DFA10)

namespace UnityEngine
{
	inline static constexpr unsigned int TooltipAttribute_TypeDefinitionIndex = 4222;

	class TooltipAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::String* tooltip; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TOOLTIPATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
