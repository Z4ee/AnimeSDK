#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define UNITYENGINE_MINATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED3E4A0)

namespace UnityEngine
{
	inline static constexpr unsigned int MinAttribute_TypeDefinitionIndex = 4241;

	class MinAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Single min; // 0x10

		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MINATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
