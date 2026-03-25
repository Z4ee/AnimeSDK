#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class EventArgs; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_EVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x162E8A90)
#define SYSTEM_EVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x162E8AD0)
#define SYSTEM_EVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x162E8510)
#define SYSTEM_EVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x162BB350)

namespace System
{
	inline static constexpr unsigned int EventHandler_TypeDefinitionIndex = 243;

	class EventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_EVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_EVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::EventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::EventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_EVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_EVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
