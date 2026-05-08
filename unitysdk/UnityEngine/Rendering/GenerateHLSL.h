#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Rendering/PackingRules.h"

#define UNITYENGINE_RENDERING_GENERATEHLSL__CTOR_OFFSET UNITYSDK_OFFSET(0x191F78D0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GenerateHLSL_TypeDefinitionIndex = 9579;

	class GenerateHLSL : public ::System::Attribute
	{
	public:
		::System::Boolean needParamDebug; // 0x10
		::System::Boolean containsPackedFields; // 0x11
		::System::Boolean needAccessors; // 0x12
		::UnityEngine::Rendering::PackingRules packingRules; // 0x14
		::System::Int32 paramDefinesStart; // 0x18
		::System::Boolean needSetters; // 0x1C
		::System::Boolean omitStructDeclaration; // 0x1D

		::System::Void _ctor(::UnityEngine::Rendering::PackingRules rules, ::System::Boolean needAccessors, ::System::Boolean needSetters, ::System::Boolean needParamDebug, ::System::Int32 paramDefinesStart, ::System::Boolean omitStructDeclaration, ::System::Boolean containsPackedFields)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::PackingRules, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GENERATEHLSL__CTOR_OFFSET))(this, rules, needAccessors, needSetters, needParamDebug, paramDefinesStart, omitStructDeclaration, containsPackedFields);
		}
	};
}
