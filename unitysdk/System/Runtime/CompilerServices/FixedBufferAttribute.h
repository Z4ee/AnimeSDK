#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_FIXEDBUFFERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E446CF0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int FixedBufferAttribute_TypeDefinitionIndex = 1402;

	class FixedBufferAttribute : public ::System::Attribute
	{
	public:
		::System::Type* elementType; // 0x10
		::System::Int32 length; // 0x18

		::System::Void _ctor(::System::Type* elementType, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_FIXEDBUFFERATTRIBUTE__CTOR_OFFSET))(this, elementType, length);
		}
	};
}
