#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MissingMemberException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_MISSINGMETHODEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x193D9FC0)
#define SYSTEM_MISSINGMETHODEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193D9F10)
#define SYSTEM_MISSINGMETHODEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x193D9FA0)
#define SYSTEM_MISSINGMETHODEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x193DA0B0)
#define SYSTEM_MISSINGMETHODEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x193DA1A0)
#define SYSTEM_MISSINGMETHODEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x193D9E50)

namespace System
{
	inline static constexpr unsigned int MissingMethodException_TypeDefinitionIndex = 289;

	class MissingMethodException : public ::System::MissingMemberException
	{
	public:
		::System::String* signature; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMETHODEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMETHODEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMETHODEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}

		::System::Void _ctor_3(::System::String* className, ::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMETHODEXCEPTION__CTOR_3_OFFSET))(this, className, methodName);
		}

		::System::Void _ctor_4(::System::String* className, ::System::String* methodName, ::System::String* signature, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMETHODEXCEPTION__CTOR_4_OFFSET))(this, className, methodName, signature, message);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMETHODEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}
	};
}
