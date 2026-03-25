#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define UNITYENGINE_RENDERING_HLSLARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x188E6C90)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int HLSLArray_TypeDefinitionIndex = 27863;

	class HLSLArray : public ::System::Attribute
	{
	public:
		::System::Type* elementType; // 0x10
		::System::Int32 arraySize; // 0x18

		::System::Void _ctor(::System::Int32 arraySize, ::System::Type* elementType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HLSLARRAY__CTOR_OFFSET))(this, arraySize, elementType);
		}
	};
}
