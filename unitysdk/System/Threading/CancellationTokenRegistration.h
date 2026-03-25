#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/SparselyPopulatedArrayAddInfo_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Threading { class CancellationCallbackInfo; }

#define SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x20CD750)
#define SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20CD7D0)
#define SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_EQUALS_OFFSET UNITYSDK_OFFSET(0x20CD760)
#define SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20CD800)
#define SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_TRYDEREGISTER_OFFSET UNITYSDK_OFFSET(0x20CD6E0)
#define SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1596350)

namespace System::Threading
{
	inline static constexpr unsigned int CancellationTokenRegistration_TypeDefinitionIndex = 795;

	struct alignas(8) CancellationTokenRegistration
	{
		::System::Threading::CancellationCallbackInfo* m_callbackInfo; // 0x10
		::System::Threading::SparselyPopulatedArrayAddInfo_1<::System::Threading::CancellationCallbackInfo*> m_registrationInfo; // 0x18

		::System::Void _ctor(::System::Threading::CancellationCallbackInfo* callbackInfo, ::System::Threading::SparselyPopulatedArrayAddInfo_1<::System::Threading::CancellationCallbackInfo*> registrationInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationCallbackInfo*, ::System::Threading::SparselyPopulatedArrayAddInfo_1<::System::Threading::CancellationCallbackInfo*>))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION__CTOR_OFFSET))(this, callbackInfo, registrationInfo);
		}

		::System::Boolean TryDeregister()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_TRYDEREGISTER_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::System::Threading::CancellationTokenRegistration other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::CancellationTokenRegistration))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_GETHASHCODE_OFFSET))(this);
		}
	};
}
