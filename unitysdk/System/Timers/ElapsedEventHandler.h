#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Timers { class ElapsedEventArgs; }

#define SYSTEM_TIMERS_ELAPSEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18762520)
#define SYSTEM_TIMERS_ELAPSEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18762560)
#define SYSTEM_TIMERS_ELAPSEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x18761FA0)
#define SYSTEM_TIMERS_ELAPSEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18761F80)

namespace System::Timers
{
	inline static constexpr unsigned int ElapsedEventHandler_TypeDefinitionIndex = 2481;

	class ElapsedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_ELAPSEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Timers::ElapsedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Timers::ElapsedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_ELAPSEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Timers::ElapsedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Timers::ElapsedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_ELAPSEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_ELAPSEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
