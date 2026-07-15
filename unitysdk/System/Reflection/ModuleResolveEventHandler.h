#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class ResolveEventArgs; }
namespace System::Reflection { class Module; }

#define SYSTEM_REFLECTION_MODULERESOLVEEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AFD3D30)
#define SYSTEM_REFLECTION_MODULERESOLVEEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AFD3D70)
#define SYSTEM_REFLECTION_MODULERESOLVEEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AFD3D20)
#define SYSTEM_REFLECTION_MODULERESOLVEEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD3C30)

namespace System::Reflection
{
	inline static constexpr unsigned int ModuleResolveEventHandler_TypeDefinitionIndex = 608;

	class ModuleResolveEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULERESOLVEEVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Reflection::Module* Invoke(::System::Object* a1, ::System::ResolveEventArgs* a2)
		{
			return ((::System::Reflection::Module*(*)(::PVOID, ::System::Object*, ::System::ResolveEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULERESOLVEEVENTHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::ResolveEventArgs* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ResolveEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULERESOLVEEVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Reflection::Module* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Reflection::Module*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULERESOLVEEVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
