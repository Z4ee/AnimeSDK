#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class EventArgs; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_EVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BD00610)
#define SYSTEM_EVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BD00650)
#define SYSTEM_EVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BD00600)
#define SYSTEM_EVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD00510)

namespace System
{
	inline static constexpr unsigned int EventHandler_TypeDefinitionIndex = 242;

	class EventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_EVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::EventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_EVENTHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::EventArgs* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::EventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_EVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_EVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
