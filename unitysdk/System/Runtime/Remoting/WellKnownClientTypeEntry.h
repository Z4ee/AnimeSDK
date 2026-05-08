#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/TypeEntry.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18C6C2C0)
#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x18C6C1A0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int WellKnownClientTypeEntry_TypeDefinitionIndex = 1265;

	class WellKnownClientTypeEntry : public ::System::Runtime::Remoting::TypeEntry
	{
	public:
		::System::String* obj_url; // 0x20
		::System::Type* obj_type; // 0x28
		::System::String* app_url; // 0x30

		::System::Void _ctor(::System::String* typeName, ::System::String* assemblyName, ::System::String* objectUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY__CTOR_OFFSET))(this, typeName, assemblyName, objectUrl);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY_TOSTRING_OFFSET))(this);
		}
	};
}
