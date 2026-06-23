#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/TypeEntry.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Remoting::Contexts { class IContextAttribute; }

#define SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY_GET_CONTEXTATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1C9D4740)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C9D4750)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9D4620)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ActivatedClientTypeEntry_TypeDefinitionIndex = 1238;

	class ActivatedClientTypeEntry : public ::System::Runtime::Remoting::TypeEntry
	{
	public:
		::System::Type* obj_type; // 0x20
		::System::String* applicationUrl; // 0x28

		::System::Void _ctor(::System::String* typeName, ::System::String* assemblyName, ::System::String* appUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY__CTOR_OFFSET))(this, typeName, assemblyName, appUrl);
		}

		::Il2CppArray<::System::Runtime::Remoting::Contexts::IContextAttribute*>* get_ContextAttributes()
		{
			return ((::Il2CppArray<::System::Runtime::Remoting::Contexts::IContextAttribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY_GET_CONTEXTATTRIBUTES_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY_TOSTRING_OFFSET))(this);
		}
	};
}
