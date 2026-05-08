#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_PARENTHESIZEPROPERTYNAMEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x19BAD300)
#define SYSTEM_COMPONENTMODEL_PARENTHESIZEPROPERTYNAMEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19BAD360)
#define SYSTEM_COMPONENTMODEL_PARENTHESIZEPROPERTYNAMEATTRIBUTE_GET_NEEDPARENTHESIS_OFFSET UNITYSDK_OFFSET(0x19BAD2F0)
#define SYSTEM_COMPONENTMODEL_PARENTHESIZEPROPERTYNAMEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x19BAD370)
#define SYSTEM_COMPONENTMODEL_PARENTHESIZEPROPERTYNAMEATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BAD430)
#define SYSTEM_COMPONENTMODEL_PARENTHESIZEPROPERTYNAMEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19BAD2E0)
#define SYSTEM_COMPONENTMODEL_PARENTHESIZEPROPERTYNAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BAD2D0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ParenthesizePropertyNameAttribute_TypeDefinitionIndex = 3020;

	class ParenthesizePropertyNameAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::ParenthesizePropertyNameAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::ParenthesizePropertyNameAttribute**)Il2CppClass::FromTypeDefinitionIndex(ParenthesizePropertyNameAttribute_TypeDefinitionIndex)->GetStaticField(0x39C0);
		}
		::System::Boolean needParenthesis; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PARENTHESIZEPROPERTYNAMEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean needParenthesis)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PARENTHESIZEPROPERTYNAMEATTRIBUTE__CTOR_1_OFFSET))(this, needParenthesis);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PARENTHESIZEPROPERTYNAMEATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::Boolean get_NeedParenthesis()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PARENTHESIZEPROPERTYNAMEATTRIBUTE_GET_NEEDPARENTHESIS_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PARENTHESIZEPROPERTYNAMEATTRIBUTE_EQUALS_OFFSET))(this, o);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PARENTHESIZEPROPERTYNAMEATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PARENTHESIZEPROPERTYNAMEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}
	};
}
