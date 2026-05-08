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

#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_ATTACHSERVEROBJECT_OFFSET UNITYSDK_OFFSET(0x18BA5A80)
#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_CREATEOBJREF_OFFSET UNITYSDK_OFFSET(0x18BA3F50)
#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_DISPOSESERVEROBJECT_OFFSET UNITYSDK_OFFSET(0x18BA6040)
#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_ONLIFETIMEEXPIRED_OFFSET UNITYSDK_OFFSET(0x18BA5FF0)
#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_STARTTRACKINGLIFETIME_OFFSET UNITYSDK_OFFSET(0x18BA3D90)
#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA5FE0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ServerIdentity_TypeDefinitionIndex = 1256;

	class ServerIdentity : public ::System::Runtime::Remoting::Identity
	{
	public:
		::System::MarshalByRefObject* _serverObject; // 0x48
		::System::Runtime::Remoting::Contexts::Context* _context; // 0x50
		::System::Runtime::Remoting::Lifetime::Lease* _lease; // 0x58
		::System::Type* _objectType; // 0x60
		::System::Runtime::Remoting::Messaging::IMessageSink* _serverSink; // 0x68

		::System::Void _ctor(::System::String* objectUri, ::System::Runtime::Remoting::Contexts::Context* context, ::System::Type* objectType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Runtime::Remoting::Contexts::Context*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY__CTOR_OFFSET))(this, objectUri, context, objectType);
		}

		::System::Void StartTrackingLifetime(::System::Runtime::Remoting::Lifetime::ILease* lease)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Lifetime::ILease*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_STARTTRACKINGLIFETIME_OFFSET))(this, lease);
		}

		::System::Void OnLifetimeExpired()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_ONLIFETIMEEXPIRED_OFFSET))(this);
		}

		::System::Runtime::Remoting::ObjRef* CreateObjRef(::System::Type* requestedType)
		{
			return ((::System::Runtime::Remoting::ObjRef*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_CREATEOBJREF_OFFSET))(this, requestedType);
		}

		::System::Void AttachServerObject(::System::MarshalByRefObject* serverObject, ::System::Runtime::Remoting::Contexts::Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::MarshalByRefObject*, ::System::Runtime::Remoting::Contexts::Context*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_ATTACHSERVEROBJECT_OFFSET))(this, serverObject, context);
		}

		::System::Void DisposeServerObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_DISPOSESERVEROBJECT_OFFSET))(this);
		}
	};
}
