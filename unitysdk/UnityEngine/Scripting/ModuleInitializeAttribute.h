#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_SCRIPTING_MODULEINITIALIZEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED63C60)

namespace UnityEngine::Scripting
{
	inline static constexpr unsigned int ModuleInitializeAttribute_TypeDefinitionIndex = 4498;

	class ModuleInitializeAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_MODULEINITIALIZEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
