#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_COMDEFAULTINTERFACEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x16393290)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int ComDefaultInterfaceAttribute_TypeDefinitionIndex = 1395;

	class ComDefaultInterfaceAttribute : public ::System::Attribute
	{
	public:
		::System::Type* _val; // 0x10

		::System::Void _ctor(::System::Type* defaultInterface)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMDEFAULTINTERFACEATTRIBUTE__CTOR_OFFSET))(this, defaultInterface);
		}
	};
}
