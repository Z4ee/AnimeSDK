#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Security/Cryptography/CryptoStream_HopToThreadPoolAwaitable.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Security::Cryptography { class CryptoStream; }
namespace System::Threading { class SemaphoreSlim; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM__WRITEASYNCINTERNAL_D__37_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3B026A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM__WRITEASYNCINTERNAL_D__37_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1B79770)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CryptoStream__WriteAsyncInternal_d__37_TypeDefinitionIndex = 1015;

	struct alignas(8) CryptoStream__WriteAsyncInternal_d__37
	{
		::Il2CppArray<::System::Byte>* buffer; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x18
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x20
		::System::Threading::SemaphoreSlim* _sem_5__4; // 0x38
		::System::Security::Cryptography::CryptoStream* __4__this; // 0x40
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2; // 0x48
		::System::Int32 _currentInputIndex_5__2; // 0x58
		::System::Int32 offset; // 0x5C
		::System::Int32 _bytesToWrite_5__1; // 0x60
		::System::Int32 __1__state; // 0x64
		::System::Int32 count; // 0x68
		::System::Security::Cryptography::CryptoStream_HopToThreadPoolAwaitable __u__1; // 0x6C
		::System::Int32 _numWholeBlocksInBytes_5__3; // 0x70

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM__WRITEASYNCINTERNAL_D__37_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM__WRITEASYNCINTERNAL_D__37_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
