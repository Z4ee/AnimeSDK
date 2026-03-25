#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFEVALUETYPEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x16392C20)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int UnsafeValueTypeAttribute_TypeDefinitionIndex = 1383;

	class UnsafeValueTypeAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFEVALUETYPEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
