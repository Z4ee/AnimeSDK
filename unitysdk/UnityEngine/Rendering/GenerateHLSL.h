#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Rendering/PackingRules.h"

#define UNITYENGINE_RENDERING_GENERATEHLSL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0F1B40)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GenerateHLSL_TypeDefinitionIndex = 34138;

	class GenerateHLSL : public ::System::Attribute
	{
	public:
		::System::Int32 paramDefinesStart; // 0x10
		::System::Boolean omitStructDeclaration; // 0x14
		::System::Boolean needAccessors; // 0x15
		::System::Boolean needParamDebug; // 0x16
		::System::Boolean containsPackedFields; // 0x17
		::System::Boolean needSetters; // 0x18
		::UnityEngine::Rendering::PackingRules packingRules; // 0x1C

		::System::Void _ctor(::UnityEngine::Rendering::PackingRules a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::PackingRules, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GENERATEHLSL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
