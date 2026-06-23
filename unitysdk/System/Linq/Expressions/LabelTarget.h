#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_LABELTARGET_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E50A620)
#define SYSTEM_LINQ_EXPRESSIONS_LABELTARGET_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E50A630)
#define SYSTEM_LINQ_EXPRESSIONS_LABELTARGET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E50A640)
#define SYSTEM_LINQ_EXPRESSIONS_LABELTARGET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E50A690)
#define SYSTEM_LINQ_EXPRESSIONS_LABELTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1E50A610)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int LabelTarget_TypeDefinitionIndex = 4490;

	class LabelTarget : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Type* _Type_k__BackingField; // 0x18

		::System::Void _ctor(::System::Type* type, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELTARGET__CTOR_OFFSET))(this, type, name);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELTARGET__CTOR_1_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELTARGET_GET_NAME_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELTARGET_GET_TYPE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELTARGET_TOSTRING_OFFSET))(this);
		}
	};
}
