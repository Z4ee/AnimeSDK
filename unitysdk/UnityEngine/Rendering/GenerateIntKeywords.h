#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_RENDERING_GENERATEINTKEYWORDS__CTOR_OFFSET UNITYSDK_OFFSET(0x19B83FA0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GenerateIntKeywords_TypeDefinitionIndex = 29776;

	class GenerateIntKeywords : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GENERATEINTKEYWORDS__CTOR_OFFSET))(this);
		}
	};
}
