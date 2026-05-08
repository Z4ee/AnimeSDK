#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class MarshalByRefObject; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Remoting { class ClientIdentity; }
namespace System::Runtime::Remoting { class Identity; }
namespace System::Runtime::Remoting::Contexts { class Context; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1A6C1B70)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETPROXIEDTYPE_OFFSET UNITYSDK_OFFSET(0x1A6C1A90)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETTRANSPARENTPROXY_OFFSET UNITYSDK_OFFSET(0x1A6C1C00)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_INTERNALGETPROXYTYPE_OFFSET UNITYSDK_OFFSET(0x1A6C1A80)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_INTERNALGETTRANSPARENTPROXY_OFFSET UNITYSDK_OFFSET(0x1A6C1BF0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A6C18F0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A6C1A60)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A6C1900)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6C18E0)

namespace System::Runtime::Remoting::Proxies
{
	inline static constexpr unsigned int RealProxy_TypeDefinitionIndex = 1272;

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

		::System::Object* InternalGetTransparentProxy(::System::String* className)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_INTERNALGETTRANSPARENTPROXY_OFFSET))(this, className);
		}

		::System::Object* GetTransparentProxy()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETTRANSPARENTPROXY_OFFSET))(this);
		}
	};
}
