#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Dynamic/DynamicMetaObjectBinder.h"

namespace System { class String; }
namespace System::Dynamic { class DynamicMetaObject; }

#define SYSTEM_DYNAMIC_INVOKEMEMBERBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x1D234ED0)
#define SYSTEM_DYNAMIC_INVOKEMEMBERBINDER_FALLBACKINVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x1D234FA0)

namespace System::Dynamic
{
	inline static constexpr unsigned int InvokeMemberBinder_TypeDefinitionIndex = 5006;

	class InvokeMemberBinder : public ::System::Dynamic::DynamicMetaObjectBinder
	{
	public:
		::System::String* _Name_k__BackingField; // 0x18
		::System::Boolean _IgnoreCase_k__BackingField; // 0x20

		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* args)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_INVOKEMEMBERBINDER_BIND_OFFSET))(this, target, args);
		}

		::System::Dynamic::DynamicMetaObject* FallbackInvokeMember(::System::Dynamic::DynamicMetaObject* target, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* args)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_INVOKEMEMBERBINDER_FALLBACKINVOKEMEMBER_OFFSET))(this, target, args);
		}
	};
}
