#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Dynamic { class DynamicMetaObject; }
namespace System::Dynamic { class DynamicObject_MetaDynamic; }
namespace System::Dynamic { class SetIndexBinder; }

#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS12_0__BINDSETINDEX_B__0_OFFSET UNITYSDK_OFFSET(0x1F755210)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F755200)

namespace System::Dynamic
{
	inline static constexpr unsigned int DynamicObject_MetaDynamic___c__DisplayClass12_0_TypeDefinitionIndex = 4990;

	class DynamicObject_MetaDynamic___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* localIndexes; // 0x10
		::System::Dynamic::DynamicMetaObject* localValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Dynamic::DynamicMetaObject* _BindSetIndex_b__0(::System::Dynamic::DynamicObject_MetaDynamic* this_, ::System::Dynamic::SetIndexBinder* b, ::System::Dynamic::DynamicMetaObject* e)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicObject_MetaDynamic*, ::System::Dynamic::SetIndexBinder*, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS12_0__BINDSETINDEX_B__0_OFFSET))(this, this_, b, e);
		}
	};
}
