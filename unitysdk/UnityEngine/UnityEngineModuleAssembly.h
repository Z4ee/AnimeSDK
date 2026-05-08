#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_UNITYENGINEMODULEASSEMBLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5601E0)

namespace UnityEngine
{
	inline static constexpr unsigned int UnityEngineModuleAssembly_TypeDefinitionIndex = 5038;

	class UnityEngineModuleAssembly : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYENGINEMODULEASSEMBLY__CTOR_OFFSET))(this);
		}
	};
}
