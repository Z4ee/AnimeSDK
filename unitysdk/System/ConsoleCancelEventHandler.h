#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class ConsoleCancelEventArgs; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_CONSOLECANCELEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1627C040)
#define SYSTEM_CONSOLECANCELEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1627C080)
#define SYSTEM_CONSOLECANCELEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1627B240)
#define SYSTEM_CONSOLECANCELEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1627C020)

namespace System
{
	inline static constexpr unsigned int ConsoleCancelEventHandler_TypeDefinitionIndex = 213;

	class ConsoleCancelEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLECANCELEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::ConsoleCancelEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ConsoleCancelEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLECANCELEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::ConsoleCancelEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ConsoleCancelEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLECANCELEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLECANCELEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
