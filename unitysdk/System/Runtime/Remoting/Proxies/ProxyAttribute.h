#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class MarshalByRefObject; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Runtime::Remoting { class ObjRef; }
namespace System::Runtime::Remoting::Activation { class IConstructionCallMessage; }
namespace System::Runtime::Remoting::Contexts { class Context; }
namespace System::Runtime::Remoting::Proxies { class RealProxy; }

#define SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1CCBCA10)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_CREATEPROXY_OFFSET UNITYSDK_OFFSET(0x1CCBCAF0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_GETPROPERTIESFORNEWCONTEXT_OFFSET UNITYSDK_OFFSET(0x1CCBCB50)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_ISCONTEXTOK_OFFSET UNITYSDK_OFFSET(0x1CCBCB60)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCBCA00)

namespace System::Runtime::Remoting::Proxies
{
	inline static constexpr unsigned int ProxyAttribute_TypeDefinitionIndex = 1269;

	class ProxyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::MarshalByRefObject* CreateInstance(::System::Type* serverType)
		{
			return ((::System::MarshalByRefObject*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_CREATEINSTANCE_OFFSET))(this, serverType);
		}

		::System::Runtime::Remoting::Proxies::RealProxy* CreateProxy(::System::Runtime::Remoting::ObjRef* objRef, ::System::Type* serverType, ::System::Object* serverObject, ::System::Runtime::Remoting::Contexts::Context* serverContext)
		{
			return ((::System::Runtime::Remoting::Proxies::RealProxy*(*)(::PVOID, ::System::Runtime::Remoting::ObjRef*, ::System::Type*, ::System::Object*, ::System::Runtime::Remoting::Contexts::Context*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_CREATEPROXY_OFFSET))(this, objRef, serverType, serverObject, serverContext);
		}

		::System::Void GetPropertiesForNewContext(::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Activation::IConstructionCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_GETPROPERTIESFORNEWCONTEXT_OFFSET))(this, msg);
		}

		::System::Boolean IsContextOK(::System::Runtime::Remoting::Contexts::Context* ctx, ::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Runtime::Remoting::Contexts::Context*, ::System::Runtime::Remoting::Activation::IConstructionCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_ISCONTEXTOK_OFFSET))(this, ctx, msg);
		}
	};
}
