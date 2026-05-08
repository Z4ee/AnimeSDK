#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_RUNTIME_REMOTING_TYPEINFO_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x193E02C0)
#define SYSTEM_RUNTIME_REMOTING_TYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x193DF3C0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int TypeInfo_TypeDefinitionIndex = 1264;

	class TypeInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* interfacesImplemented; // 0x10
		::Il2CppArray<::System::String*>* serverHierarchy; // 0x18
		::System::String* serverType; // 0x20

		::System::Void _ctor(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_TYPEINFO__CTOR_OFFSET))(this, type);
		}

		::System::String* get_TypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_TYPEINFO_GET_TYPENAME_OFFSET))(this);
		}
	};
}
