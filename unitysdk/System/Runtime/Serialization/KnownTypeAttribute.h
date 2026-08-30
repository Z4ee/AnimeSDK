#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define SYSTEM_RUNTIME_SERIALIZATION_KNOWNTYPEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F015910)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int KnownTypeAttribute_TypeDefinitionIndex = 3709;

	class KnownTypeAttribute : public ::System::Attribute
	{
	public:
		::System::Type* type; // 0x10

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_KNOWNTYPEATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
