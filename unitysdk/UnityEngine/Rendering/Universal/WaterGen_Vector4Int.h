#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_VECTOR4INT__CTOR_OFFSET UNITYSDK_OFFSET(0x6245C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterGen_Vector4Int_TypeDefinitionIndex = 27847;

	struct alignas(4) WaterGen_Vector4Int
	{
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14
		::System::Int32 z; // 0x18
		::System::Int32 w; // 0x1C

		::System::Void _ctor(::System::Int32 inX, ::System::Int32 inY, ::System::Int32 inZ, ::System::Int32 inW)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_VECTOR4INT__CTOR_OFFSET))(this, inX, inY, inZ, inW);
		}
	};
}
