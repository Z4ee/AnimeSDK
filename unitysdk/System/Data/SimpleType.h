#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/Common/StorageType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }

#define SYSTEM_DATA_SIMPLETYPE_CANHAVEMAXLENGTH_OFFSET UNITYSDK_OFFSET(0x1D6DBEC0)
#define SYSTEM_DATA_SIMPLETYPE_CONVERTTOANNONYMOUSSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x1D6DBF30)
#define SYSTEM_DATA_SIMPLETYPE_CREATEBYTEARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x1D6DBC10)
#define SYSTEM_DATA_SIMPLETYPE_CREATEENUMERATEDTYPE_OFFSET UNITYSDK_OFFSET(0x1D6DBB80)
#define SYSTEM_DATA_SIMPLETYPE_CREATELIMITEDSTRINGTYPE_OFFSET UNITYSDK_OFFSET(0x1D6DBCA0)
#define SYSTEM_DATA_SIMPLETYPE_CREATESIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x1D6DBD30)
#define SYSTEM_DATA_SIMPLETYPE_GET_SIMPLETYPEQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1D6DB640)
#define SYSTEM_DATA_SIMPLETYPE_HASCONFLICTINGDEFINITION_OFFSET UNITYSDK_OFFSET(0x1D6DBE10)
#define SYSTEM_DATA_SIMPLETYPE_ISPLAINSTRING_OFFSET UNITYSDK_OFFSET(0x1D6DB440)
#define SYSTEM_DATA_SIMPLETYPE_LOADTYPEVALUES_OFFSET UNITYSDK_OFFSET(0x1D6DAC10)
#define SYSTEM_DATA_SIMPLETYPE_QUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1D6DB6A0)
#define SYSTEM_DATA_SIMPLETYPE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1D6DB3F0)
#define SYSTEM_DATA_SIMPLETYPE_TONODE_OFFSET UNITYSDK_OFFSET(0x1D6DB710)
#define SYSTEM_DATA_SIMPLETYPE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D6DAAD0)
#define SYSTEM_DATA_SIMPLETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DAA70)

namespace System::Data
{
	inline static constexpr unsigned int SimpleType_TypeDefinitionIndex = 38685;

	class SimpleType : public ::System::Object
	{
	public:
		::System::String* _baseType; // 0x10
		::System::Data::SimpleType* _baseSimpleType; // 0x18
		::System::Xml::XmlQualifiedName* _xmlBaseType; // 0x20
		::System::String* _name; // 0x28
		::System::Int32 _length; // 0x30
		::System::Int32 _minLength; // 0x34
		::System::Int32 _maxLength; // 0x38
		::System::String* _pattern; // 0x40
		::System::String* _ns; // 0x48
		::System::String* _maxExclusive; // 0x50
		::System::String* _maxInclusive; // 0x58
		::System::String* _minExclusive; // 0x60
		::System::String* _minInclusive; // 0x68
		::System::String* _enumeration; // 0x70

		::System::Void _ctor(::System::String* baseType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE__CTOR_OFFSET))(this, baseType);
		}

		::System::Void _ctor_1(::System::Xml::Schema::XmlSchemaSimpleType* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSimpleType*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE__CTOR_1_OFFSET))(this, node);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Void LoadTypeValues(::System::Xml::Schema::XmlSchemaSimpleType* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSimpleType*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_LOADTYPEVALUES_OFFSET))(this, node);
		}

		::System::Boolean IsPlainString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_ISPLAINSTRING_OFFSET))(this);
		}

		::System::String* get_SimpleTypeQualifiedName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_GET_SIMPLETYPEQUALIFIEDNAME_OFFSET))(this);
		}

		::System::String* QualifiedName(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_QUALIFIEDNAME_OFFSET))(this, name);
		}

		::System::Xml::XmlNode* ToNode(::System::Xml::XmlDocument* dc, ::System::Collections::Hashtable* prefixes, ::System::Boolean inRemoting)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlDocument*, ::System::Collections::Hashtable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_TONODE_OFFSET))(this, dc, prefixes, inRemoting);
		}

		static ::System::Data::SimpleType* CreateEnumeratedType(::System::String* values)
		{
			return ((::System::Data::SimpleType*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_CREATEENUMERATEDTYPE_OFFSET))(values);
		}

		static ::System::Data::SimpleType* CreateByteArrayType(::System::String* encoding)
		{
			return ((::System::Data::SimpleType*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_CREATEBYTEARRAYTYPE_OFFSET))(encoding);
		}

		static ::System::Data::SimpleType* CreateLimitedStringType(::System::Int32 length)
		{
			return ((::System::Data::SimpleType*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_CREATELIMITEDSTRINGTYPE_OFFSET))(length);
		}

		static ::System::Data::SimpleType* CreateSimpleType(::System::Data::Common::StorageType typeCode, ::System::Type* type)
		{
			return ((::System::Data::SimpleType*(*)(::System::Data::Common::StorageType, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_CREATESIMPLETYPE_OFFSET))(typeCode, type);
		}

		::System::String* HasConflictingDefinition(::System::Data::SimpleType* otherSimpleType)
		{
			return ((::System::String*(*)(::PVOID, ::System::Data::SimpleType*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_HASCONFLICTINGDEFINITION_OFFSET))(this, otherSimpleType);
		}

		::System::Boolean CanHaveMaxLength()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_CANHAVEMAXLENGTH_OFFSET))(this);
		}

		::System::Void ConvertToAnnonymousSimpleType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_CONVERTTOANNONYMOUSSIMPLETYPE_OFFSET))(this);
		}
	};
}
