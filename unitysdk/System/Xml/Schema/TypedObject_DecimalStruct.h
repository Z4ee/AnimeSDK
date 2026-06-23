#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_SCHEMA_TYPEDOBJECT_DECIMALSTRUCT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C79ADF0)
#define SYSTEM_XML_SCHEMA_TYPEDOBJECT_DECIMALSTRUCT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C79ADB0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int TypedObject_DecimalStruct_TypeDefinitionIndex = 1957;

	class TypedObject_DecimalStruct : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Decimal>* dvalue; // 0x10
		::System::Boolean isDecimal; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT_DECIMALSTRUCT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 dim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT_DECIMALSTRUCT__CTOR_1_OFFSET))(this, dim);
		}
	};
}
