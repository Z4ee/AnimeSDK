#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_COMVISIBLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x179BFE60)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int ComVisibleAttribute_TypeDefinitionIndex = 1400;

	class ComVisibleAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean _val; // 0x10

		::System::Void _ctor(::System::Boolean visibility)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMVISIBLEATTRIBUTE__CTOR_OFFSET))(this, visibility);
		}
	};
}
