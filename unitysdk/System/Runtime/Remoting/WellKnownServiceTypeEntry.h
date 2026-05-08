#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/TypeEntry.h"
#include "unitysdk/System/Runtime/Remoting/WellKnownObjectMode.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A9845D0)
#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9844A0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int WellKnownServiceTypeEntry_TypeDefinitionIndex = 1267;

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

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_TOSTRING_OFFSET))(this);
		}
	};
}
