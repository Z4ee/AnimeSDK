#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/PassType.h"

namespace System { class String; }
namespace UnityEngine { class Shader; }

#define UNITYENGINE_SHADERVARIANTCOLLECTION_SHADERVARIANT__CTOR_OFFSET UNITYSDK_OFFSET(0xD6D10)

namespace UnityEngine
{
	inline static constexpr unsigned int ShaderVariantCollection_ShaderVariant_TypeDefinitionIndex = 4195;

	struct alignas(8) ShaderVariantCollection_ShaderVariant
	{
		::UnityEngine::Shader* shader; // 0x10
		::UnityEngine::Rendering::PassType passType; // 0x18
		::Il2CppArray<::System::String*>* keywords; // 0x20

		::System::Void _ctor(::UnityEngine::Shader* shader, ::UnityEngine::Rendering::PassType passType, ::Il2CppArray<::System::String*>* keywords)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Shader*, ::UnityEngine::Rendering::PassType, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERVARIANTCOLLECTION_SHADERVARIANT__CTOR_OFFSET))(this, shader, passType, keywords);
		}
	};
}
