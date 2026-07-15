#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Runtime::Remoting { class ObjRef; }
namespace System::Runtime::Remoting { class ServerIdentity; }

#define SYSTEM_MARSHALBYREFOBJECT_CREATEOBJREF_OFFSET UNITYSDK_OFFSET(0x1B874D50)
#define SYSTEM_MARSHALBYREFOBJECT_GET_OBJECTIDENTITY_OFFSET UNITYSDK_OFFSET(0x1B874C10)
#define SYSTEM_MARSHALBYREFOBJECT_INITIALIZELIFETIMESERVICE_OFFSET UNITYSDK_OFFSET(0x1B874DA0)
#define SYSTEM_MARSHALBYREFOBJECT_SET_OBJECTIDENTITY_OFFSET UNITYSDK_OFFSET(0x1B874D00)
#define SYSTEM_MARSHALBYREFOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B859060)

namespace System
{
	inline static constexpr unsigned int MarshalByRefObject_TypeDefinitionIndex = 401;

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

		::System::Void set_ObjectIdentity(::System::Runtime::Remoting::ServerIdentity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::ServerIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_MARSHALBYREFOBJECT_SET_OBJECTIDENTITY_OFFSET))(this, a1);
		}

		::System::Runtime::Remoting::ObjRef* CreateObjRef(::System::Type* a1)
		{
			return ((::System::Runtime::Remoting::ObjRef*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_MARSHALBYREFOBJECT_CREATEOBJREF_OFFSET))(this, a1);
		}

		::System::Object* InitializeLifetimeService()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MARSHALBYREFOBJECT_INITIALIZELIFETIMESERVICE_OFFSET))(this);
		}
	};
}
