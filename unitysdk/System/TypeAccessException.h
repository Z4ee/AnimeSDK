#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/TypeLoadException.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_TYPEACCESSEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19565900)
#define SYSTEM_TYPEACCESSEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19565990)
#define SYSTEM_TYPEACCESSEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19565840)

namespace System
{
	inline static constexpr unsigned int TypeAccessException_TypeDefinitionIndex = 340;

	class TypeAccessException : public ::System::TypeLoadException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEACCESSEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPEACCESSEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TYPEACCESSEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}
	};
}
