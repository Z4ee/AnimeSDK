#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/TypeEntry.h"
#include "unitysdk/System/Runtime/Remoting/WellKnownObjectMode.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_GET_MODE_OFFSET UNITYSDK_OFFSET(0x163C81D0)
#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x163C81E0)
#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_GET_OBJECTURI_OFFSET UNITYSDK_OFFSET(0x163C81F0)
#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x163C8200)
#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x163C80A0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int WellKnownServiceTypeEntry_TypeDefinitionIndex = 1221;

	class WellKnownServiceTypeEntry : public ::System::Runtime::Remoting::TypeEntry
	{
	public:
		::System::String* obj_uri; // 0x20
		::System::Type* obj_type; // 0x28
		::System::Runtime::Remoting::WellKnownObjectMode obj_mode; // 0x30

		::System::Void _ctor(::System::String* typeName, ::System::String* assemblyName, ::System::String* objectUri, ::System::Runtime::Remoting::WellKnownObjectMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Runtime::Remoting::WellKnownObjectMode))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY__CTOR_OFFSET))(this, typeName, assemblyName, objectUri, mode);
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
