#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_SERIALIZATION_TYPELOADEXCEPTIONHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD944C0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int TypeLoadExceptionHolder_TypeDefinitionIndex = 1155;

	class TypeLoadExceptionHolder : public ::System::Object
	{
	public:
		::System::String* m_typeName; // 0x10

		::System::Void _ctor(::System::String* typeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_TYPELOADEXCEPTIONHOLDER__CTOR_OFFSET))(this, typeName);
		}
	};
}
