#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class MarshalByRefObject; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Remoting { class ClientIdentity; }
namespace System::Runtime::Remoting { class Identity; }
namespace System::Runtime::Remoting::Contexts { class Context; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMethodReturnMessage; }
namespace System::Runtime::Remoting::Messaging { class MonoMethodMessage; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_ATTACHSERVER_OFFSET UNITYSDK_OFFSET(0x179EABA0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETAPPDOMAINTARGET_OFFSET UNITYSDK_OFFSET(0x179EABC0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x179E94C0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETPROXIEDTYPE_OFFSET UNITYSDK_OFFSET(0x179E9400)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETTRANSPARENTPROXY_OFFSET UNITYSDK_OFFSET(0x179E8EF0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GET_OBJECTIDENTITY_OFFSET UNITYSDK_OFFSET(0x179E9520)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_INTERNALGETPROXYTYPE_OFFSET UNITYSDK_OFFSET(0x179E93F0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_INTERNALGETTRANSPARENTPROXY_OFFSET UNITYSDK_OFFSET(0x179EAB90)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_PRIVATEINVOKE_OFFSET UNITYSDK_OFFSET(0x179E9540)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_PROCESSRESPONSE_OFFSET UNITYSDK_OFFSET(0x179EA2B0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_SETTARGETDOMAIN_OFFSET UNITYSDK_OFFSET(0x179EABB0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_SET_OBJECTIDENTITY_OFFSET UNITYSDK_OFFSET(0x179E9530)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179E9290)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x179E93D0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x179E92A0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x179E9280)

namespace System::Runtime::Remoting::Proxies
{
	inline static constexpr unsigned int RealProxy_TypeDefinitionIndex = 1228;

	class RealProxy : public ::System::Object
	{
	public:
		::System::Type* class_to_proxy; // 0x10
		::System::Runtime::Remoting::Contexts::Context* _targetContext; // 0x18
		::System::MarshalByRefObject* _server; // 0x20
		::System::Int32 _targetDomainId; // 0x28
		::System::String* _targetUri; // 0x30
		::System::Runtime::Remoting::Identity* _objectIdentity; // 0x38
		::System::Object* _objTP; // 0x40
		::System::Object* _stubData; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Type* classToProxy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY__CTOR_1_OFFSET))(this, classToProxy);
		}

		::System::Void _ctor_2(::System::Type* classToProxy, ::System::Runtime::Remoting::ClientIdentity* identity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Runtime::Remoting::ClientIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY__CTOR_2_OFFSET))(this, classToProxy, identity);
		}

		::System::Void _ctor_3(::System::Type* classToProxy, ::System::IntPtr stub, ::System::Object* stubData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::IntPtr, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY__CTOR_3_OFFSET))(this, classToProxy, stub, stubData);
		}

		static ::System::Type* InternalGetProxyType(::System::Object* transparentProxy)
		{
			return ((::System::Type*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_INTERNALGETPROXYTYPE_OFFSET))(transparentProxy);
		}

		::System::Type* GetProxiedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETPROXIEDTYPE_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Runtime::Remoting::Identity* get_ObjectIdentity()
		{
			return ((::System::Runtime::Remoting::Identity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GET_OBJECTIDENTITY_OFFSET))(this);
		}

		::System::Void set_ObjectIdentity(::System::Runtime::Remoting::Identity* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Identity*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_SET_OBJECTIDENTITY_OFFSET))(this, value);
		}

		static ::System::Object* PrivateInvoke(::System::Runtime::Remoting::Proxies::RealProxy* rp, ::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Exception*& exc, ::Il2CppArray<::System::Object*>*& out_args)
		{
			return ((::System::Object*(*)(::System::Runtime::Remoting::Proxies::RealProxy*, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Exception*&, ::Il2CppArray<::System::Object*>*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_PRIVATEINVOKE_OFFSET))(rp, msg, exc, out_args);
		}

		::System::Object* InternalGetTransparentProxy(::System::String* className)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_INTERNALGETTRANSPARENTPROXY_OFFSET))(this, className);
		}

		::System::Object* GetTransparentProxy()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETTRANSPARENTPROXY_OFFSET))(this);
		}

		::System::Void AttachServer(::System::MarshalByRefObject* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::MarshalByRefObject*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_ATTACHSERVER_OFFSET))(this, s);
		}

		::System::Void SetTargetDomain(::System::Int32 domainId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_SETTARGETDOMAIN_OFFSET))(this, domainId);
		}

		::System::Object* GetAppDomainTarget()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETAPPDOMAINTARGET_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Object*>* ProcessResponse(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* mrm, ::System::Runtime::Remoting::Messaging::MonoMethodMessage* call)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Runtime::Remoting::Messaging::IMethodReturnMessage*, ::System::Runtime::Remoting::Messaging::MonoMethodMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_PROCESSRESPONSE_OFFSET))(mrm, call);
		}
	};
}
