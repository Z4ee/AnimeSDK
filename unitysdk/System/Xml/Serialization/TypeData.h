#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Serialization/SchemaTypes.h"

namespace System { class InvalidOperationException; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }
namespace System::Xml::Schema { class XmlSchemaPatternFacet; }

#define SYSTEM_XML_SERIALIZATION_TYPEDATA_CONVERTFORASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x1DC6BE30)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_CREATEMISSINGADDMETHODEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1DC6CA50)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GETGENERICLISTITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1DC6C770)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GETINDEXERPROPERTY_OFFSET UNITYSDK_OFFSET(0x1DC6C950)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISCOMPLEXTYPE_OFFSET UNITYSDK_OFFSET(0x1DC6BF70)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISLISTTYPE_OFFSET UNITYSDK_OFFSET(0x1DC6BC30)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1DC6BFD0)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1DC6BFA0)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISXSDTYPE_OFFSET UNITYSDK_OFFSET(0x1DC6BF90)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_LISTITEMTYPEDATA_OFFSET UNITYSDK_OFFSET(0x1DC6BC40)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_LISTITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1DC6C090)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_LOOKUPTYPECONVERTOR_OFFSET UNITYSDK_OFFSET(0x1DC6BD10)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC6CBA0)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DC6B820)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6B800)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int TypeData_TypeDefinitionIndex = 1869;

	class TypeData : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_keywords()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TypeData_TypeDefinitionIndex)->GetStaticField(0x1B70);
		}
		::System::Reflection::MethodInfo* typeConvertor; // 0x10
		::System::String* fullTypeName; // 0x18
		::System::Xml::Schema::XmlSchemaPatternFacet* facet; // 0x20
		::System::Xml::Serialization::TypeData* mappedType; // 0x28
		::System::Type* listItemType; // 0x30
		::System::String* typeName; // 0x38
		::System::Xml::Serialization::TypeData* listItemTypeData; // 0x40
		::System::String* elementName; // 0x48
		::System::Type* type; // 0x50
		::System::Xml::Serialization::SchemaTypes sType; // 0x58
		::System::Boolean nullableOverride; // 0x5C
		::System::Boolean hasPublicConstructor; // 0x5D

		::System::Void _ctor(::System::Type* type, ::System::String* elementName, ::System::Boolean isPrimitive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA__CTOR_OFFSET))(this, type, elementName, isPrimitive);
		}

		::System::Void _ctor_1(::System::Type* type, ::System::String* elementName, ::System::Boolean isPrimitive, ::System::Xml::Serialization::TypeData* mappedType, ::System::Xml::Schema::XmlSchemaPatternFacet* facet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Boolean, ::System::Xml::Serialization::TypeData*, ::System::Xml::Schema::XmlSchemaPatternFacet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA__CTOR_1_OFFSET))(this, type, elementName, isPrimitive, mappedType, facet);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA__CCTOR_OFFSET))();
		}

		::System::Void LookupTypeConvertor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_LOOKUPTYPECONVERTOR_OFFSET))(this);
		}

		::System::Void ConvertForAssignment(::System::Object*& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_CONVERTFORASSIGNMENT_OFFSET))(this, value);
		}

		::System::Boolean get_IsListType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISLISTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsComplexType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISCOMPLEXTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsValueType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISVALUETYPE_OFFSET))(this);
		}

		::System::Boolean get_IsNullable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISNULLABLE_OFFSET))(this);
		}

		::System::Xml::Serialization::TypeData* get_ListItemTypeData()
		{
			return ((::System::Xml::Serialization::TypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_LISTITEMTYPEDATA_OFFSET))(this);
		}

		::System::Type* get_ListItemType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_LISTITEMTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsXsdType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISXSDTYPE_OFFSET))(this);
		}

		static ::System::Reflection::PropertyInfo* GetIndexerProperty(::System::Type* collectionType)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GETINDEXERPROPERTY_OFFSET))(collectionType);
		}

		static ::System::InvalidOperationException* CreateMissingAddMethodException(::System::Type* type, ::System::String* inheritFrom, ::System::Type* argumentType)
		{
			return ((::System::InvalidOperationException*(*)(::System::Type*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_CREATEMISSINGADDMETHODEXCEPTION_OFFSET))(type, inheritFrom, argumentType);
		}

		static ::System::Type* GetGenericListItemType(::System::Type* type)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GETGENERICLISTITEMTYPE_OFFSET))(type);
		}
	};
}
