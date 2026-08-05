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

#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_ATTACHIDENTITY_OFFSET UNITYSDK_OFFSET(0x1DF3DD90)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1DF3E130)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x1DF3DFF0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DF3D3B0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF3E210)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF3D370)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF3D320)

namespace System::Runtime::Remoting::Proxies
{
	inline static constexpr unsigned int RemotingProxy_TypeDefinitionIndex = 1272;

	class RemotingProxy : public ::System::Runtime::Remoting::Proxies::RealProxy
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet__cache_GetTypeMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(RemotingProxy_TypeDefinitionIndex)->GetStaticField(0x1230);
		}
		static ::System::Reflection::MethodInfo** StaticGet__cache_GetHashCodeMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(RemotingProxy_TypeDefinitionIndex)->GetStaticField(0x1238);
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

		::System::String* get_TypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_GET_TYPENAME_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_FINALIZE_OFFSET))(this);
		}
	};
}
