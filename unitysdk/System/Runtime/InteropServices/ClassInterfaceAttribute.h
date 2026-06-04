#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Runtime/InteropServices/ClassInterfaceType.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_CLASSINTERFACEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18770A30)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int ClassInterfaceAttribute_TypeDefinitionIndex = 1398;

	class ClassInterfaceAttribute : public ::System::Attribute
	{
	public:
		::System::Runtime::InteropServices::ClassInterfaceType _val; // 0x10

		::System::Void _ctor(::System::Runtime::InteropServices::ClassInterfaceType a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::ClassInterfaceType))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_CLASSINTERFACEATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
