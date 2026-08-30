#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_RUNTIME_REMOTING_TYPEINFO_CANCASTTO_OFFSET UNITYSDK_OFFSET(0x1BDFFCB0)
#define SYSTEM_RUNTIME_REMOTING_TYPEINFO_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x1BDFFCA0)
#define SYSTEM_RUNTIME_REMOTING_TYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDEED90)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int TypeInfo_TypeDefinitionIndex = 1228;

	class TypeInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* serverHierarchy; // 0x10
		::System::String* serverType; // 0x18
		::Il2CppArray<::System::String*>* interfacesImplemented; // 0x20

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_TYPEINFO__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_TypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_TYPEINFO_GET_TYPENAME_OFFSET))(this);
		}

		::System::Boolean CanCastTo(::System::Type* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_TYPEINFO_CANCASTTO_OFFSET))(this, a1, a2);
		}
	};
}
