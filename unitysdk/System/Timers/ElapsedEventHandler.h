#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Timers { class ElapsedEventArgs; }

#define SYSTEM_TIMERS_ELAPSEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EA126A0)
#define SYSTEM_TIMERS_ELAPSEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EA126E0)
#define SYSTEM_TIMERS_ELAPSEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EA12690)
#define SYSTEM_TIMERS_ELAPSEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA125A0)

namespace System::Timers
{
	inline static constexpr unsigned int ElapsedEventHandler_TypeDefinitionIndex = 2493;

	class ElapsedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_ELAPSEDEVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::Timers::ElapsedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Timers::ElapsedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_ELAPSEDEVENTHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::Timers::ElapsedEventArgs* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Timers::ElapsedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_ELAPSEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_ELAPSEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
