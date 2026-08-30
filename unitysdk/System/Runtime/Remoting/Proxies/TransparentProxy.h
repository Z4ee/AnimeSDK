#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/RuntimeRemoteClassHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class RuntimeType; }
namespace System::Runtime::Remoting::Contexts { class Context; }
namespace System::Runtime::Remoting::Proxies { class RealProxy; }

#define SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_GETPROXYTYPE_OFFSET UNITYSDK_OFFSET(0x1BDF51C0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_GET_ISCONTEXTBOUNDOBJECT_OFFSET UNITYSDK_OFFSET(0x1BDF5230)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_GET_TARGETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1BDF5320)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_INCURRENTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1BDF5340)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_LOADREMOTEFIELDNEW_OFFSET UNITYSDK_OFFSET(0x1BDF53A0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_STOREREMOTEFIELD_OFFSET UNITYSDK_OFFSET(0x1BDF5880)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDF5D90)

namespace System::Runtime::Remoting::Proxies
{
	inline static constexpr unsigned int TransparentProxy_TypeDefinitionIndex = 1235;

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

		::System::Object* LoadRemoteFieldNew(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_LOADREMOTEFIELDNEW_OFFSET))(this, a1, a2);
		}

		::System::Void StoreRemoteField(::System::IntPtr a1, ::System::IntPtr a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_STOREREMOTEFIELD_OFFSET))(this, a1, a2, a3);
		}
	};
}
