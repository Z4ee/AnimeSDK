#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/PassType.h"

namespace System { class String; }
namespace UnityEngine { class Shader; }

#define UNITYENGINE_SHADERVARIANTCOLLECTION_SHADERVARIANT__CTOR_OFFSET UNITYSDK_OFFSET(0x85620)

namespace UnityEngine
{
	inline static constexpr unsigned int ShaderVariantCollection_ShaderVariant_TypeDefinitionIndex = 4384;

	struct alignas(8) ShaderVariantCollection_ShaderVariant
	{
		::UnityEngine::Shader* shader; // 0x10
		::UnityEngine::Rendering::PassType passType; // 0x18
		::Il2CppArray<::System::String*>* keywords; // 0x20

		::System::Void _ctor(::UnityEngine::Shader* a1, ::UnityEngine::Rendering::PassType a2, ::Il2CppArray<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Shader*, ::UnityEngine::Rendering::PassType, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERVARIANTCOLLECTION_SHADERVARIANT__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
