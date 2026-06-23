#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_VECTOR4I__CTOR_OFFSET UNITYSDK_OFFSET(0x588040)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int Vector4i_TypeDefinitionIndex = 27170;

	struct alignas(4) Vector4i
	{
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14
		::System::Int32 z; // 0x18
		::System::Int32 w; // 0x1C

		::System::Void _ctor(::System::Int32 _x, ::System::Int32 _y, ::System::Int32 _z, ::System::Int32 _w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_VECTOR4I__CTOR_OFFSET))(this, _x, _y, _z, _w);
		}
	};
}
