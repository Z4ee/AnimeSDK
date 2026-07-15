#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define UNITYENGINE_RENDERING_HLSLARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0F2630)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int HLSLArray_TypeDefinitionIndex = 34140;

	class HLSLArray : public ::System::Attribute
	{
	public:
		::System::Type* elementType; // 0x10
		::System::Int32 arraySize; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HLSLARRAY__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
