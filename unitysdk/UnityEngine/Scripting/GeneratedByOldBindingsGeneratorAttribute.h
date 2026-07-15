#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_SCRIPTING_GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D300590)

namespace UnityEngine::Scripting
{
	inline static constexpr unsigned int GeneratedByOldBindingsGeneratorAttribute_TypeDefinitionIndex = 3731;

	class GeneratedByOldBindingsGeneratorAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
