#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_HOPTOTHREADPOOLAWAITABLE_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x324690)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_HOPTOTHREADPOOLAWAITABLE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x983EE0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CryptoStream_HopToThreadPoolAwaitable_TypeDefinitionIndex = 1052;

	struct alignas(1) CryptoStream_HopToThreadPoolAwaitable
	{
		::System::Security::Cryptography::CryptoStream_HopToThreadPoolAwaitable GetAwaiter()
		{
			return ((::System::Security::Cryptography::CryptoStream_HopToThreadPoolAwaitable(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_HOPTOTHREADPOOLAWAITABLE_GETAWAITER_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* continuation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_HOPTOTHREADPOOLAWAITABLE_ONCOMPLETED_OFFSET))(this, continuation);
		}
	};
}
