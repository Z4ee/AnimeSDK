#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_PRESERVESIGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A826F80)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int PreserveSigAttribute_TypeDefinitionIndex = 1408;

	class PreserveSigAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_PRESERVESIGATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
