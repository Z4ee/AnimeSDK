#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class ResolveEventArgs; }
namespace System::Reflection { class Assembly; }

#define SYSTEM_RESOLVEEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1875F990)
#define SYSTEM_RESOLVEEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1875F9D0)
#define SYSTEM_RESOLVEEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1875F980)
#define SYSTEM_RESOLVEEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1875F890)

namespace System
{
	inline static constexpr unsigned int ResolveEventHandler_TypeDefinitionIndex = 417;

	class ResolveEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RESOLVEEVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Reflection::Assembly* Invoke(::System::Object* a1, ::System::ResolveEventArgs* a2)
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID, ::System::Object*, ::System::ResolveEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_RESOLVEEVENTHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::ResolveEventArgs* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ResolveEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RESOLVEEVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Reflection::Assembly* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_RESOLVEEVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
