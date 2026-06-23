#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UTF8JSON_SERIALIZATIONCONSTRUCTORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7EE5E0)

namespace Utf8Json
{
	inline static constexpr unsigned int SerializationConstructorAttribute_TypeDefinitionIndex = 91066;

	class SerializationConstructorAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_SERIALIZATIONCONSTRUCTORATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
