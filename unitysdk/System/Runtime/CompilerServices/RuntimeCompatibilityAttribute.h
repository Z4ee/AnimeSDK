#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMECOMPATIBILITYATTRIBUTE_SET_WRAPNONEXCEPTIONTHROWS_OFFSET UNITYSDK_OFFSET(0x163923A0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMECOMPATIBILITYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x16392390)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RuntimeCompatibilityAttribute_TypeDefinitionIndex = 1355;

	class RuntimeCompatibilityAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean m_wrapNonExceptionThrows; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMECOMPATIBILITYATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void set_WrapNonExceptionThrows(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMECOMPATIBILITYATTRIBUTE_SET_WRAPNONEXCEPTIONTHROWS_OFFSET))(this, value);
		}
	};
}
