#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/PassType.h"

namespace System { class String; }
namespace UnityEngine { class Shader; }

namespace UnityEngine
{
	inline static constexpr unsigned int ShaderVariantCollection_ShaderVariant_TypeDefinitionIndex = 5393;

	struct alignas(8) ShaderVariantCollection_ShaderVariant
	{
		::UnityEngine::Shader* shader; // 0x10
		::UnityEngine::Rendering::PassType passType; // 0x18
		::System::String* pipeline; // 0x20
		::Il2CppArray<::System::String*>* keywords; // 0x28
	};
}
