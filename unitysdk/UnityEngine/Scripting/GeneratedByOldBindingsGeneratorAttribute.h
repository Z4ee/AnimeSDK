#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_SCRIPTING_GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F00F8E0)

namespace UnityEngine::Scripting
{
	inline static constexpr unsigned int GeneratedByOldBindingsGeneratorAttribute_TypeDefinitionIndex = 3739;

	class GeneratedByOldBindingsGeneratorAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
