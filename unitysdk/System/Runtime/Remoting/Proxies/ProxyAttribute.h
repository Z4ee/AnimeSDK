#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class MarshalByRefObject; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Runtime::Remoting { class ObjRef; }
namespace System::Runtime::Remoting::Contexts { class Context; }
namespace System::Runtime::Remoting::Proxies { class RealProxy; }

#define SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x163BC4B0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_CREATEPROXY_OFFSET UNITYSDK_OFFSET(0x163BC760)

namespace System::Runtime::Remoting::Proxies
{
	inline static constexpr unsigned int ProxyAttribute_TypeDefinitionIndex = 1224;

	class ProxyAttribute : public ::System::Attribute
	{
	public:
		::System::MarshalByRefObject* CreateInstance(::System::Type* serverType)
		{
			return ((::System::MarshalByRefObject*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_CREATEINSTANCE_OFFSET))(this, serverType);
		}

		::System::Runtime::Remoting::Proxies::RealProxy* CreateProxy(::System::Runtime::Remoting::ObjRef* objRef, ::System::Type* serverType, ::System::Object* serverObject, ::System::Runtime::Remoting::Contexts::Context* serverContext)
		{
			return ((::System::Runtime::Remoting::Proxies::RealProxy*(*)(::PVOID, ::System::Runtime::Remoting::ObjRef*, ::System::Type*, ::System::Object*, ::System::Runtime::Remoting::Contexts::Context*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_CREATEPROXY_OFFSET))(this, objRef, serverType, serverObject, serverContext);
		}
	};
}
