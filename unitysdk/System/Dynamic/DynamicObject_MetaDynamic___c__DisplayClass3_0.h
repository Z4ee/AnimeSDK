#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Dynamic { class DynamicMetaObject; }
namespace System::Dynamic { class DynamicObject_MetaDynamic; }
namespace System::Dynamic { class SetMemberBinder; }

#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS3_0__BINDSETMEMBER_B__0_OFFSET UNITYSDK_OFFSET(0x1DF2A3A0)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2A390)

namespace System::Dynamic
{
	inline static constexpr unsigned int DynamicObject_MetaDynamic___c__DisplayClass3_0_TypeDefinitionIndex = 4984;

	class DynamicObject_MetaDynamic___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Dynamic::DynamicMetaObject* localValue; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Dynamic::DynamicMetaObject* _BindSetMember_b__0(::System::Dynamic::DynamicObject_MetaDynamic* this_, ::System::Dynamic::SetMemberBinder* b, ::System::Dynamic::DynamicMetaObject* e)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicObject_MetaDynamic*, ::System::Dynamic::SetMemberBinder*, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS3_0__BINDSETMEMBER_B__0_OFFSET))(this, this_, b, e);
		}
	};
}
