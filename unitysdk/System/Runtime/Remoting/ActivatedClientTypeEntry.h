#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/TypeEntry.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Remoting::Contexts { class IContextAttribute; }

#define SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY_GET_APPLICATIONURL_OFFSET UNITYSDK_OFFSET(0x1A827DA0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY_GET_CONTEXTATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1A827DB0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1A827DC0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A827DD0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A827C20)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ActivatedClientTypeEntry_TypeDefinitionIndex = 1195;

	class ActivatedClientTypeEntry : public ::System::Runtime::Remoting::TypeEntry
	{
	public:
		::System::String* applicationUrl; // 0x20
		::System::Type* obj_type; // 0x28

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_ApplicationUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY_GET_APPLICATIONURL_OFFSET))(this);
		}

		::Il2CppArray<::System::Runtime::Remoting::Contexts::IContextAttribute*>* get_ContextAttributes()
		{
			return ((::Il2CppArray<::System::Runtime::Remoting::Contexts::IContextAttribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY_GET_CONTEXTATTRIBUTES_OFFSET))(this);
		}

		::System::Type* get_ObjectType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY_GET_OBJECTTYPE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY_TOSTRING_OFFSET))(this);
		}
	};
}
