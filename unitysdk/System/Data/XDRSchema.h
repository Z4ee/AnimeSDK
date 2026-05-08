#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/XMLSchema.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class ArrayList; }
namespace System::Data { class DataSet; }
namespace System::Data { class DataTable; }
namespace System::Data { class XDRSchema_NameType; }
namespace System::Xml { class XmlElement; }

#define SYSTEM_DATA_XDRSCHEMA_FINDNAMETYPE_OFFSET UNITYSDK_OFFSET(0x1B349C80)
#define SYSTEM_DATA_XDRSCHEMA_FINDTYPENODE_OFFSET UNITYSDK_OFFSET(0x1B348770)
#define SYSTEM_DATA_XDRSCHEMA_GETINSTANCENAME_OFFSET UNITYSDK_OFFSET(0x1B349EE0)
#define SYSTEM_DATA_XDRSCHEMA_GETMINMAX_1_OFFSET UNITYSDK_OFFSET(0x1B34AC90)
#define SYSTEM_DATA_XDRSCHEMA_GETMINMAX_OFFSET UNITYSDK_OFFSET(0x1B3491D0)
#define SYSTEM_DATA_XDRSCHEMA_HANDLECOLUMN_OFFSET UNITYSDK_OFFSET(0x1B34A0B0)
#define SYSTEM_DATA_XDRSCHEMA_HANDLETABLE_OFFSET UNITYSDK_OFFSET(0x1B348600)
#define SYSTEM_DATA_XDRSCHEMA_HANDLETYPENODE_OFFSET UNITYSDK_OFFSET(0x1B34AFB0)
#define SYSTEM_DATA_XDRSCHEMA_INSTANTIATESIMPLETABLE_OFFSET UNITYSDK_OFFSET(0x1B3491F0)
#define SYSTEM_DATA_XDRSCHEMA_INSTANTIATETABLE_OFFSET UNITYSDK_OFFSET(0x1B349490)
#define SYSTEM_DATA_XDRSCHEMA_ISTEXTONLYCONTENT_OFFSET UNITYSDK_OFFSET(0x1B348DB0)
#define SYSTEM_DATA_XDRSCHEMA_ISXDRFIELD_OFFSET UNITYSDK_OFFSET(0x1B348F40)
#define SYSTEM_DATA_XDRSCHEMA_LOADSCHEMA_OFFSET UNITYSDK_OFFSET(0x1B3483E0)
#define SYSTEM_DATA_XDRSCHEMA_PARSEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1B349D70)
#define SYSTEM_DATA_XDRSCHEMA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B34B2B0)
#define SYSTEM_DATA_XDRSCHEMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3483B0)

namespace System::Data
{
	inline static constexpr unsigned int XDRSchema_TypeDefinitionIndex = 37070;

	class XDRSchema : public ::System::Data::XMLSchema
	{
	public:
		static ::Il2CppArray<::System::Data::XDRSchema_NameType*>** StaticGet_s_mapNameTypeXdr()
		{
			return (::Il2CppArray<::System::Data::XDRSchema_NameType*>**)Il2CppClass::FromTypeDefinitionIndex(XDRSchema_TypeDefinitionIndex)->GetStaticField(0x27590);
		}
		static ::System::Data::XDRSchema_NameType** StaticGet_s_enumerationNameType()
		{
			return (::System::Data::XDRSchema_NameType**)Il2CppClass::FromTypeDefinitionIndex(XDRSchema_TypeDefinitionIndex)->GetStaticField(0x27598);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_s_colonArray()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(XDRSchema_TypeDefinitionIndex)->GetStaticField(0x275A0);
		}
		::System::Data::DataSet* _ds; // 0x10
		::System::String* _schemaUri; // 0x18
		::System::Xml::XmlElement* _schemaRoot; // 0x20
		::System::String* _schemaName; // 0x28

		::System::Void _ctor(::System::Data::DataSet* ds, ::System::Boolean fInline)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataSet*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA__CTOR_OFFSET))(this, ds, fInline);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA__CCTOR_OFFSET))();
		}

		::System::Void LoadSchema(::System::Xml::XmlElement* schemaRoot, ::System::Data::DataSet* ds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlElement*, ::System::Data::DataSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_LOADSCHEMA_OFFSET))(this, schemaRoot, ds);
		}

		::System::Xml::XmlElement* FindTypeNode(::System::Xml::XmlElement* node)
		{
			return ((::System::Xml::XmlElement*(*)(::PVOID, ::System::Xml::XmlElement*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_FINDTYPENODE_OFFSET))(this, node);
		}

		::System::Boolean IsTextOnlyContent(::System::Xml::XmlElement* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlElement*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_ISTEXTONLYCONTENT_OFFSET))(this, node);
		}

		::System::Boolean IsXDRField(::System::Xml::XmlElement* node, ::System::Xml::XmlElement* typeNode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlElement*, ::System::Xml::XmlElement*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_ISXDRFIELD_OFFSET))(this, node, typeNode);
		}

		::System::Data::DataTable* HandleTable(::System::Xml::XmlElement* node)
		{
			return ((::System::Data::DataTable*(*)(::PVOID, ::System::Xml::XmlElement*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_HANDLETABLE_OFFSET))(this, node);
		}

		static ::System::Data::XDRSchema_NameType* FindNameType(::System::String* name)
		{
			return ((::System::Data::XDRSchema_NameType*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_FINDNAMETYPE_OFFSET))(name);
		}

		::System::Type* ParseDataType(::System::String* dt, ::System::String* dtValues)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_PARSEDATATYPE_OFFSET))(this, dt, dtValues);
		}

		::System::String* GetInstanceName(::System::Xml::XmlElement* node)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::XmlElement*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_GETINSTANCENAME_OFFSET))(this, node);
		}

		::System::Void HandleColumn(::System::Xml::XmlElement* node, ::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlElement*, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_HANDLECOLUMN_OFFSET))(this, node, table);
		}

		::System::Void GetMinMax(::System::Xml::XmlElement* elNode, ::System::Int32& minOccurs, ::System::Int32& maxOccurs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlElement*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_GETMINMAX_OFFSET))(this, elNode, minOccurs, maxOccurs);
		}

		::System::Void GetMinMax_1(::System::Xml::XmlElement* elNode, ::System::Boolean isAttribute, ::System::Int32& minOccurs, ::System::Int32& maxOccurs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlElement*, ::System::Boolean, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_GETMINMAX_1_OFFSET))(this, elNode, isAttribute, minOccurs, maxOccurs);
		}

		::System::Void HandleTypeNode(::System::Xml::XmlElement* typeNode, ::System::Data::DataTable* table, ::System::Collections::ArrayList* tableChildren)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlElement*, ::System::Data::DataTable*, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_HANDLETYPENODE_OFFSET))(this, typeNode, table, tableChildren);
		}

		::System::Data::DataTable* InstantiateTable(::System::Data::DataSet* dataSet, ::System::Xml::XmlElement* node, ::System::Xml::XmlElement* typeNode)
		{
			return ((::System::Data::DataTable*(*)(::PVOID, ::System::Data::DataSet*, ::System::Xml::XmlElement*, ::System::Xml::XmlElement*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_INSTANTIATETABLE_OFFSET))(this, dataSet, node, typeNode);
		}

		::System::Data::DataTable* InstantiateSimpleTable(::System::Data::DataSet* dataSet, ::System::Xml::XmlElement* node)
		{
			return ((::System::Data::DataTable*(*)(::PVOID, ::System::Data::DataSet*, ::System::Xml::XmlElement*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_INSTANTIATESIMPLETABLE_OFFSET))(this, dataSet, node);
		}
	};
}
