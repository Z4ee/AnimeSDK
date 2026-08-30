#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Security/Cryptography/CryptoStream_HopToThreadPoolAwaitable.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Security::Cryptography { class CryptoStream; }
namespace System::Threading { class SemaphoreSlim; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM__READASYNCINTERNAL_D__34_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3B02680)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM__READASYNCINTERNAL_D__34_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x3B02690)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CryptoStream__ReadAsyncInternal_d__34_TypeDefinitionIndex = 1014;

	struct alignas(8) CryptoStream__ReadAsyncInternal_d__34
	{
		::Il2CppArray<::System::Byte>* buffer; // 0x10
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2; // 0x18
		::System::Threading::CancellationToken cancellationToken; // 0x28
		::System::Threading::SemaphoreSlim* _sem_5__4; // 0x30
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Int32> __u__3; // 0x38
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Int32> __t__builder; // 0x48
		::System::Security::Cryptography::CryptoStream* __4__this; // 0x60
		::Il2CppArray<::System::Byte>* _tempInputBuffer_5__1; // 0x68
		::System::Int32 count; // 0x70
		::System::Int32 __7__wrap1; // 0x74
		::System::Int32 __1__state; // 0x78
		::System::Int32 _currentOutputIndex_5__2; // 0x7C
		::System::Security::Cryptography::CryptoStream_HopToThreadPoolAwaitable __u__1; // 0x80
		::System::Int32 offset; // 0x84
		::System::Int32 _bytesToDeliver_5__3; // 0x88

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM__READASYNCINTERNAL_D__34_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM__READASYNCINTERNAL_D__34_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
