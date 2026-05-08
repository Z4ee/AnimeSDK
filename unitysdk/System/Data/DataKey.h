#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/DataViewRowState.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Data { class DataColumn; }
namespace System::Data { class DataTable; }
namespace System::Data { class Index; }

#define SYSTEM_DATA_DATAKEY_CHECKSTATE_OFFSET UNITYSDK_OFFSET(0x985970)
#define SYSTEM_DATA_DATAKEY_COLUMNSEQUAL_1_OFFSET UNITYSDK_OFFSET(0x1B62D020)
#define SYSTEM_DATA_DATAKEY_COLUMNSEQUAL_OFFSET UNITYSDK_OFFSET(0x985980)
#define SYSTEM_DATA_DATAKEY_CONTAINSCOLUMN_OFFSET UNITYSDK_OFFSET(0x985A20)
#define SYSTEM_DATA_DATAKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x985B00)
#define SYSTEM_DATA_DATAKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x985AF0)
#define SYSTEM_DATA_DATAKEY_GETCOLUMNNAMES_OFFSET UNITYSDK_OFFSET(0x985B90)
#define SYSTEM_DATA_DATAKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x985A90)
#define SYSTEM_DATA_DATAKEY_GETINDEXDESC_OFFSET UNITYSDK_OFFSET(0x985BA0)
#define SYSTEM_DATA_DATAKEY_GETKEYVALUES_OFFSET UNITYSDK_OFFSET(0x985BB0)
#define SYSTEM_DATA_DATAKEY_GETSORTINDEX_1_OFFSET UNITYSDK_OFFSET(0x985BD0)
#define SYSTEM_DATA_DATAKEY_GETSORTINDEX_OFFSET UNITYSDK_OFFSET(0x985BC0)
#define SYSTEM_DATA_DATAKEY_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x2F0450)
#define SYSTEM_DATA_DATAKEY_GET_TABLE_OFFSET UNITYSDK_OFFSET(0x985920)
#define SYSTEM_DATA_DATAKEY_RECORDSEQUAL_OFFSET UNITYSDK_OFFSET(0x985BE0)
#define SYSTEM_DATA_DATAKEY_TOARRAY_OFFSET UNITYSDK_OFFSET(0x985C80)
#define SYSTEM_DATA_DATAKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x985910)

namespace System::Data
{
	inline static constexpr unsigned int DataKey_TypeDefinitionIndex = 36968;

	struct alignas(8) DataKey
	{
		::Il2CppArray<::System::Data::DataColumn*>* _columns; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::Data::DataColumn*>* columns, ::System::Boolean copyColumns)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Data::DataColumn*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY__CTOR_OFFSET))(this, columns, copyColumns);
		}

		::System::Boolean get_HasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_GET_HASVALUE_OFFSET))(this);
		}

		::System::Data::DataTable* get_Table()
		{
			return ((::System::Data::DataTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_GET_TABLE_OFFSET))(this);
		}

		::System::Void CheckState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_CHECKSTATE_OFFSET))(this);
		}

		::System::Boolean ColumnsEqual(::System::Data::DataKey key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataKey))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_COLUMNSEQUAL_OFFSET))(this, key);
		}

		static ::System::Boolean ColumnsEqual_1(::Il2CppArray<::System::Data::DataColumn*>* column1, ::Il2CppArray<::System::Data::DataColumn*>* column2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Data::DataColumn*>*, ::Il2CppArray<::System::Data::DataColumn*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_COLUMNSEQUAL_1_OFFSET))(column1, column2);
		}

		::System::Boolean ContainsColumn(::System::Data::DataColumn* column)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_CONTAINSCOLUMN_OFFSET))(this, column);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_EQUALS_OFFSET))(this, value);
		}

		::System::Boolean Equals_1(::System::Data::DataKey value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataKey))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_EQUALS_1_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* GetColumnNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_GETCOLUMNNAMES_OFFSET))(this);
		}

		/*
		::Il2CppArray<::System::Data::IndexField>* GetIndexDesc()
		{
			return ((::Il2CppArray<::System::Data::IndexField>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_GETINDEXDESC_OFFSET))(this);
		}
		*/

		::Il2CppArray<::System::Object*>* GetKeyValues(::System::Int32 record)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_GETKEYVALUES_OFFSET))(this, record);
		}

		::System::Data::Index* GetSortIndex()
		{
			return ((::System::Data::Index*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_GETSORTINDEX_OFFSET))(this);
		}

		::System::Data::Index* GetSortIndex_1(::System::Data::DataViewRowState recordStates)
		{
			return ((::System::Data::Index*(*)(::PVOID, ::System::Data::DataViewRowState))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_GETSORTINDEX_1_OFFSET))(this, recordStates);
		}

		::System::Boolean RecordsEqual(::System::Int32 record1, ::System::Int32 record2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_RECORDSEQUAL_OFFSET))(this, record1, record2);
		}

		::Il2CppArray<::System::Data::DataColumn*>* ToArray()
		{
			return ((::Il2CppArray<::System::Data::DataColumn*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_TOARRAY_OFFSET))(this);
		}
	};
}
