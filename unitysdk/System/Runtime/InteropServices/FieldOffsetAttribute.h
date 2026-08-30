#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_FIELDOFFSETATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDBD260)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int FieldOffsetAttribute_TypeDefinitionIndex = 1423;

	class FieldOffsetAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 _val; // 0x10

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_FIELDOFFSETATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
