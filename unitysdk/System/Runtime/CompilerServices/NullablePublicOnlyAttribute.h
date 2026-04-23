#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEPUBLICONLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19EB5990)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int NullablePublicOnlyAttribute_TypeDefinitionIndex = 9084;

	class NullablePublicOnlyAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean IncludesInternals; // 0x10

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEPUBLICONLYATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
