#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_SERIALIZATION_OPTIONALFIELDATTRIBUTE_SET_VERSIONADDED_OFFSET UNITYSDK_OFFSET(0x1833E360)
#define SYSTEM_RUNTIME_SERIALIZATION_OPTIONALFIELDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1833E350)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int OptionalFieldAttribute_TypeDefinitionIndex = 1113;

	class OptionalFieldAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 versionAdded; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OPTIONALFIELDATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void set_VersionAdded(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OPTIONALFIELDATTRIBUTE_SET_VERSIONADDED_OFFSET))(this, a1);
		}
	};
}
