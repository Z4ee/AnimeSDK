#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_COMIMPORTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x179BFE50)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int ComImportAttribute_TypeDefinitionIndex = 1403;

	class ComImportAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMIMPORTATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
