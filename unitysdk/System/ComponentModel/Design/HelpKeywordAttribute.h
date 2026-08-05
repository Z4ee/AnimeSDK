#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_DESIGN_HELPKEYWORDATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DD12890)
#define SYSTEM_COMPONENTMODEL_DESIGN_HELPKEYWORDATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DD12910)
#define SYSTEM_COMPONENTMODEL_DESIGN_HELPKEYWORDATTRIBUTE_GET_HELPKEYWORD_OFFSET UNITYSDK_OFFSET(0x1DD12880)
#define SYSTEM_COMPONENTMODEL_DESIGN_HELPKEYWORDATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DD12920)
#define SYSTEM_COMPONENTMODEL_DESIGN_HELPKEYWORDATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD12A20)
#define SYSTEM_COMPONENTMODEL_DESIGN_HELPKEYWORDATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD12790)
#define SYSTEM_COMPONENTMODEL_DESIGN_HELPKEYWORDATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DD12800)
#define SYSTEM_COMPONENTMODEL_DESIGN_HELPKEYWORDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD12780)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int HelpKeywordAttribute_TypeDefinitionIndex = 3059;

	class HelpKeywordAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::Design::HelpKeywordAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::Design::HelpKeywordAttribute**)Il2CppClass::FromTypeDefinitionIndex(HelpKeywordAttribute_TypeDefinitionIndex)->GetStaticField(0x3010);
		}
		::System::String* contextKeyword; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_HELPKEYWORDATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* keyword)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_HELPKEYWORDATTRIBUTE__CTOR_1_OFFSET))(this, keyword);
		}

		::System::Void _ctor_2(::System::Type* t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_HELPKEYWORDATTRIBUTE__CTOR_2_OFFSET))(this, t);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_HELPKEYWORDATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::String* get_HelpKeyword()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_HELPKEYWORDATTRIBUTE_GET_HELPKEYWORD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_HELPKEYWORDATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_HELPKEYWORDATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_HELPKEYWORDATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}
	};
}
