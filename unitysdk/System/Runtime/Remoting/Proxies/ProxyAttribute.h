#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class MarshalByRefObject; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Runtime::Remoting { class ObjRef; }
namespace System::Runtime::Remoting::Contexts { class Context; }
namespace System::Runtime::Remoting::Proxies { class RealProxy; }

#define SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x187993A0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_CREATEPROXY_OFFSET UNITYSDK_OFFSET(0x18799670)

namespace System::Runtime::Remoting::Proxies
{
	inline static constexpr unsigned int ProxyAttribute_TypeDefinitionIndex = 1225;

	class ProxyAttribute : public ::System::Attribute
	{
	public:
		::System::MarshalByRefObject* CreateInstance(::System::Type* a1)
		{
			return ((::System::MarshalByRefObject*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_CREATEINSTANCE_OFFSET))(this, a1);
		}

		::System::Runtime::Remoting::Proxies::RealProxy* CreateProxy(::System::Runtime::Remoting::ObjRef* a1, ::System::Type* a2, ::System::Object* a3, ::System::Runtime::Remoting::Contexts::Context* a4)
		{
			return ((::System::Runtime::Remoting::Proxies::RealProxy*(*)(::PVOID, ::System::Runtime::Remoting::ObjRef*, ::System::Type*, ::System::Object*, ::System::Runtime::Remoting::Contexts::Context*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_CREATEPROXY_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
