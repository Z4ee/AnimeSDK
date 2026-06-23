#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/Identity.h"

namespace System { class MarshalByRefObject; }
namespace System { class String; }
namespace System { class Type; }
namespace System { class WeakReference; }
namespace System::Runtime::Remoting { class ObjRef; }

#define SYSTEM_RUNTIME_REMOTING_CLIENTIDENTITY_CREATEOBJREF_OFFSET UNITYSDK_OFFSET(0x1CD91710)
#define SYSTEM_RUNTIME_REMOTING_CLIENTIDENTITY_GET_CLIENTPROXY_OFFSET UNITYSDK_OFFSET(0x1CD91630)
#define SYSTEM_RUNTIME_REMOTING_CLIENTIDENTITY_GET_TARGETURI_OFFSET UNITYSDK_OFFSET(0x1CD91720)
#define SYSTEM_RUNTIME_REMOTING_CLIENTIDENTITY_SET_CLIENTPROXY_OFFSET UNITYSDK_OFFSET(0x1CD916B0)
#define SYSTEM_RUNTIME_REMOTING_CLIENTIDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD915F0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ClientIdentity_TypeDefinitionIndex = 1245;

	class ClientIdentity : public ::System::Runtime::Remoting::Identity
	{
	public:
		::System::WeakReference* _proxyReference; // 0x48

		::System::Void _ctor(::System::String* objectUri, ::System::Runtime::Remoting::ObjRef* objRef)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Runtime::Remoting::ObjRef*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTIDENTITY__CTOR_OFFSET))(this, objectUri, objRef);
		}

		::System::MarshalByRefObject* get_ClientProxy()
		{
			return ((::System::MarshalByRefObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTIDENTITY_GET_CLIENTPROXY_OFFSET))(this);
		}

		::System::Void set_ClientProxy(::System::MarshalByRefObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::MarshalByRefObject*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTIDENTITY_SET_CLIENTPROXY_OFFSET))(this, value);
		}

		::System::Runtime::Remoting::ObjRef* CreateObjRef(::System::Type* requestedType)
		{
			return ((::System::Runtime::Remoting::ObjRef*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTIDENTITY_CREATEOBJREF_OFFSET))(this, requestedType);
		}

		::System::String* get_TargetUri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTIDENTITY_GET_TARGETURI_OFFSET))(this);
		}
	};
}
