#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_SERIALIZATION_TYPELOADEXCEPTIONHOLDER_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x19B9D0E0)
#define SYSTEM_RUNTIME_SERIALIZATION_TYPELOADEXCEPTIONHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9D0D0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int TypeLoadExceptionHolder_TypeDefinitionIndex = 1116;

	class TypeLoadExceptionHolder : public ::System::Object
	{
	public:
		::System::String* m_typeName; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_TYPELOADEXCEPTIONHOLDER__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_TypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_TYPELOADEXCEPTIONHOLDER_GET_TYPENAME_OFFSET))(this);
		}
	};
}
