#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Dynamic { class DeleteIndexBinder; }
namespace System::Dynamic { class DynamicMetaObject; }
namespace System::Dynamic { class DynamicObject_MetaDynamic; }

#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS13_0__BINDDELETEINDEX_B__0_OFFSET UNITYSDK_OFFSET(0x1F755260)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F755250)

namespace System::Dynamic
{
	inline static constexpr unsigned int DynamicObject_MetaDynamic___c__DisplayClass13_0_TypeDefinitionIndex = 4991;

	class DynamicObject_MetaDynamic___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* localIndexes; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Dynamic::DynamicMetaObject* _BindDeleteIndex_b__0(::System::Dynamic::DynamicObject_MetaDynamic* this_, ::System::Dynamic::DeleteIndexBinder* b, ::System::Dynamic::DynamicMetaObject* e)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicObject_MetaDynamic*, ::System::Dynamic::DeleteIndexBinder*, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS13_0__BINDDELETEINDEX_B__0_OFFSET))(this, this_, b, e);
		}
	};
}
