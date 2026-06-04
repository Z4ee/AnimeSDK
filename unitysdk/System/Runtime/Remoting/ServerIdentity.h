#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/Identity.h"

namespace System { class MarshalByRefObject; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Remoting { class ObjRef; }
namespace System::Runtime::Remoting::Contexts { class Context; }
namespace System::Runtime::Remoting::Lifetime { class ILease; }
namespace System::Runtime::Remoting::Lifetime { class Lease; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageCtrl; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_ATTACHSERVEROBJECT_OFFSET UNITYSDK_OFFSET(0x187A26B0)
#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_CREATEOBJREF_OFFSET UNITYSDK_OFFSET(0x187A1140)
#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_DISPOSESERVEROBJECT_OFFSET UNITYSDK_OFFSET(0x187A2E90)
#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x187A2EF0)
#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_GET_LEASE_OFFSET UNITYSDK_OFFSET(0x187A2EE0)
#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x187A2E30)
#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_ONLIFETIMEEXPIRED_OFFSET UNITYSDK_OFFSET(0x187A2E40)
#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x187A2F00)
#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_STARTTRACKINGLIFETIME_OFFSET UNITYSDK_OFFSET(0x187A0FC0)
#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x187A2E20)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ServerIdentity_TypeDefinitionIndex = 1211;

	class ServerIdentity : public ::System::Runtime::Remoting::Identity
	{
	public:
		::System::Runtime::Remoting::Lifetime::Lease* _lease; // 0x48
		::System::MarshalByRefObject* _serverObject; // 0x50
		::System::Runtime::Remoting::Contexts::Context* _context; // 0x58
		::System::Runtime::Remoting::Messaging::IMessageSink* _serverSink; // 0x60
		::System::Type* _objectType; // 0x68

		::System::Void _ctor(::System::String* a1, ::System::Runtime::Remoting::Contexts::Context* a2, ::System::Type* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Runtime::Remoting::Contexts::Context*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Type* get_ObjectType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_GET_OBJECTTYPE_OFFSET))(this);
		}

		::System::Void StartTrackingLifetime(::System::Runtime::Remoting::Lifetime::ILease* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Lifetime::ILease*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_STARTTRACKINGLIFETIME_OFFSET))(this, a1);
		}

		::System::Void OnLifetimeExpired()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_ONLIFETIMEEXPIRED_OFFSET))(this);
		}

		::System::Runtime::Remoting::ObjRef* CreateObjRef(::System::Type* a1)
		{
			return ((::System::Runtime::Remoting::ObjRef*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_CREATEOBJREF_OFFSET))(this, a1);
		}

		::System::Void AttachServerObject(::System::MarshalByRefObject* a1, ::System::Runtime::Remoting::Contexts::Context* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::MarshalByRefObject*, ::System::Runtime::Remoting::Contexts::Context*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_ATTACHSERVEROBJECT_OFFSET))(this, a1, a2);
		}

		::System::Runtime::Remoting::Lifetime::Lease* get_Lease()
		{
			return ((::System::Runtime::Remoting::Lifetime::Lease*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_GET_LEASE_OFFSET))(this);
		}

		::System::Runtime::Remoting::Contexts::Context* get_Context()
		{
			return ((::System::Runtime::Remoting::Contexts::Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::System::Runtime::Remoting::Contexts::Context* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Contexts::Context*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_SET_CONTEXT_OFFSET))(this, a1);
		}

		::System::Void DisposeServerObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_DISPOSESERVEROBJECT_OFFSET))(this);
		}
	};
}
