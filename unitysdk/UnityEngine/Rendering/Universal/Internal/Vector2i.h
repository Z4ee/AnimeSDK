#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_VECTOR2I__CTOR_OFFSET UNITYSDK_OFFSET(0x293FB0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int Vector2i_TypeDefinitionIndex = 30507;

	struct alignas(4) Vector2i
	{
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14

		::System::Void _ctor(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_VECTOR2I__CTOR_OFFSET))(this, x, y);
		}
	};
}
