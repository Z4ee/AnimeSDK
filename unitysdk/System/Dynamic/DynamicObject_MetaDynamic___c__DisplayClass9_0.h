#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Dynamic { class BinaryOperationBinder; }
namespace System::Dynamic { class DynamicMetaObject; }
namespace System::Dynamic { class DynamicObject_MetaDynamic; }

#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS9_0__BINDBINARYOPERATION_B__0_OFFSET UNITYSDK_OFFSET(0x1F74EF40)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F74EF30)

namespace System::Dynamic
{
	inline static constexpr unsigned int DynamicObject_MetaDynamic___c__DisplayClass9_0_TypeDefinitionIndex = 4988;

	class DynamicObject_MetaDynamic___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Dynamic::DynamicMetaObject* localArg; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Dynamic::DynamicMetaObject* _BindBinaryOperation_b__0(::System::Dynamic::DynamicObject_MetaDynamic* this_, ::System::Dynamic::BinaryOperationBinder* b, ::System::Dynamic::DynamicMetaObject* e)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicObject_MetaDynamic*, ::System::Dynamic::BinaryOperationBinder*, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__DISPLAYCLASS9_0__BINDBINARYOPERATION_B__0_OFFSET))(this, this_, b, e);
		}
	};
}
