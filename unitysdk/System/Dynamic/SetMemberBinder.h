#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Dynamic/DynamicMetaObjectBinder.h"

namespace System { class String; }
namespace System::Dynamic { class DynamicMetaObject; }

#define SYSTEM_DYNAMIC_SETMEMBERBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x1F0754A0)
#define SYSTEM_DYNAMIC_SETMEMBERBINDER_FALLBACKSETMEMBER_OFFSET UNITYSDK_OFFSET(0x1F075670)

namespace System::Dynamic
{
	inline static constexpr unsigned int SetMemberBinder_TypeDefinitionIndex = 5008;

	class SetMemberBinder : public ::System::Dynamic::DynamicMetaObjectBinder
	{
	public:
		::System::String* _Name_k__BackingField; // 0x18
		::System::Boolean _IgnoreCase_k__BackingField; // 0x20

		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* args)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_SETMEMBERBINDER_BIND_OFFSET))(this, target, args);
		}

		::System::Dynamic::DynamicMetaObject* FallbackSetMember(::System::Dynamic::DynamicMetaObject* target, ::System::Dynamic::DynamicMetaObject* value)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_SETMEMBERBINDER_FALLBACKSETMEMBER_OFFSET))(this, target, value);
		}
	};
}
