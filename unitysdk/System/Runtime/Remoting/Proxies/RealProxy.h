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

#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_ATTACHSERVER_OFFSET UNITYSDK_OFFSET(0x1BDF39A0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETAPPDOMAINTARGET_OFFSET UNITYSDK_OFFSET(0x1BDF39C0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1BDF1470)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETPROXIEDTYPE_OFFSET UNITYSDK_OFFSET(0x1BDF1410)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETTRANSPARENTPROXY_OFFSET UNITYSDK_OFFSET(0x1BDF0CF0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GET_OBJECTIDENTITY_OFFSET UNITYSDK_OFFSET(0x1BDF1540)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_INTERNALGETPROXYTYPE_OFFSET UNITYSDK_OFFSET(0x1BDF1400)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_INTERNALGETTRANSPARENTPROXY_OFFSET UNITYSDK_OFFSET(0x1BDF3990)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_PRIVATEINVOKE_OFFSET UNITYSDK_OFFSET(0x1BDF1560)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_PROCESSRESPONSE_OFFSET UNITYSDK_OFFSET(0x1BDF27F0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_SETTARGETDOMAIN_OFFSET UNITYSDK_OFFSET(0x1BDF39B0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_SET_OBJECTIDENTITY_OFFSET UNITYSDK_OFFSET(0x1BDF1550)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BDF1290)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BDF13E0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1BDF12A0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDF1280)

namespace System::Runtime::Remoting::Proxies
{
	inline static constexpr unsigned int RealProxy_TypeDefinitionIndex = 1236;

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

		::System::Void _ctor_1(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Type* a1, ::System::Runtime::Remoting::ClientIdentity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Runtime::Remoting::ClientIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::Type* a1, ::System::IntPtr a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::IntPtr, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY__CTOR_3_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Type* InternalGetProxyType(::System::Object* a1)
		{
			return ((::System::Type*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_INTERNALGETPROXYTYPE_OFFSET))(a1);
		}

		::System::Type* GetProxiedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETPROXIEDTYPE_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Runtime::Remoting::Identity* get_ObjectIdentity()
		{
			return ((::System::Runtime::Remoting::Identity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GET_OBJECTIDENTITY_OFFSET))(this);
		}

		::System::Void set_ObjectIdentity(::System::Runtime::Remoting::Identity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Identity*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_SET_OBJECTIDENTITY_OFFSET))(this, a1);
		}

		static ::System::Object* PrivateInvoke(::System::Runtime::Remoting::Proxies::RealProxy* a1, ::System::Runtime::Remoting::Messaging::IMessage* a2, ::System::Exception*& a3, ::Il2CppArray<::System::Object*>*& a4)
		{
			return ((::System::Object*(*)(::System::Runtime::Remoting::Proxies::RealProxy*, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Exception*&, ::Il2CppArray<::System::Object*>*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_PRIVATEINVOKE_OFFSET))(a1, a2, a3, a4);
		}

		::System::Object* InternalGetTransparentProxy(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_INTERNALGETTRANSPARENTPROXY_OFFSET))(this, a1);
		}

		::System::Object* GetTransparentProxy()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETTRANSPARENTPROXY_OFFSET))(this);
		}

		::System::Void AttachServer(::System::MarshalByRefObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::MarshalByRefObject*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_ATTACHSERVER_OFFSET))(this, a1);
		}

		::System::Void SetTargetDomain(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_SETTARGETDOMAIN_OFFSET))(this, a1);
		}

		::System::Object* GetAppDomainTarget()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETAPPDOMAINTARGET_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Object*>* ProcessResponse(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* a1, ::System::Runtime::Remoting::Messaging::MonoMethodMessage* a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Runtime::Remoting::Messaging::IMethodReturnMessage*, ::System::Runtime::Remoting::Messaging::MonoMethodMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_PROCESSRESPONSE_OFFSET))(a1, a2);
		}
	};
}
