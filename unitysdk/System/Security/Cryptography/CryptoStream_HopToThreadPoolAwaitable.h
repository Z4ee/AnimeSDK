#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_HOPTOTHREADPOOLAWAITABLE_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x29C50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_HOPTOTHREADPOOLAWAITABLE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1020)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_HOPTOTHREADPOOLAWAITABLE_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x7BBA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_HOPTOTHREADPOOLAWAITABLE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x20DAF50)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CryptoStream_HopToThreadPoolAwaitable_TypeDefinitionIndex = 1005;

	struct alignas(1) CryptoStream_HopToThreadPoolAwaitable
	{
		::System::Security::Cryptography::CryptoStream_HopToThreadPoolAwaitable GetAwaiter()
		{
			return ((::System::Security::Cryptography::CryptoStream_HopToThreadPoolAwaitable(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_HOPTOTHREADPOOLAWAITABLE_GETAWAITER_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_HOPTOTHREADPOOLAWAITABLE_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* continuation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_HOPTOTHREADPOOLAWAITABLE_ONCOMPLETED_OFFSET))(this, continuation);
		}

		::System::Void GetResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_HOPTOTHREADPOOLAWAITABLE_GETRESULT_OFFSET))(this);
		}
	};
}
