#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Runtime/CompilerServices/CustomConstantAttribute.h"

namespace System { class Object; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_DATETIMECONSTANTATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A807B10)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int DateTimeConstantAttribute_TypeDefinitionIndex = 1376;

	class DateTimeConstantAttribute : public ::System::Runtime::CompilerServices::CustomConstantAttribute
	{
	public:
		::System::DateTime date; // 0x10

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_DATETIMECONSTANTATTRIBUTE_GET_VALUE_OFFSET))(this);
		}
	};
}
