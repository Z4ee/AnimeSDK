#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class Stack; }
namespace System::Data { class DataColumn; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataSet; }
namespace System::Data { class DataTable; }
namespace System::Data { class XmlToDatasetMap; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlElement; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlReader; }

#define SYSTEM_DATA_XMLDATALOADER_ATTACHROWS_OFFSET UNITYSDK_OFFSET(0x1D9FDFF0)
#define SYSTEM_DATA_XMLDATALOADER_COUNTNONNSATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1D9FE260)
#define SYSTEM_DATA_XMLDATALOADER_FCOLUMNELEMENT_OFFSET UNITYSDK_OFFSET(0x1D9FEC90)
#define SYSTEM_DATA_XMLDATALOADER_FEXCLUDEDNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1D9FE480)
#define SYSTEM_DATA_XMLDATALOADER_FIGNORENAMESPACE_1_OFFSET UNITYSDK_OFFSET(0x1D9FEE50)
#define SYSTEM_DATA_XMLDATALOADER_FIGNORENAMESPACE_OFFSET UNITYSDK_OFFSET(0x1D9FED80)
#define SYSTEM_DATA_XMLDATALOADER_GETINITIALTEXTFROMNODES_OFFSET UNITYSDK_OFFSET(0x1D9FE8A0)
#define SYSTEM_DATA_XMLDATALOADER_GETROWFROMELEMENT_OFFSET UNITYSDK_OFFSET(0x1D9FE1D0)
#define SYSTEM_DATA_XMLDATALOADER_GETTEXTONLYCOLUMN_OFFSET UNITYSDK_OFFSET(0x1D9FEBD0)
#define SYSTEM_DATA_XMLDATALOADER_GETVALUEFORTEXTONLYCOLUMS_OFFSET UNITYSDK_OFFSET(0x1D9FE540)
#define SYSTEM_DATA_XMLDATALOADER_INITNAMETABLE_OFFSET UNITYSDK_OFFSET(0x1DA00830)
#define SYSTEM_DATA_XMLDATALOADER_ISTEXTLIKENODE_OFFSET UNITYSDK_OFFSET(0x1D9FE840)
#define SYSTEM_DATA_XMLDATALOADER_ISTEXTONLY_OFFSET UNITYSDK_OFFSET(0x1D9FEC70)
#define SYSTEM_DATA_XMLDATALOADER_LOADCOLUMN_OFFSET UNITYSDK_OFFSET(0x1DA033E0)
#define SYSTEM_DATA_XMLDATALOADER_LOADDATA_1_OFFSET UNITYSDK_OFFSET(0x1DA00990)
#define SYSTEM_DATA_XMLDATALOADER_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9FEEE0)
#define SYSTEM_DATA_XMLDATALOADER_LOADROWDATA_OFFSET UNITYSDK_OFFSET(0x1D9FF4D0)
#define SYSTEM_DATA_XMLDATALOADER_LOADROWS_OFFSET UNITYSDK_OFFSET(0x1DA003D0)
#define SYSTEM_DATA_XMLDATALOADER_LOADTABLE_OFFSET UNITYSDK_OFFSET(0x1DA01F30)
#define SYSTEM_DATA_XMLDATALOADER_LOADTOPMOSTTABLE_OFFSET UNITYSDK_OFFSET(0x1DA00F10)
#define SYSTEM_DATA_XMLDATALOADER_PROCESSXSDSCHEMA_OFFSET UNITYSDK_OFFSET(0x1DA01CF0)
#define SYSTEM_DATA_XMLDATALOADER_SETROWVALUEFROMXMLTEXT_OFFSET UNITYSDK_OFFSET(0x1DA00770)
#define SYSTEM_DATA_XMLDATALOADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D9FDCD0)
#define SYSTEM_DATA_XMLDATALOADER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D9FDDF0)
#define SYSTEM_DATA_XMLDATALOADER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D9FDEC0)
#define SYSTEM_DATA_XMLDATALOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FDC10)

namespace System::Data
{
	inline static constexpr unsigned int XmlDataLoader_TypeDefinitionIndex = 38695;

	class XmlDataLoader : public ::System::Object
	{
	public:
		::System::Collections::Stack* _childRowsStack; // 0x10
		::System::Object* _XDRNS; // 0x18
		::System::Object* _ROWORDER; // 0x20
		::System::Object* _XSDNS; // 0x28
		::System::Collections::Hashtable* _nodeToRowMap; // 0x30
		::System::Xml::XmlReader* _dataReader; // 0x38
		::System::Data::XmlToDatasetMap* _nodeToSchemaMap; // 0x40
		::System::Object* _HASCHANGES; // 0x48
		::System::Xml::XmlElement* _topMostNode; // 0x50
		::System::Object* _XSD_XMLNS_NS; // 0x58
		::System::Object* _MSDNS; // 0x60
		::System::Object* _DFFNS; // 0x68
		::System::Object* _XDR_SCHEMA; // 0x70
		::System::Object* _XSD_SCHEMA; // 0x78
		::System::Data::DataSet* _dataSet; // 0x80
		::System::Object* _UPDGNS; // 0x88
		::System::Collections::Hashtable* _htableExcludedNS; // 0x90
		::System::Object* _SQL_SYNC; // 0x98
		::System::Object* _DIFFID; // 0xA0
		::System::Data::DataTable* _dataTable; // 0xA8
		::System::Boolean _ignoreSchema; // 0xB0
		::System::Boolean _fIsXdr; // 0xB1
		::System::Boolean _isTableLevel; // 0xB2
		::System::Boolean _fromInference; // 0xB3
		::System::Boolean _isDiffgram; // 0xB4

