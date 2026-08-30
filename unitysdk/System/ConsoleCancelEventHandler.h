#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class ConsoleCancelEventArgs; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_CONSOLECANCELEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BC89FF0)
#define SYSTEM_CONSOLECANCELEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BC8A030)
#define SYSTEM_CONSOLECANCELEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BC89B40)
#define SYSTEM_CONSOLECANCELEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC89F00)

namespace System
{
	inline static constexpr unsigned int ConsoleCancelEventHandler_TypeDefinitionIndex = 212;

	class ConsoleCancelEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLECANCELEVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::ConsoleCancelEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ConsoleCancelEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLECANCELEVENTHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::ConsoleCancelEventArgs* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ConsoleCancelEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLECANCELEVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLECANCELEVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
