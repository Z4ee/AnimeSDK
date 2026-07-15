#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MissingMemberException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_MISSINGFIELDEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1B876440)
#define SYSTEM_MISSINGFIELDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B876290)
#define SYSTEM_MISSINGFIELDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B876300)
#define SYSTEM_MISSINGFIELDEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B876710)
#define SYSTEM_MISSINGFIELDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B876180)

namespace System
{
	inline static constexpr unsigned int MissingFieldException_TypeDefinitionIndex = 296;

	class MissingFieldException : public ::System::MissingMemberException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGFIELDEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGFIELDEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGFIELDEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGFIELDEXCEPTION__CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGFIELDEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}
	};
}
