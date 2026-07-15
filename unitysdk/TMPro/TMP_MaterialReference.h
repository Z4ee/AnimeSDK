#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }

namespace TMPro
{
	inline static constexpr unsigned int TMP_MaterialReference_TypeDefinitionIndex = 41735;

	struct alignas(8) TMP_MaterialReference
	{
		::UnityEngine::Material* material; // 0x10
		::System::Int32 referenceCount; // 0x18
	};
}
