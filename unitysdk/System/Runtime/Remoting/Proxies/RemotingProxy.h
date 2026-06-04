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

#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_ACTIVATEREMOTEOBJECT_OFFSET UNITYSDK_OFFSET(0x1879A8A0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_ATTACHIDENTITY_OFFSET UNITYSDK_OFFSET(0x1879B740)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_CANCASTTO_OFFSET UNITYSDK_OFFSET(0x1879BBB0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1879BFB0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x1879B9A0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_INVOKE_OFFSET UNITYSDK_OFFSET(0x18795D70)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1879C2D0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18799490)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1879B6E0)

namespace System::Runtime::Remoting::Proxies
{
	inline static constexpr unsigned int RemotingProxy_TypeDefinitionIndex = 1228;

	class RemotingProxy : public ::System::Runtime::Remoting::Proxies::RealProxy
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet__cache_GetHashCodeMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(RemotingProxy_TypeDefinitionIndex)->GetStaticField(0xC1D0);
		}
		static ::System::Reflection::MethodInfo** StaticGet__cache_GetTypeMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(RemotingProxy_TypeDefinitionIndex)->GetStaticField(0xC1D8);
		}
		::System::Runtime::Remoting::Messaging::ConstructionCall* _ctorCall; // 0x50
		::System::Runtime::Remoting::Messaging::IMessageSink* _sink; // 0x58
		::System::Boolean _hasEnvoySink; // 0x60

		::System::Void _ctor(::System::Type* a1, ::System::Runtime::Remoting::ClientIdentity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Runtime::Remoting::ClientIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Type* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY__CCTOR_OFFSET))();
		}

		::System::Runtime::Remoting::Messaging::IMessage* Invoke(::System::Runtime::Remoting::Messaging::IMessage* a1)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_INVOKE_OFFSET))(this, a1);
		}

		::System::Void AttachIdentity(::System::Runtime::Remoting::Identity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Identity*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_ATTACHIDENTITY_OFFSET))(this, a1);
		}

		::System::Runtime::Remoting::Messaging::IMessage* ActivateRemoteObject(::System::Runtime::Remoting::Messaging::IMethodMessage* a1)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMethodMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_ACTIVATEREMOTEOBJECT_OFFSET))(this, a1);
		}

		::System::String* get_TypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_GET_TYPENAME_OFFSET))(this);
		}

		::System::Boolean CanCastTo(::System::Type* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_CANCASTTO_OFFSET))(this, a1, a2);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_FINALIZE_OFFSET))(this);
		}
	};
}
