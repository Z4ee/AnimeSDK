#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_OPERATIONCANCELEDEXCEPTION_GET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x1AFBB6F0)
#define SYSTEM_OPERATIONCANCELEDEXCEPTION_SET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x1AFBB700)
#define SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AFBB780)
#define SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AFBB7F0)
#define SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1AFBB860)
#define SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFBB710)

namespace System
{
	inline static constexpr unsigned int OperationCanceledException_TypeDefinitionIndex = 308;

	class OperationCanceledException : public ::System::SystemException
	{
	public:
		::System::Threading::CancellationToken _cancellationToken; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Threading::CancellationToken get_CancellationToken()
		{
			return ((::System::Threading::CancellationToken(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATIONCANCELEDEXCEPTION_GET_CANCELLATIONTOKEN_OFFSET))(this);
		}

		::System::Void set_CancellationToken(::System::Threading::CancellationToken a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_OPERATIONCANCELEDEXCEPTION_SET_CANCELLATIONTOKEN_OFFSET))(this, a1);
		}
	};
}
