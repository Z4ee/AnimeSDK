#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Dynamic { class DynamicMetaObject; }
namespace System::Dynamic { class InvokeMemberBinder; }

#define SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO___C__DISPLAYCLASS3_0__BINDINVOKEMEMBER_B__0_OFFSET UNITYSDK_OFFSET(0x1E504C70)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E504C60)

namespace System::Dynamic
{
	inline static constexpr unsigned int ExpandoObject_MetaExpando___c__DisplayClass3_0_TypeDefinitionIndex = 4999;

	class ExpandoObject_MetaExpando___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* args; // 0x10
		::System::Dynamic::InvokeMemberBinder* binder; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Dynamic::DynamicMetaObject* _BindInvokeMember_b__0(::System::Dynamic::DynamicMetaObject* value)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO___C__DISPLAYCLASS3_0__BINDINVOKEMEMBER_B__0_OFFSET))(this, value);
		}
	};
}
