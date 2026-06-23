#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MissingMemberException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_MISSINGFIELDEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1C9D1970)
#define SYSTEM_MISSINGFIELDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C9D18C0)
#define SYSTEM_MISSINGFIELDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C9D1950)
#define SYSTEM_MISSINGFIELDEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C9D1AA0)
#define SYSTEM_MISSINGFIELDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9D1800)

namespace System
{
	inline static constexpr unsigned int MissingFieldException_TypeDefinitionIndex = 287;

	class MissingFieldException : public ::System::MissingMemberException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGFIELDEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGFIELDEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGFIELDEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}

		::System::Void _ctor_3(::System::String* className, ::System::String* fieldName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGFIELDEXCEPTION__CTOR_3_OFFSET))(this, className, fieldName);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGFIELDEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}
	};
}
