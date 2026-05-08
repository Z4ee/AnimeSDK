#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_ANIMATIONS_NOTKEYABLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C53CE10)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int NotKeyableAttribute_TypeDefinitionIndex = 6585;

	class NotKeyableAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_NOTKEYABLEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
