#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_OPERATIONCANCELEDEXCEPTION_GET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x16362C80)
#define SYSTEM_OPERATIONCANCELEDEXCEPTION_SET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x16362C90)
#define SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16362D10)
#define SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x16362D80)
#define SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x16362DF0)
#define SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16362CA0)

namespace System
{
	inline static constexpr unsigned int OperationCanceledException_TypeDefinitionIndex = 309;

	class OperationCanceledException : public ::System::SystemException
	{
	public:
		::System::Threading::CancellationToken _cancellationToken; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Threading::CancellationToken token)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_2_OFFSET))(this, message, token);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_3_OFFSET))(this, info, context);
		}

		::System::Threading::CancellationToken get_CancellationToken()
		{
			return ((::System::Threading::CancellationToken(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATIONCANCELEDEXCEPTION_GET_CANCELLATIONTOKEN_OFFSET))(this);
		}

		::System::Void set_CancellationToken(::System::Threading::CancellationToken value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_OPERATIONCANCELEDEXCEPTION_SET_CANCELLATIONTOKEN_OFFSET))(this, value);
		}
	};
}
