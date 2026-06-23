#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define SYSTEM_NULLABLE_GETUNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x1B923A80)

namespace System
{
	inline static constexpr unsigned int Nullable_TypeDefinitionIndex = 397;

	class Nullable : public ::System::Object
	{
	public:
		static ::System::Type* GetUnderlyingType(::System::Type* nullableType)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_NULLABLE_GETUNDERLYINGTYPE_OFFSET))(nullableType);
		}
	};
}
