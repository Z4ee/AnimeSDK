#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_HOPTOTHREADPOOLAWAITABLE_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x2D770)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_HOPTOTHREADPOOLAWAITABLE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1020)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_HOPTOTHREADPOOLAWAITABLE_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x136CD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_HOPTOTHREADPOOLAWAITABLE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x383C7B0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CryptoStream_HopToThreadPoolAwaitable_TypeDefinitionIndex = 1006;

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

		::System::Void OnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_HOPTOTHREADPOOLAWAITABLE_ONCOMPLETED_OFFSET))(this, a1);
		}

		::System::Void GetResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_HOPTOTHREADPOOLAWAITABLE_GETRESULT_OFFSET))(this);
		}
	};
}
