#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Data { class DataSet; }
namespace System::Data { class DataTable; }
namespace System::Xml { class XmlReader; }

#define SYSTEM_DATA_XMLDIFFLOADER_CREATETABLESHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1F4B3090)
#define SYSTEM_DATA_XMLDIFFLOADER_GETTABLE_OFFSET UNITYSDK_OFFSET(0x1F4B54D0)
#define SYSTEM_DATA_XMLDIFFLOADER_LOADDIFFGRAM_1_OFFSET UNITYSDK_OFFSET(0x1F4B3470)
#define SYSTEM_DATA_XMLDIFFLOADER_LOADDIFFGRAM_OFFSET UNITYSDK_OFFSET(0x1F4B2470)
#define SYSTEM_DATA_XMLDIFFLOADER_PROCESSDIFFS_1_OFFSET UNITYSDK_OFFSET(0x1F4B3700)
#define SYSTEM_DATA_XMLDIFFLOADER_PROCESSDIFFS_OFFSET UNITYSDK_OFFSET(0x1F4B2680)
#define SYSTEM_DATA_XMLDIFFLOADER_PROCESSERRORS_1_OFFSET UNITYSDK_OFFSET(0x1F4B3BC0)
#define SYSTEM_DATA_XMLDIFFLOADER_PROCESSERRORS_OFFSET UNITYSDK_OFFSET(0x1F4B2B70)
#define SYSTEM_DATA_XMLDIFFLOADER_READOLDROWDATA_OFFSET UNITYSDK_OFFSET(0x1F4B42C0)
#define SYSTEM_DATA_XMLDIFFLOADER_SKIPWHITESPACES_OFFSET UNITYSDK_OFFSET(0x1F4B4270)
#define SYSTEM_DATA_XMLDIFFLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4B5750)

namespace System::Data
{
	inline static constexpr unsigned int XMLDiffLoader_TypeDefinitionIndex = 39350;

	class XMLDiffLoader : public ::System::Object
	{
	public:
		::System::Data::DataTable* _dataTable; // 0x10
		::System::Data::DataSet* _dataSet; // 0x18
		::System::Collections::ArrayList* _tables; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDIFFLOADER__CTOR_OFFSET))(this);
		}

		::System::Void LoadDiffGram(::System::Data::DataSet* ds, ::System::Xml::XmlReader* dataTextReader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataSet*, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDIFFLOADER_LOADDIFFGRAM_OFFSET))(this, ds, dataTextReader);
		}

		::System::Void CreateTablesHierarchy(::System::Data::DataTable* dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDIFFLOADER_CREATETABLESHIERARCHY_OFFSET))(this, dt);
		}

		::System::Void LoadDiffGram_1(::System::Data::DataTable* dt, ::System::Xml::XmlReader* dataTextReader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDIFFLOADER_LOADDIFFGRAM_1_OFFSET))(this, dt, dataTextReader);
		}

		::System::Void ProcessDiffs(::System::Data::DataSet* ds, ::System::Xml::XmlReader* ssync)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataSet*, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDIFFLOADER_PROCESSDIFFS_OFFSET))(this, ds, ssync);
		}

		::System::Void ProcessDiffs_1(::System::Collections::ArrayList* tableList, ::System::Xml::XmlReader* ssync)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ArrayList*, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDIFFLOADER_PROCESSDIFFS_1_OFFSET))(this, tableList, ssync);
		}

		::System::Void ProcessErrors(::System::Data::DataSet* ds, ::System::Xml::XmlReader* ssync)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataSet*, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDIFFLOADER_PROCESSERRORS_OFFSET))(this, ds, ssync);
		}

		::System::Void ProcessErrors_1(::System::Collections::ArrayList* dt, ::System::Xml::XmlReader* ssync)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ArrayList*, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDIFFLOADER_PROCESSERRORS_1_OFFSET))(this, dt, ssync);
		}

		::System::Data::DataTable* GetTable(::System::String* tableName, ::System::String* ns)
		{
			return ((::System::Data::DataTable*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDIFFLOADER_GETTABLE_OFFSET))(this, tableName, ns);
		}

		::System::Int32 ReadOldRowData(::System::Data::DataSet* ds, ::System::Data::DataTable*& table, ::System::Int32& pos, ::System::Xml::XmlReader* row)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::DataSet*, ::System::Data::DataTable*&, ::System::Int32&, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDIFFLOADER_READOLDROWDATA_OFFSET))(this, ds, table, pos, row);
		}

		::System::Void SkipWhitespaces(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDIFFLOADER_SKIPWHITESPACES_OFFSET))(this, reader);
		}
	};
}
