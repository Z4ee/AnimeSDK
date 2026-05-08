#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_OPERATIONCANCELEDEXCEPTION_GET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x1AC54300)
#define SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AC543D0)
#define SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AC54460)
#define SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1AC544F0)
#define SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1AC545C0)
#define SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1AC54660)
#define SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1AC54700)
#define SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC54310)

namespace System
{
	inline static constexpr unsigned int OperationCanceledException_TypeDefinitionIndex = 299;

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

		::System::Void _ctor_2(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_2_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_3(::System::Threading::CancellationToken token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_3_OFFSET))(this, token);
		}

		::System::Void _ctor_4(::System::String* message, ::System::Threading::CancellationToken token)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_4_OFFSET))(this, message, token);
		}

		::System::Void _ctor_5(::System::String* message, ::System::Exception* innerException, ::System::Threading::CancellationToken token)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_5_OFFSET))(this, message, innerException, token);
		}

		::System::Void _ctor_6(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_OPERATIONCANCELEDEXCEPTION__CTOR_6_OFFSET))(this, info, context);
		}

		::System::Threading::CancellationToken get_CancellationToken()
		{
			return ((::System::Threading::CancellationToken(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATIONCANCELEDEXCEPTION_GET_CANCELLATIONTOKEN_OFFSET))(this);
		}
	};
}
