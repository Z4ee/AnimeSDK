#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_SCRIPTING_ALWAYSLINKASSEMBLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4FF060)

namespace UnityEngine::Scripting
{
	inline static constexpr unsigned int AlwaysLinkAssemblyAttribute_TypeDefinitionIndex = 5506;

	class AlwaysLinkAssemblyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_ALWAYSLINKASSEMBLYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
