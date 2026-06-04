#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/TypeEntry.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY_GET_APPLICATIONURL_OFFSET UNITYSDK_OFFSET(0x187A4CD0)
#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x187A4CE0)
#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY_GET_OBJECTURL_OFFSET UNITYSDK_OFFSET(0x187A4CF0)
#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x187A4D00)
#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x187A4BB0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int WellKnownClientTypeEntry_TypeDefinitionIndex = 1220;

	class WellKnownClientTypeEntry : public ::System::Runtime::Remoting::TypeEntry
	{
	public:
		::System::String* obj_url; // 0x20
		::System::Type* obj_type; // 0x28
		::System::String* app_url; // 0x30

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_ApplicationUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY_GET_APPLICATIONURL_OFFSET))(this);
		}

		::System::Type* get_ObjectType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY_GET_OBJECTTYPE_OFFSET))(this);
		}

		::System::String* get_ObjectUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY_GET_OBJECTURL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY_TOSTRING_OFFSET))(this);
		}
	};
}
