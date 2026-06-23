#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Xml::Serialization { class TypeData; }

#define SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_FINDPRIMITIVETYPEDATA_OFFSET UNITYSDK_OFFSET(0x1CA62C70)
#define SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETARRAYNAME_OFFSET UNITYSDK_OFFSET(0x1CA628F0)
#define SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETPRIMITIVETYPEDATA_1_OFFSET UNITYSDK_OFFSET(0x1CA62A50)
#define SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETPRIMITIVETYPEDATA_OFFSET UNITYSDK_OFFSET(0x1CA62890)
#define SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETTYPEDATA_1_OFFSET UNITYSDK_OFFSET(0x1CA61C00)
#define SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETTYPEDATA_OFFSET UNITYSDK_OFFSET(0x1CA61BA0)
#define SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_PARSEARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x1CA62D30)
#define SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA5F290)
#define SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA62E60)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int TypeTranslator_TypeDefinitionIndex = 1871;

	class TypeTranslator : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet_nameCache()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(TypeTranslator_TypeDefinitionIndex)->GetStaticField(0x1FB0);
		}
		static ::System::Collections::Hashtable** StaticGet_primitiveArrayTypes()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(TypeTranslator_TypeDefinitionIndex)->GetStaticField(0x1FB8);
		}
		static ::System::Collections::Hashtable** StaticGet_primitiveTypes()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(TypeTranslator_TypeDefinitionIndex)->GetStaticField(0x1FC0);
		}
		static ::System::Collections::Hashtable** StaticGet_nullableTypes()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(TypeTranslator_TypeDefinitionIndex)->GetStaticField(0x1FC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR__CTOR_OFFSET))(this);
		}

		static ::System::Xml::Serialization::TypeData* GetTypeData(::System::Type* type)
		{
			return ((::System::Xml::Serialization::TypeData*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETTYPEDATA_OFFSET))(type);
		}

		static ::System::Xml::Serialization::TypeData* GetTypeData_1(::System::Type* runtimeType, ::System::String* xmlDataType, ::System::Boolean underlyingEnumType)
		{
			return ((::System::Xml::Serialization::TypeData*(*)(::System::Type*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETTYPEDATA_1_OFFSET))(runtimeType, xmlDataType, underlyingEnumType);
		}

		static ::System::Xml::Serialization::TypeData* GetPrimitiveTypeData(::System::String* typeName)
		{
			return ((::System::Xml::Serialization::TypeData*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETPRIMITIVETYPEDATA_OFFSET))(typeName);
		}

		static ::System::Xml::Serialization::TypeData* GetPrimitiveTypeData_1(::System::String* typeName, ::System::Boolean nullable)
		{
			return ((::System::Xml::Serialization::TypeData*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETPRIMITIVETYPEDATA_1_OFFSET))(typeName, nullable);
		}

		static ::System::Xml::Serialization::TypeData* FindPrimitiveTypeData(::System::String* typeName)
		{
			return ((::System::Xml::Serialization::TypeData*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_FINDPRIMITIVETYPEDATA_OFFSET))(typeName);
		}

		static ::System::String* GetArrayName(::System::String* elemName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETARRAYNAME_OFFSET))(elemName);
		}

		static ::System::Void ParseArrayType(::System::String* arrayType, ::System::String*& type, ::System::String*& ns, ::System::String*& dimensions)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_PARSEARRAYTYPE_OFFSET))(arrayType, type, ns, dimensions);
		}
	};
}
