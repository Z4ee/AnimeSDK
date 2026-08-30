#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_LABELTARGET_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DF4A1E0)
#define SYSTEM_LINQ_EXPRESSIONS_LABELTARGET_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DF4A1F0)
#define SYSTEM_LINQ_EXPRESSIONS_LABELTARGET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF4A200)
#define SYSTEM_LINQ_EXPRESSIONS_LABELTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF4A1D0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int LabelTarget_TypeDefinitionIndex = 3228;

	class LabelTarget : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Type* _Type_k__BackingField; // 0x18

		::System::Void _ctor(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELTARGET__CTOR_OFFSET))(this, a1, a2);
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
