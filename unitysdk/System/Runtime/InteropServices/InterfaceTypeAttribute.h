#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Runtime/InteropServices/ComInterfaceType.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_INTERFACETYPEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB221F0)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int InterfaceTypeAttribute_TypeDefinitionIndex = 1413;

	class InterfaceTypeAttribute : public ::System::Attribute
	{
	public:
		::System::Runtime::InteropServices::ComInterfaceType _val; // 0x10

		::System::Void _ctor(::System::Runtime::InteropServices::ComInterfaceType interfaceType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::ComInterfaceType))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_INTERFACETYPEATTRIBUTE__CTOR_OFFSET))(this, interfaceType);
		}
	};
}
