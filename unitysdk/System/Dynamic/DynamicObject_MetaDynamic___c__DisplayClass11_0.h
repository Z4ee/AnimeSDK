#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Dynamic { class DynamicMetaObject; }
namespace System::Dynamic { class DynamicObject_MetaDynamic; }
namespace System::Dynamic { class GetIndexBinder; }

#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS11_0__BINDGETINDEX_B__0_OFFSET UNITYSDK_OFFSET(0x1F7551C0)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7551B0)

namespace System::Dynamic
{
	inline static constexpr unsigned int DynamicObject_MetaDynamic___c__DisplayClass11_0_TypeDefinitionIndex = 4989;

	class DynamicObject_MetaDynamic___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* localIndexes; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Dynamic::DynamicMetaObject* _BindGetIndex_b__0(::System::Dynamic::DynamicObject_MetaDynamic* this_, ::System::Dynamic::GetIndexBinder* b, ::System::Dynamic::DynamicMetaObject* e)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicObject_MetaDynamic*, ::System::Dynamic::GetIndexBinder*, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS11_0__BINDGETINDEX_B__0_OFFSET))(this, this_, b, e);
		}
	};
}
