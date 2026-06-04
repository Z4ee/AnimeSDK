#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/TypeLoadException.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_TYPEACCESSEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x186534A0)
#define SYSTEM_TYPEACCESSEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18653510)
#define SYSTEM_TYPEACCESSEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18653400)

namespace System
{
	inline static constexpr unsigned int TypeAccessException_TypeDefinitionIndex = 349;

	class TypeAccessException : public ::System::TypeLoadException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEACCESSEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPEACCESSEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TYPEACCESSEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}
	};
}
