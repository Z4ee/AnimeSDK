#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0xE9D6940)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int NullableContextAttribute_TypeDefinitionIndex = 47060;

	class NullableContextAttribute : public ::System::Attribute
	{
	public:
		::System::Byte Flag; // 0x10

		::System::Void _ctor(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
