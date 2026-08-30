#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace System { template <typename T> class Action_1; }

#define SYSTEM_THREADING_CANCELLATIONTOKENEXTENSIONS_UNSAFEREGISTER_OFFSET UNITYSDK_OFFSET(0x1F0154A0)

namespace System::Threading
{
	inline static constexpr unsigned int CancellationTokenExtensions_TypeDefinitionIndex = 40065;

	class CancellationTokenExtensions : public ::System::Object
	{
	public:
		static ::System::Threading::CancellationTokenRegistration UnsafeRegister(::System::Threading::CancellationToken a1, ::System::Action_1<::System::Object*>* a2, ::System::Object* a3)
		{
			return ((::System::Threading::CancellationTokenRegistration(*)(::System::Threading::CancellationToken, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENEXTENSIONS_UNSAFEREGISTER_OFFSET))(a1, a2, a3);
		}
	};
}
