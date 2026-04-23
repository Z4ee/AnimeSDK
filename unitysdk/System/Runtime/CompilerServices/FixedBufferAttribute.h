#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_FIXEDBUFFERATTRIBUTE_GET_ELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x179BEE80)
#define SYSTEM_RUNTIME_COMPILERSERVICES_FIXEDBUFFERATTRIBUTE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x179BEE90)
#define SYSTEM_RUNTIME_COMPILERSERVICES_FIXEDBUFFERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x179BEE70)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int FixedBufferAttribute_TypeDefinitionIndex = 1376;

	class FixedBufferAttribute : public ::System::Attribute
	{
	public:
		::System::Type* elementType; // 0x10
		::System::Int32 length; // 0x18

		::System::Void _ctor(::System::Type* elementType, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_FIXEDBUFFERATTRIBUTE__CTOR_OFFSET))(this, elementType, length);
		}

		::System::Type* get_ElementType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_FIXEDBUFFERATTRIBUTE_GET_ELEMENTTYPE_OFFSET))(this);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_FIXEDBUFFERATTRIBUTE_GET_LENGTH_OFFSET))(this);
		}
	};
}
