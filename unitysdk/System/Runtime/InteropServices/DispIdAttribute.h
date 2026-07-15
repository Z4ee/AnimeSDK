#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_DISPIDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8253A0)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int DispIdAttribute_TypeDefinitionIndex = 1397;

	class DispIdAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 _val; // 0x10

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_DISPIDATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
