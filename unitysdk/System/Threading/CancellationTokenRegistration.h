#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/SparselyPopulatedArrayAddInfo_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Threading { class CancellationCallbackInfo; }

#define SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3B7B6B0)
#define SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B7B730)
#define SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B7B6C0)
#define SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B7B760)
#define SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_TRYDEREGISTER_OFFSET UNITYSDK_OFFSET(0x3B7B650)
#define SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION__CTOR_OFFSET UNITYSDK_OFFSET(0x6B7C80)

namespace System::Threading
{
	inline static constexpr unsigned int CancellationTokenRegistration_TypeDefinitionIndex = 799;

	struct alignas(8) CancellationTokenRegistration
	{
		::System::Threading::CancellationCallbackInfo* m_callbackInfo; // 0x10
		::System::Threading::SparselyPopulatedArrayAddInfo_1<::System::Threading::CancellationCallbackInfo*> m_registrationInfo; // 0x18

		::System::Void _ctor(::System::Threading::CancellationCallbackInfo* a1, ::System::Threading::SparselyPopulatedArrayAddInfo_1<::System::Threading::CancellationCallbackInfo*> a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationCallbackInfo*, ::System::Threading::SparselyPopulatedArrayAddInfo_1<::System::Threading::CancellationCallbackInfo*>))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryDeregister()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_TRYDEREGISTER_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Threading::CancellationTokenRegistration a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::CancellationTokenRegistration))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_GETHASHCODE_OFFSET))(this);
		}
	};
}
