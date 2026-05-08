#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataSet; }
namespace System::Data { class DataTable; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_DATA_XMLDATATREEWRITER_CREATETABLESHIERARCHY_OFFSET UNITYSDK_OFFSET(0x195D4760)
#define SYSTEM_DATA_XMLDATATREEWRITER_CREATETOPLEVELTABLES_OFFSET UNITYSDK_OFFSET(0x195D4B50)
#define SYSTEM_DATA_XMLDATATREEWRITER_GETNESTEDCHILDRELATIONS_OFFSET UNITYSDK_OFFSET(0x195D7DC0)
#define SYSTEM_DATA_XMLDATATREEWRITER_PRESERVESPACE_OFFSET UNITYSDK_OFFSET(0x195D81D0)
#define SYSTEM_DATA_XMLDATATREEWRITER_ROWHASERRORS_OFFSET UNITYSDK_OFFSET(0x195D5180)
#define SYSTEM_DATA_XMLDATATREEWRITER_SAVEDIFFGRAMDATA_OFFSET UNITYSDK_OFFSET(0x195D5350)
#define SYSTEM_DATA_XMLDATATREEWRITER_SAVE_OFFSET UNITYSDK_OFFSET(0x195BF370)
#define SYSTEM_DATA_XMLDATATREEWRITER_XMLDATAROWWRITER_OFFSET UNITYSDK_OFFSET(0x195D5F10)
#define SYSTEM_DATA_XMLDATATREEWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x195D4530)
#define SYSTEM_DATA_XMLDATATREEWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x195BEFD0)

namespace System::Data
{
	inline static constexpr unsigned int XmlDataTreeWriter_TypeDefinitionIndex = 37088;

	class XmlDataTreeWriter : public ::System::Object
	{
	public:
		::System::Data::DataSet* _ds; // 0x10
		::System::Collections::Hashtable* _rowsOrder; // 0x18
		::System::Data::DataTable* _dt; // 0x20
		::Il2CppArray<::System::Data::DataTable*>* _topLevelTables; // 0x28
		::System::Xml::XmlWriter* _xmlw; // 0x30
		::System::Collections::ArrayList* _dTables; // 0x38
		::System::Boolean _fFromTable; // 0x40
		::System::Boolean _isDiffgram; // 0x41
		::System::Boolean _writeHierarchy; // 0x42

		::System::Void _ctor(::System::Data::DataSet* ds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATATREEWRITER__CTOR_OFFSET))(this, ds);
		}

		::System::Void _ctor_1(::System::Data::DataTable* dt, ::System::Boolean writeHierarchy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATATREEWRITER__CTOR_1_OFFSET))(this, dt, writeHierarchy);
		}

		::Il2CppArray<::System::Data::DataTable*>* CreateToplevelTables()
		{
			return ((::Il2CppArray<::System::Data::DataTable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATATREEWRITER_CREATETOPLEVELTABLES_OFFSET))(this);
		}

		::System::Void CreateTablesHierarchy(::System::Data::DataTable* dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATATREEWRITER_CREATETABLESHIERARCHY_OFFSET))(this, dt);
		}

		static ::System::Boolean RowHasErrors(::System::Data::DataRow* row)
		{
			return ((::System::Boolean(*)(::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATATREEWRITER_ROWHASERRORS_OFFSET))(row);
		}

		::System::Void SaveDiffgramData(::System::Xml::XmlWriter* xw, ::System::Collections::Hashtable* rowsOrder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATATREEWRITER_SAVEDIFFGRAMDATA_OFFSET))(this, xw, rowsOrder);
		}

		::System::Void Save(::System::Xml::XmlWriter* xw, ::System::Boolean writeSchema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATATREEWRITER_SAVE_OFFSET))(this, xw, writeSchema);
		}

		::System::Collections::ArrayList* GetNestedChildRelations(::System::Data::DataRow* row)
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATATREEWRITER_GETNESTEDCHILDRELATIONS_OFFSET))(this, row);
		}

		::System::Void XmlDataRowWriter(::System::Data::DataRow* row, ::System::String* encodedTableName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATATREEWRITER_XMLDATAROWWRITER_OFFSET))(this, row, encodedTableName);
		}

		static ::System::Boolean PreserveSpace(::System::Object* value)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATATREEWRITER_PRESERVESPACE_OFFSET))(value);
		}
	};
}
