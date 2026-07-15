#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/TypeEntry.h"
#include "unitysdk/System/Runtime/Remoting/WellKnownObjectMode.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1790F9C0)
#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1790F9D0)
#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_GET_OBJECTURI_OFFSET UNITYSDK_OFFSET(0x1790F9E0)
#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1790F9F0)
#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1790F820)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int WellKnownServiceTypeEntry_TypeDefinitionIndex = 1224;

	class WellKnownServiceTypeEntry : public ::System::Runtime::Remoting::TypeEntry
	{
	public:
		::System::Type* obj_type; // 0x20
		::System::String* obj_uri; // 0x28
		::System::Runtime::Remoting::WellKnownObjectMode obj_mode; // 0x30

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Runtime::Remoting::WellKnownObjectMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Runtime::Remoting::WellKnownObjectMode))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Runtime::Remoting::WellKnownObjectMode get_Mode()
		{
			return ((::System::Runtime::Remoting::WellKnownObjectMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_GET_MODE_OFFSET))(this);
		}

		::System::Type* get_ObjectType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_GET_OBJECTTYPE_OFFSET))(this);
		}

		::System::String* get_ObjectUri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_GET_OBJECTURI_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_TOSTRING_OFFSET))(this);
		}
	};
}
