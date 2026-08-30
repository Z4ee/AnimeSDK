#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class ArrayList; }
namespace System::Runtime::Remoting { class ObjRef; }

#define SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_NOTIFYDISCONNECTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1BDFD830)
#define SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_NOTIFYMARSHALEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1BDFB570)
#define SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_NOTIFYUNMARSHALEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1BDFA350)
#define SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDFDD90)

namespace System::Runtime::Remoting::Services
{
	inline static constexpr unsigned int TrackingServices_TypeDefinitionIndex = 1233;

	class TrackingServices : public ::System::Object
	{
	public:
		static ::System::Collections::ArrayList** StaticGet__handlers()
		{
			return (::System::Collections::ArrayList**)Il2CppClass::FromTypeDefinitionIndex(TrackingServices_TypeDefinitionIndex)->GetStaticField(0x146F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES__CCTOR_OFFSET))();
		}

		static ::System::Void NotifyMarshaledObject(::System::Object* a1, ::System::Runtime::Remoting::ObjRef* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Runtime::Remoting::ObjRef*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_NOTIFYMARSHALEDOBJECT_OFFSET))(a1, a2);
		}

		static ::System::Void NotifyUnmarshaledObject(::System::Object* a1, ::System::Runtime::Remoting::ObjRef* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Runtime::Remoting::ObjRef*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_NOTIFYUNMARSHALEDOBJECT_OFFSET))(a1, a2);
		}

		static ::System::Void NotifyDisconnectedObject(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_NOTIFYDISCONNECTEDOBJECT_OFFSET))(a1);
		}
	};
}
