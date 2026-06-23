#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Dynamic { class DynamicMetaObject; }
namespace System::Dynamic { class DynamicObject_MetaDynamic; }
namespace System::Dynamic { class GetMemberBinder; }
namespace System::Dynamic { class InvokeMemberBinder; }

#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS6_0__BINDINVOKEMEMBER_B__0_OFFSET UNITYSDK_OFFSET(0x1E385B10)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E385B00)

namespace System::Dynamic
{
	inline static constexpr unsigned int DynamicObject_MetaDynamic___c__DisplayClass6_0_TypeDefinitionIndex = 4985;

	class DynamicObject_MetaDynamic___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Dynamic::InvokeMemberBinder* binder; // 0x10
		::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* args; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Dynamic::DynamicMetaObject* _BindInvokeMember_b__0(::System::Dynamic::DynamicObject_MetaDynamic* this_, ::System::Dynamic::GetMemberBinder* ignored, ::System::Dynamic::DynamicMetaObject* e)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicObject_MetaDynamic*, ::System::Dynamic::GetMemberBinder*, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS6_0__BINDINVOKEMEMBER_B__0_OFFSET))(this, this_, ignored, e);
		}
	};
}
