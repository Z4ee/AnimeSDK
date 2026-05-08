#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_SCRIPTING_PRESERVEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B662830)

namespace UnityEngine::Scripting
{
	inline static constexpr unsigned int PreserveAttribute_TypeDefinitionIndex = 5508;

	class PreserveAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_PRESERVEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
