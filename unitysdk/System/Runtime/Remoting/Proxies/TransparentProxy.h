#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/RuntimeRemoteClassHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class RuntimeType; }
namespace System::Runtime::Remoting::Contexts { class Context; }
namespace System::Runtime::Remoting::Proxies { class RealProxy; }

#define SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_GETPROXYTYPE_OFFSET UNITYSDK_OFFSET(0x163BF540)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_GET_ISCONTEXTBOUNDOBJECT_OFFSET UNITYSDK_OFFSET(0x163BF5B0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_GET_TARGETCONTEXT_OFFSET UNITYSDK_OFFSET(0x163BF630)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_INCURRENTCONTEXT_OFFSET UNITYSDK_OFFSET(0x163BF650)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_LOADREMOTEFIELDNEW_OFFSET UNITYSDK_OFFSET(0x163BF720)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_STOREREMOTEFIELD_OFFSET UNITYSDK_OFFSET(0x163BFC30)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x163C0170)

namespace System::Runtime::Remoting::Proxies
{
	inline static constexpr unsigned int TransparentProxy_TypeDefinitionIndex = 1225;

	class TransparentProxy : public ::System::Object
	{
	public:
		::System::Runtime::Remoting::Proxies::RealProxy* _rp; // 0x10
		::Mono::RuntimeRemoteClassHandle _class; // 0x18
		::System::Boolean _custom_type_info; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY__CTOR_OFFSET))(this);
		}

		::System::RuntimeType* GetProxyType()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_GETPROXYTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsContextBoundObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_GET_ISCONTEXTBOUNDOBJECT_OFFSET))(this);
		}

		::System::Runtime::Remoting::Contexts::Context* get_TargetContext()
		{
			return ((::System::Runtime::Remoting::Contexts::Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_GET_TARGETCONTEXT_OFFSET))(this);
		}

		::System::Boolean InCurrentContext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_INCURRENTCONTEXT_OFFSET))(this);
		}

		::System::Object* LoadRemoteFieldNew(::System::IntPtr classPtr, ::System::IntPtr fieldPtr)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_LOADREMOTEFIELDNEW_OFFSET))(this, classPtr, fieldPtr);
		}

		::System::Void StoreRemoteField(::System::IntPtr classPtr, ::System::IntPtr fieldPtr, ::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_STOREREMOTEFIELD_OFFSET))(this, classPtr, fieldPtr, arg);
		}
	};
}
