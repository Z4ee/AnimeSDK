#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class ArrayList; }
namespace System::Runtime::Remoting { class ObjRef; }

#define SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_NOTIFYDISCONNECTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1DCFB510)
#define SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_NOTIFYMARSHALEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1DCFAD70)
#define SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_NOTIFYUNMARSHALEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1DCFB140)
#define SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCFB8C0)
#define SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCFAD60)

namespace System::Runtime::Remoting::Services
{
	inline static constexpr unsigned int TrackingServices_TypeDefinitionIndex = 1268;

	class TrackingServices : public ::System::Object
	{
	public:
		static ::System::Collections::ArrayList** StaticGet__handlers()
		{
			return (::System::Collections::ArrayList**)Il2CppClass::FromTypeDefinitionIndex(TrackingServices_TypeDefinitionIndex)->GetStaticField(0xE20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES__CCTOR_OFFSET))();
		}

		static ::System::Void NotifyMarshaledObject(::System::Object* obj, ::System::Runtime::Remoting::ObjRef* or)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Runtime::Remoting::ObjRef*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_NOTIFYMARSHALEDOBJECT_OFFSET))(obj, or);
		}

		static ::System::Void NotifyUnmarshaledObject(::System::Object* obj, ::System::Runtime::Remoting::ObjRef* or)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Runtime::Remoting::ObjRef*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_NOTIFYUNMARSHALEDOBJECT_OFFSET))(obj, or);
		}

		static ::System::Void NotifyDisconnectedObject(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_NOTIFYDISCONNECTEDOBJECT_OFFSET))(obj);
		}
	};
}
