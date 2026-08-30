#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class IOAsyncResult; }
namespace System { class Object; }

#define SYSTEM_IOASYNCCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AB39C70)
#define SYSTEM_IOASYNCCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AB39CA0)
#define SYSTEM_IOASYNCCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AB39C60)
#define SYSTEM_IOASYNCCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB39B70)

namespace System
{
	inline static constexpr unsigned int IOAsyncCallback_TypeDefinitionIndex = 2487;

	class IOAsyncCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IOAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IOAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::IOAsyncResult* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IOAsyncResult*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
