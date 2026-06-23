#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C2E21D0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C2E2250)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE_GET_CONVERTERTYPENAME_OFFSET UNITYSDK_OFFSET(0x1C2E21C0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2E22E0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C2E2150)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C2E2180)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E2140)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeConverterAttribute_TypeDefinitionIndex = 2990;

	class TypeConverterAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::TypeConverterAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::TypeConverterAttribute**)Il2CppClass::FromTypeDefinitionIndex(TypeConverterAttribute_TypeDefinitionIndex)->GetStaticField(0x33A0);
		}
		::System::String* typeName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE__CTOR_1_OFFSET))(this, type);
		}

		::System::Void _ctor_2(::System::String* typeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE__CTOR_2_OFFSET))(this, typeName);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::String* get_ConverterTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE_GET_CONVERTERTYPENAME_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}
	};
}
