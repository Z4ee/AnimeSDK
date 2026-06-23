#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Dynamic { class DynamicMetaObject; }
namespace System::Dynamic { class DynamicObject_MetaDynamic; }
namespace System::Dynamic { class InvokeBinder; }

#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS8_0__BINDINVOKE_B__0_OFFSET UNITYSDK_OFFSET(0x1E70AE80)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E70AE70)

namespace System::Dynamic
{
	inline static constexpr unsigned int DynamicObject_MetaDynamic___c__DisplayClass8_0_TypeDefinitionIndex = 4987;

	class DynamicObject_MetaDynamic___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* localArgs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Dynamic::DynamicMetaObject* _BindInvoke_b__0(::System::Dynamic::DynamicObject_MetaDynamic* this_, ::System::Dynamic::InvokeBinder* b, ::System::Dynamic::DynamicMetaObject* e)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicObject_MetaDynamic*, ::System::Dynamic::InvokeBinder*, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS8_0__BINDINVOKE_B__0_OFFSET))(this, this_, b, e);
		}
	};
}
