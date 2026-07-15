#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MissingMemberException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_MISSINGMETHODEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1B876AF0)
#define SYSTEM_MISSINGMETHODEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B876A60)
#define SYSTEM_MISSINGMETHODEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B876AD0)
#define SYSTEM_MISSINGMETHODEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B876BE0)
#define SYSTEM_MISSINGMETHODEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B876CA0)
#define SYSTEM_MISSINGMETHODEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8769C0)

namespace System
{
	inline static constexpr unsigned int MissingMethodException_TypeDefinitionIndex = 298;

	class MissingMethodException : public ::System::MissingMemberException
	{
	public:
		::System::String* signature; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMETHODEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMETHODEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMETHODEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMETHODEXCEPTION__CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_4(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMETHODEXCEPTION__CTOR_4_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMETHODEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}
	};
}
