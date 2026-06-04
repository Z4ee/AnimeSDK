#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::IO { class Stream; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define SYSTEM_IO_STREAM__COPYTOASYNCINTERNAL_D__27_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3839940)
#define SYSTEM_IO_STREAM__COPYTOASYNCINTERNAL_D__27_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BCB5B0)

namespace System::IO
{
	inline static constexpr unsigned int Stream__CopyToAsyncInternal_d__27_TypeDefinitionIndex = 688;

	struct alignas(8) Stream__CopyToAsyncInternal_d__27
	{
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x10
		::Il2CppArray<::System::Byte>* _buffer_5__1; // 0x28
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1; // 0x30
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Int32> __u__2; // 0x40
		::System::IO::Stream* destination; // 0x50
		::System::Threading::CancellationToken cancellationToken; // 0x58
		::System::IO::Stream* __4__this; // 0x60
		::System::Int32 _bytesRead_5__2; // 0x68
		::System::Int32 bufferSize; // 0x6C
		::System::Int32 __1__state; // 0x70

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM__COPYTOASYNCINTERNAL_D__27_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM__COPYTOASYNCINTERNAL_D__27_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
