#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Rendering/PackingRules.h"

#define UNITYENGINE_RENDERING_GENERATEHLSL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AF6E0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GenerateHLSL_TypeDefinitionIndex = 18309;

	class GenerateHLSL : public ::System::Attribute
	{
	public:
		::System::Int32 paramDefinesStart; // 0x10
		::System::Boolean needSetters; // 0x14
		::System::Boolean needParamDebug; // 0x15
		::System::Boolean omitStructDeclaration; // 0x16
		::System::Boolean containsPackedFields; // 0x17
		::System::Boolean needAccessors; // 0x18
		::UnityEngine::Rendering::PackingRules packingRules; // 0x1C

		::System::Void _ctor(::UnityEngine::Rendering::PackingRules rules, ::System::Boolean needAccessors, ::System::Boolean needSetters, ::System::Boolean needParamDebug, ::System::Int32 paramDefinesStart, ::System::Boolean omitStructDeclaration, ::System::Boolean containsPackedFields)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::PackingRules, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GENERATEHLSL__CTOR_OFFSET))(this, rules, needAccessors, needSetters, needParamDebug, paramDefinesStart, omitStructDeclaration, containsPackedFields);
		}
	};
}
