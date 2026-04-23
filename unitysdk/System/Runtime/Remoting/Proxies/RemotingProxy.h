#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/Proxies/RealProxy.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }
namespace System::Runtime::Remoting { class ClientIdentity; }
namespace System::Runtime::Remoting { class Identity; }
namespace System::Runtime::Remoting::Messaging { class ConstructionCall; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }
namespace System::Runtime::Remoting::Messaging { class IMethodMessage; }

#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_ACTIVATEREMOTEOBJECT_OFFSET UNITYSDK_OFFSET(0x179EA200)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_ATTACHIDENTITY_OFFSET UNITYSDK_OFFSET(0x179EB110)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_CANCASTTO_OFFSET UNITYSDK_OFFSET(0x179EB5A0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x179EB9A0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x179EB380)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_INVOKE_OFFSET UNITYSDK_OFFSET(0x179E57A0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x179EBCC0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179E8EB0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x179EB0B0)

namespace System::Runtime::Remoting::Proxies
{
	inline static constexpr unsigned int RemotingProxy_TypeDefinitionIndex = 1229;

	class RemotingProxy : public ::System::Runtime::Remoting::Proxies::RealProxy
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet__cache_GetTypeMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(RemotingProxy_TypeDefinitionIndex)->GetStaticField(0xC090);
		}
		static ::System::Reflection::MethodInfo** StaticGet__cache_GetHashCodeMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(RemotingProxy_TypeDefinitionIndex)->GetStaticField(0xC098);
		}
		::System::Runtime::Remoting::Messaging::IMessageSink* _sink; // 0x50
		::System::Runtime::Remoting::Messaging::ConstructionCall* _ctorCall; // 0x58
		::System::Boolean _hasEnvoySink; // 0x60

		::System::Void _ctor(::System::Type* type, ::System::Runtime::Remoting::ClientIdentity* identity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Runtime::Remoting::ClientIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY__CTOR_OFFSET))(this, type, identity);
		}

		::System::Void _ctor_1(::System::Type* type, ::System::String* activationUrl, ::Il2CppArray<::System::Object*>* activationAttributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY__CTOR_1_OFFSET))(this, type, activationUrl, activationAttributes);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY__CCTOR_OFFSET))();
		}

		::System::Runtime::Remoting::Messaging::IMessage* Invoke(::System::Runtime::Remoting::Messaging::IMessage* request)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_INVOKE_OFFSET))(this, request);
		}

		::System::Void AttachIdentity(::System::Runtime::Remoting::Identity* identity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Identity*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_ATTACHIDENTITY_OFFSET))(this, identity);
		}

		::System::Runtime::Remoting::Messaging::IMessage* ActivateRemoteObject(::System::Runtime::Remoting::Messaging::IMethodMessage* request)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMethodMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_ACTIVATEREMOTEOBJECT_OFFSET))(this, request);
		}

		::System::String* get_TypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_GET_TYPENAME_OFFSET))(this);
		}

		::System::Boolean CanCastTo(::System::Type* fromType, ::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_CANCASTTO_OFFSET))(this, fromType, o);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_FINALIZE_OFFSET))(this);
		}
	};
}
