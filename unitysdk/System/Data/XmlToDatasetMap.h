#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class ArrayList; }
namespace System::Data { class DataColumn; }
namespace System::Data { class DataSet; }
namespace System::Data { class DataTable; }
namespace System::Data { class XmlToDatasetMap_TableSchemaInfo; }
namespace System::Data { class XmlToDatasetMap_XmlNodeIdHashtable; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlReader; }

#define SYSTEM_DATA_XMLTODATASETMAP_ADDCOLUMNSCHEMA_1_OFFSET UNITYSDK_OFFSET(0x1B9045E0)
#define SYSTEM_DATA_XMLTODATASETMAP_ADDCOLUMNSCHEMA_OFFSET UNITYSDK_OFFSET(0x1B904360)
#define SYSTEM_DATA_XMLTODATASETMAP_ADDTABLESCHEMA_1_OFFSET UNITYSDK_OFFSET(0x1B9040F0)
#define SYSTEM_DATA_XMLTODATASETMAP_ADDTABLESCHEMA_OFFSET UNITYSDK_OFFSET(0x1B903F60)
#define SYSTEM_DATA_XMLTODATASETMAP_BUILDIDENTITYMAP_1_OFFSET UNITYSDK_OFFSET(0x1B9020D0)
#define SYSTEM_DATA_XMLTODATASETMAP_BUILDIDENTITYMAP_2_OFFSET UNITYSDK_OFFSET(0x1B902E70)
#define SYSTEM_DATA_XMLTODATASETMAP_BUILDIDENTITYMAP_3_OFFSET UNITYSDK_OFFSET(0x1B903230)
#define SYSTEM_DATA_XMLTODATASETMAP_BUILDIDENTITYMAP_OFFSET UNITYSDK_OFFSET(0x1B9019B0)
#define SYSTEM_DATA_XMLTODATASETMAP_GETCOLUMNSCHEMA_1_OFFSET UNITYSDK_OFFSET(0x1B904F60)
#define SYSTEM_DATA_XMLTODATASETMAP_GETCOLUMNSCHEMA_OFFSET UNITYSDK_OFFSET(0x1B904C80)
#define SYSTEM_DATA_XMLTODATASETMAP_GETSCHEMAFORNODE_OFFSET UNITYSDK_OFFSET(0x1B905150)
#define SYSTEM_DATA_XMLTODATASETMAP_GETSELFANDDESCENDANTS_OFFSET UNITYSDK_OFFSET(0x1B9047B0)
#define SYSTEM_DATA_XMLTODATASETMAP_GETTABLEFORNODE_OFFSET UNITYSDK_OFFSET(0x1B9052B0)
#define SYSTEM_DATA_XMLTODATASETMAP_HANDLESPECIALCOLUMN_OFFSET UNITYSDK_OFFSET(0x1B904460)
#define SYSTEM_DATA_XMLTODATASETMAP_ISMAPPEDCOLUMN_OFFSET UNITYSDK_OFFSET(0x1B903F40)
#define SYSTEM_DATA_XMLTODATASETMAP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B9020C0)
#define SYSTEM_DATA_XMLTODATASETMAP__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B902E60)
#define SYSTEM_DATA_XMLTODATASETMAP__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B903220)
#define SYSTEM_DATA_XMLTODATASETMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9019A0)

namespace System::Data
{
	inline static constexpr unsigned int XmlToDatasetMap_TypeDefinitionIndex = 37080;

	class XmlToDatasetMap : public ::System::Object
	{
	public:
		::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* _tableSchemaMap; // 0x10
		::System::Data::XmlToDatasetMap_TableSchemaInfo* _lastTableSchemaInfo; // 0x18

