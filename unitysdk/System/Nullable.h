#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define SYSTEM_NULLABLE_GETUNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x187346D0)

namespace System
{
	inline static constexpr unsigned int Nullable_TypeDefinitionIndex = 409;

	class Nullable : public ::System::Object
	{
	public:
		static ::System::Type* GetUnderlyingType(::System::Type* a1)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_NULLABLE_GETUNDERLYINGTYPE_OFFSET))(a1);
		}
	};
}
