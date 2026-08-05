#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Dynamic/DynamicMetaObjectBinder.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Dynamic { class DynamicMetaObject; }

#define SYSTEM_DYNAMIC_GETMEMBERBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x1F757590)
#define SYSTEM_DYNAMIC_GETMEMBERBINDER_FALLBACKGETMEMBER_OFFSET UNITYSDK_OFFSET(0x1F756300)
#define SYSTEM_DYNAMIC_GETMEMBERBINDER_GET_ISSTANDARDBINDER_OFFSET UNITYSDK_OFFSET(0x1F7576C0)
#define SYSTEM_DYNAMIC_GETMEMBERBINDER_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x1F757560)
#define SYSTEM_DYNAMIC_GETMEMBERBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F757470)

namespace System::Dynamic
{
	inline static constexpr unsigned int GetMemberBinder_TypeDefinitionIndex = 5003;

	class GetMemberBinder : public ::System::Dynamic::DynamicMetaObjectBinder
	{
	public:
		::System::String* _Name_k__BackingField; // 0x18
		::System::Boolean _IgnoreCase_k__BackingField; // 0x20

		::System::Void _ctor(::System::String* name, ::System::Boolean ignoreCase)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_GETMEMBERBINDER__CTOR_OFFSET))(this, name, ignoreCase);
		}

		::System::Type* get_ReturnType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_GETMEMBERBINDER_GET_RETURNTYPE_OFFSET))(this);
		}

		::System::Dynamic::DynamicMetaObject* FallbackGetMember(::System::Dynamic::DynamicMetaObject* target)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_GETMEMBERBINDER_FALLBACKGETMEMBER_OFFSET))(this, target);
		}

		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* args)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_GETMEMBERBINDER_BIND_OFFSET))(this, target, args);
		}

		::System::Boolean get_IsStandardBinder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_GETMEMBERBINDER_GET_ISSTANDARDBINDER_OFFSET))(this);
		}
	};
}