		::System::Void _ctor(::System::Data::DataSet* dataSet, ::System::Xml::XmlNameTable* nameTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataSet*, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP__CTOR_OFFSET))(this, dataSet, nameTable);
		}

		::System::Void _ctor_1(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataSet* dataSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*, ::System::Data::DataSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP__CTOR_1_OFFSET))(this, nameTable, dataSet);
		}

		::System::Void _ctor_2(::System::Data::DataTable* dataTable, ::System::Xml::XmlNameTable* nameTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP__CTOR_2_OFFSET))(this, dataTable, nameTable);
		}

		::System::Void _ctor_3(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataTable* dataTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP__CTOR_3_OFFSET))(this, nameTable, dataTable);
		}

		static ::System::Boolean IsMappedColumn(::System::Data::DataColumn* c)
		{
			return ((::System::Boolean(*)(::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_ISMAPPEDCOLUMN_OFFSET))(c);
		}

		::System::Data::XmlToDatasetMap_TableSchemaInfo* AddTableSchema(::System::Data::DataTable* table, ::System::Xml::XmlNameTable* nameTable)
		{
			return ((::System::Data::XmlToDatasetMap_TableSchemaInfo*(*)(::PVOID, ::System::Data::DataTable*, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_ADDTABLESCHEMA_OFFSET))(this, table, nameTable);
		}

		::System::Data::XmlToDatasetMap_TableSchemaInfo* AddTableSchema_1(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataTable* table)
		{
			return ((::System::Data::XmlToDatasetMap_TableSchemaInfo*(*)(::PVOID, ::System::Xml::XmlNameTable*, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_ADDTABLESCHEMA_1_OFFSET))(this, nameTable, table);
		}

		::System::Boolean AddColumnSchema(::System::Data::DataColumn* col, ::System::Xml::XmlNameTable* nameTable, ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* columns)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataColumn*, ::System::Xml::XmlNameTable*, ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_ADDCOLUMNSCHEMA_OFFSET))(this, col, nameTable, columns);
		}

		::System::Boolean AddColumnSchema_1(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataColumn* col, ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* columns)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNameTable*, ::System::Data::DataColumn*, ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_ADDCOLUMNSCHEMA_1_OFFSET))(this, nameTable, col, columns);
		}

		::System::Void BuildIdentityMap(::System::Data::DataSet* dataSet, ::System::Xml::XmlNameTable* nameTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataSet*, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_BUILDIDENTITYMAP_OFFSET))(this, dataSet, nameTable);
		}

		::System::Void BuildIdentityMap_1(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataSet* dataSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*, ::System::Data::DataSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_BUILDIDENTITYMAP_1_OFFSET))(this, nameTable, dataSet);
		}

		::System::Void BuildIdentityMap_2(::System::Data::DataTable* dataTable, ::System::Xml::XmlNameTable* nameTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_BUILDIDENTITYMAP_2_OFFSET))(this, dataTable, nameTable);
		}

		::System::Void BuildIdentityMap_3(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataTable* dataTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_BUILDIDENTITYMAP_3_OFFSET))(this, nameTable, dataTable);
		}

		::System::Collections::ArrayList* GetSelfAndDescendants(::System::Data::DataTable* dt)
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_GETSELFANDDESCENDANTS_OFFSET))(this, dt);
		}

		::System::Object* GetColumnSchema(::System::Xml::XmlNode* node, ::System::Boolean fIgnoreNamespace)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_GETCOLUMNSCHEMA_OFFSET))(this, node, fIgnoreNamespace);
		}

		::System::Object* GetColumnSchema_1(::System::Data::DataTable* table, ::System::Xml::XmlReader* dataReader, ::System::Boolean fIgnoreNamespace)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Data::DataTable*, ::System::Xml::XmlReader*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_GETCOLUMNSCHEMA_1_OFFSET))(this, table, dataReader, fIgnoreNamespace);
		}

		::System::Object* GetSchemaForNode(::System::Xml::XmlNode* node, ::System::Boolean fIgnoreNamespace)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_GETSCHEMAFORNODE_OFFSET))(this, node, fIgnoreNamespace);
		}

		::System::Data::DataTable* GetTableForNode(::System::Xml::XmlReader* node, ::System::Boolean fIgnoreNamespace)
		{
			return ((::System::Data::DataTable*(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_GETTABLEFORNODE_OFFSET))(this, node, fIgnoreNamespace);
		}

		::System::Void HandleSpecialColumn(::System::Data::DataColumn* col, ::System::Xml::XmlNameTable* nameTable, ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* columns)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*, ::System::Xml::XmlNameTable*, ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_HANDLESPECIALCOLUMN_OFFSET))(this, col, nameTable, columns);
		}
	};
}
