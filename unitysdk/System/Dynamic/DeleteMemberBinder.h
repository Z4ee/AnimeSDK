#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Dynamic/DynamicMetaObjectBinder.h"

namespace System { class String; }
namespace System::Dynamic { class DynamicMetaObject; }

#define SYSTEM_DYNAMIC_DELETEMEMBERBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x1BDC8AC0)
#define SYSTEM_DYNAMIC_DELETEMEMBERBINDER_FALLBACKDELETEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BDC8AA0)

namespace System::Dynamic
{
	inline static constexpr unsigned int DeleteMemberBinder_TypeDefinitionIndex = 4977;

	class DeleteMemberBinder : public ::System::Dynamic::DynamicMetaObjectBinder
	{
	public:
		::System::String* _Name_k__BackingField; // 0x18
		::System::Boolean _IgnoreCase_k__BackingField; // 0x20

		::System::Dynamic::DynamicMetaObject* FallbackDeleteMember(::System::Dynamic::DynamicMetaObject* target)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DELETEMEMBERBINDER_FALLBACKDELETEMEMBER_OFFSET))(this, target);
		}

		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* args)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DELETEMEMBERBINDER_BIND_OFFSET))(this, target, args);
		}
	};
}
