#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Threading { class CancellationCallbackInfo; }
namespace System::Threading { template <typename T> class SparselyPopulatedArrayFragment_1; }

#define SYSTEM_THREADING_CANCELLATIONCALLBACKCOREWORKARGUMENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x351680)

namespace System::Threading
{
	inline static constexpr unsigned int CancellationCallbackCoreWorkArguments_TypeDefinitionIndex = 787;

	struct alignas(8) CancellationCallbackCoreWorkArguments
	{
		::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>* m_currArrayFragment; // 0x10
		::System::Int32 m_currArrayIndex; // 0x18

		::System::Void _ctor(::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>* currArrayFragment, ::System::Int32 currArrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONCALLBACKCOREWORKARGUMENTS__CTOR_OFFSET))(this, currArrayFragment, currArrayIndex);
		}
	};
}
