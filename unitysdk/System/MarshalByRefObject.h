#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Runtime::Remoting { class ObjRef; }
namespace System::Runtime::Remoting { class ServerIdentity; }

#define SYSTEM_MARSHALBYREFOBJECT_CREATEOBJREF_OFFSET UNITYSDK_OFFSET(0x1A3A9260)
#define SYSTEM_MARSHALBYREFOBJECT_GET_OBJECTIDENTITY_OFFSET UNITYSDK_OFFSET(0x1A3A91C0)
#define SYSTEM_MARSHALBYREFOBJECT_INITIALIZELIFETIMESERVICE_OFFSET UNITYSDK_OFFSET(0x1A3A92B0)
#define SYSTEM_MARSHALBYREFOBJECT_SET_OBJECTIDENTITY_OFFSET UNITYSDK_OFFSET(0x1A3A9210)
#define SYSTEM_MARSHALBYREFOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3A7F40)

namespace System
{
	inline static constexpr unsigned int MarshalByRefObject_TypeDefinitionIndex = 389;

	class MarshalByRefObject : public ::System::Object
	{
	public:
		::System::Object* _identity; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MARSHALBYREFOBJECT__CTOR_OFFSET))(this);
		}

		::System::Runtime::Remoting::ServerIdentity* get_ObjectIdentity()
		{
			return ((::System::Runtime::Remoting::ServerIdentity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MARSHALBYREFOBJECT_GET_OBJECTIDENTITY_OFFSET))(this);
		}

		::System::Void set_ObjectIdentity(::System::Runtime::Remoting::ServerIdentity* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::ServerIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_MARSHALBYREFOBJECT_SET_OBJECTIDENTITY_OFFSET))(this, value);
		}

		::System::Runtime::Remoting::ObjRef* CreateObjRef(::System::Type* requestedType)
		{
			return ((::System::Runtime::Remoting::ObjRef*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_MARSHALBYREFOBJECT_CREATEOBJREF_OFFSET))(this, requestedType);
		}

		::System::Object* InitializeLifetimeService()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MARSHALBYREFOBJECT_INITIALIZELIFETIMESERVICE_OFFSET))(this);
		}
	};
}
