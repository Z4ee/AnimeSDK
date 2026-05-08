#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/TypeEntry.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_RUNTIME_REMOTING_ACTIVATEDSERVICETYPEENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18B9CFF0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATEDSERVICETYPEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x18B9CED0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ActivatedServiceTypeEntry_TypeDefinitionIndex = 1240;

	class ActivatedServiceTypeEntry : public ::System::Runtime::Remoting::TypeEntry
	{
	public:
		::System::Type* obj_type; // 0x20

		::System::Void _ctor(::System::String* typeName, ::System::String* assemblyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATEDSERVICETYPEENTRY__CTOR_OFFSET))(this, typeName, assemblyName);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATEDSERVICETYPEENTRY_TOSTRING_OFFSET))(this);
		}
	};
}