		::System::Void _ctor(::System::Data::DataSet* dataset, ::System::Boolean IsXdr, ::System::Boolean ignoreSchema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataSet*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER__CTOR_OFFSET))(this, dataset, IsXdr, ignoreSchema);
		}

		::System::Void _ctor_1(::System::Data::DataSet* dataset, ::System::Boolean IsXdr, ::System::Xml::XmlElement* topNode, ::System::Boolean ignoreSchema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataSet*, ::System::Boolean, ::System::Xml::XmlElement*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER__CTOR_1_OFFSET))(this, dataset, IsXdr, topNode, ignoreSchema);
		}

		::System::Void _ctor_2(::System::Data::DataTable* datatable, ::System::Boolean IsXdr, ::System::Boolean ignoreSchema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER__CTOR_2_OFFSET))(this, datatable, IsXdr, ignoreSchema);
		}

		::System::Void _ctor_3(::System::Data::DataTable* datatable, ::System::Boolean IsXdr, ::System::Xml::XmlElement* topNode, ::System::Boolean ignoreSchema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Boolean, ::System::Xml::XmlElement*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER__CTOR_3_OFFSET))(this, datatable, IsXdr, topNode, ignoreSchema);
		}

		::System::Void AttachRows(::System::Data::DataRow* parentRow, ::System::Xml::XmlNode* parentElement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_ATTACHROWS_OFFSET))(this, parentRow, parentElement);
		}

		::System::Int32 CountNonNSAttributes(::System::Xml::XmlNode* node)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_COUNTNONNSATTRIBUTES_OFFSET))(this, node);
		}

		::System::String* GetValueForTextOnlyColums(::System::Xml::XmlNode* n)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_GETVALUEFORTEXTONLYCOLUMS_OFFSET))(this, n);
		}

		::System::String* GetInitialTextFromNodes(::System::Xml::XmlNode*& n)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::XmlNode*&))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_GETINITIALTEXTFROMNODES_OFFSET))(this, n);
		}

		::System::Data::DataColumn* GetTextOnlyColumn(::System::Data::DataRow* row)
		{
			return ((::System::Data::DataColumn*(*)(::PVOID, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_GETTEXTONLYCOLUMN_OFFSET))(this, row);
		}

		::System::Data::DataRow* GetRowFromElement(::System::Xml::XmlElement* e)
		{
			return ((::System::Data::DataRow*(*)(::PVOID, ::System::Xml::XmlElement*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_GETROWFROMELEMENT_OFFSET))(this, e);
		}

		::System::Boolean FColumnElement(::System::Xml::XmlElement* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlElement*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_FCOLUMNELEMENT_OFFSET))(this, e);
		}

		::System::Boolean FExcludedNamespace(::System::String* ns)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_FEXCLUDEDNAMESPACE_OFFSET))(this, ns);
		}

		::System::Boolean FIgnoreNamespace(::System::Xml::XmlNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_FIGNORENAMESPACE_OFFSET))(this, node);
		}

		::System::Boolean FIgnoreNamespace_1(::System::Xml::XmlReader* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_FIGNORENAMESPACE_1_OFFSET))(this, node);
		}

		::System::Boolean IsTextLikeNode(::System::Xml::XmlNodeType n)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_ISTEXTLIKENODE_OFFSET))(this, n);
		}

		::System::Boolean IsTextOnly(::System::Data::DataColumn* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_ISTEXTONLY_OFFSET))(this, c);
		}

		::System::Void LoadData(::System::Xml::XmlDocument* xdoc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_LOADDATA_OFFSET))(this, xdoc);
		}

		::System::Void LoadRowData(::System::Data::DataRow* row, ::System::Xml::XmlElement* rowElement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Xml::XmlElement*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_LOADROWDATA_OFFSET))(this, row, rowElement);
		}

		::System::Void LoadRows(::System::Data::DataRow* parentRow, ::System::Xml::XmlNode* parentElement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_LOADROWS_OFFSET))(this, parentRow, parentElement);
		}

		::System::Void SetRowValueFromXmlText(::System::Data::DataRow* row, ::System::Data::DataColumn* col, ::System::String* xmlText)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataColumn*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_SETROWVALUEFROMXMLTEXT_OFFSET))(this, row, col, xmlText);
		}

		::System::Void InitNameTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_INITNAMETABLE_OFFSET))(this);
		}

		::System::Void LoadData_1(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_LOADDATA_1_OFFSET))(this, reader);
		}

		::System::Void LoadTopMostTable(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_LOADTOPMOSTTABLE_OFFSET))(this, table);
		}

		::System::Void LoadTable(::System::Data::DataTable* table, ::System::Boolean isNested)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_LOADTABLE_OFFSET))(this, table, isNested);
		}

		::System::Void LoadColumn(::System::Data::DataColumn* column, ::Il2CppArray<::System::Object*>* foundColumns)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_LOADCOLUMN_OFFSET))(this, column, foundColumns);
		}

		::System::Boolean ProcessXsdSchema()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_PROCESSXSDSCHEMA_OFFSET))(this);
		}
	};
}
