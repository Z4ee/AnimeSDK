#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/MarshalByValueComponent.h"
#include "unitysdk/System/Data/AggregateType.h"
#include "unitysdk/System/Data/Common/StorageType.h"
#include "unitysdk/System/Data/DataRowAction.h"
#include "unitysdk/System/Data/DataRowVersion.h"
#include "unitysdk/System/Data/DataSetDateTime.h"
#include "unitysdk/System/Data/MappingType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class BitArray; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }
namespace System::Data { class AutoIncrementValue; }
namespace System::Data { class DataExpression; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataTable; }
namespace System::Data { class Index; }
namespace System::Data { class PropertyCollection; }
namespace System::Data { class SimpleType; }
namespace System::Data::Common { class DataStorage; }
namespace System::Globalization { class CultureInfo; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Serialization { class XmlRootAttribute; }

#define SYSTEM_DATA_DATACOLUMN_ADDDEPENDENTCOLUMN_OFFSET UNITYSDK_OFFSET(0x1E3E2470)
#define SYSTEM_DATA_DATACOLUMN_BINDEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1E3DE7C0)
#define SYSTEM_DATA_DATACOLUMN_CHECKCOLUMNCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1E3E0780)
#define SYSTEM_DATA_DATACOLUMN_CHECKMAXLENGTH_1_OFFSET UNITYSDK_OFFSET(0x1E3E08D0)
#define SYSTEM_DATA_DATACOLUMN_CHECKMAXLENGTH_OFFSET UNITYSDK_OFFSET(0x1E3DF0F0)
#define SYSTEM_DATA_DATACOLUMN_CHECKNOTALLOWNULL_OFFSET UNITYSDK_OFFSET(0x1E3DBAB0)
#define SYSTEM_DATA_DATACOLUMN_CHECKNULLABLE_OFFSET UNITYSDK_OFFSET(0x1E3E07E0)
#define SYSTEM_DATA_DATACOLUMN_CHECKUNIQUE_OFFSET UNITYSDK_OFFSET(0x1E3E03A0)
#define SYSTEM_DATA_DATACOLUMN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3E0C30)
#define SYSTEM_DATA_DATACOLUMN_COMPAREVALUETO_1_OFFSET UNITYSDK_OFFSET(0x1E3E0BA0)
#define SYSTEM_DATA_DATACOLUMN_COMPAREVALUETO_OFFSET UNITYSDK_OFFSET(0x1E3E0A20)
#define SYSTEM_DATA_DATACOLUMN_COMPARE_OFFSET UNITYSDK_OFFSET(0x1E3E09F0)
#define SYSTEM_DATA_DATACOLUMN_CONVERTOBJECTTOXML_1_OFFSET UNITYSDK_OFFSET(0x1E3E2230)
#define SYSTEM_DATA_DATACOLUMN_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x1E3DDDB0)
#define SYSTEM_DATA_DATACOLUMN_CONVERTVALUE_OFFSET UNITYSDK_OFFSET(0x1E3E0BD0)
#define SYSTEM_DATA_DATACOLUMN_CONVERTXMLTOOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1E3E2180)
#define SYSTEM_DATA_DATACOLUMN_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x1E3E20E0)
#define SYSTEM_DATA_DATACOLUMN_COPYVALUEINTOSTORE_OFFSET UNITYSDK_OFFSET(0x1E3E2380)
#define SYSTEM_DATA_DATACOLUMN_COPY_OFFSET UNITYSDK_OFFSET(0x1E3E0C00)
#define SYSTEM_DATA_DATACOLUMN_FINISHINITINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1E3E1EB0)
#define SYSTEM_DATA_DATACOLUMN_FREERECORD_OFFSET UNITYSDK_OFFSET(0x1E3DFEA0)
#define SYSTEM_DATA_DATACOLUMN_GETAGGREGATEVALUE_OFFSET UNITYSDK_OFFSET(0x1E3E1280)
#define SYSTEM_DATA_DATACOLUMN_GETCOLUMNVALUEASSTRING_OFFSET UNITYSDK_OFFSET(0x1E3DDBB0)
#define SYSTEM_DATA_DATACOLUMN_GETDATAROW_OFFSET UNITYSDK_OFFSET(0x1E3DFB50)
#define SYSTEM_DATA_DATACOLUMN_GETEMPTYCOLUMNSTORE_OFFSET UNITYSDK_OFFSET(0x1E3E22E0)
#define SYSTEM_DATA_DATACOLUMN_GETSTRINGLENGTH_OFFSET UNITYSDK_OFFSET(0x1E3E09C0)
#define SYSTEM_DATA_DATACOLUMN_GET_AUTOINCREMENTCURRENT_OFFSET UNITYSDK_OFFSET(0x1E3DCD20)
#define SYSTEM_DATA_DATACOLUMN_GET_AUTOINCREMENTSEED_OFFSET UNITYSDK_OFFSET(0x1E3DCD90)
#define SYSTEM_DATA_DATACOLUMN_GET_AUTOINCREMENTSTEP_OFFSET UNITYSDK_OFFSET(0x1E3DD100)
#define SYSTEM_DATA_DATACOLUMN_GET_AUTOINCREMENT_OFFSET UNITYSDK_OFFSET(0x1E3DBF20)
#define SYSTEM_DATA_DATACOLUMN_GET_AUTOINC_OFFSET UNITYSDK_OFFSET(0x1E3DCBF0)
#define SYSTEM_DATA_DATACOLUMN_GET_CAPTION_OFFSET UNITYSDK_OFFSET(0x1E3DD240)
#define SYSTEM_DATA_DATACOLUMN_GET_COMPUTED_OFFSET UNITYSDK_OFFSET(0x1E3DDE50)
#define SYSTEM_DATA_DATACOLUMN_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1E3DE110)
#define SYSTEM_DATA_DATACOLUMN_GET_ENCODEDCOLUMNNAME_OFFSET UNITYSDK_OFFSET(0x1E3DD8E0)
#define SYSTEM_DATA_DATACOLUMN_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x1E3DE7F0)
#define SYSTEM_DATA_DATACOLUMN_GET_EXTENDEDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E3DEC10)
#define SYSTEM_DATA_DATACOLUMN_GET_FORMATPROVIDER_OFFSET UNITYSDK_OFFSET(0x1E3DCF80)
#define SYSTEM_DATA_DATACOLUMN_GET_HASDATA_OFFSET UNITYSDK_OFFSET(0x1E3DC250)
#define SYSTEM_DATA_DATACOLUMN_GET_ISCUSTOMTYPE_OFFSET UNITYSDK_OFFSET(0x1E3E13C0)
#define SYSTEM_DATA_DATACOLUMN_GET_ISVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1E3DECC0)
#define SYSTEM_DATA_DATACOLUMN_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E3DDD80)
#define SYSTEM_DATA_DATACOLUMN_GET_LOCALE_OFFSET UNITYSDK_OFFSET(0x1E3DD2D0)
#define SYSTEM_DATA_DATACOLUMN_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1E3DF4E0)
#define SYSTEM_DATA_DATACOLUMN_GET_SORTINDEX_OFFSET UNITYSDK_OFFSET(0x1E3DF9B0)
#define SYSTEM_DATA_DATACOLUMN_GET_TABLE_OFFSET UNITYSDK_OFFSET(0x1E3DFA80)
#define SYSTEM_DATA_DATACOLUMN_HANDLEDEPENDENTCOLUMNLIST_OFFSET UNITYSDK_OFFSET(0x1E3DE940)
#define SYSTEM_DATA_DATACOLUMN_INITIALIZERECORD_OFFSET UNITYSDK_OFFSET(0x1E3DEBD0)
#define SYSTEM_DATA_DATACOLUMN_INIT_OFFSET UNITYSDK_OFFSET(0x1E3E1330)
#define SYSTEM_DATA_DATACOLUMN_INSURESTORAGE_OFFSET UNITYSDK_OFFSET(0x1E3E1EF0)
#define SYSTEM_DATA_DATACOLUMN_ISAUTOINCREMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1E3DC0E0)
#define SYSTEM_DATA_DATACOLUMN_ISINRELATION_OFFSET UNITYSDK_OFFSET(0x1E3DDE60)
#define SYSTEM_DATA_DATACOLUMN_ISMAXLENGTHVIOLATED_OFFSET UNITYSDK_OFFSET(0x1E3E15B0)
#define SYSTEM_DATA_DATACOLUMN_ISNOTALLOWDBNULLVIOLATED_OFFSET UNITYSDK_OFFSET(0x1E3E1CC0)
#define SYSTEM_DATA_DATACOLUMN_ISVALUECUSTOMTYPEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1E3E14A0)
#define SYSTEM_DATA_DATACOLUMN_ONPROPERTYCHANGING_OFFSET UNITYSDK_OFFSET(0x1E3E1ED0)
#define SYSTEM_DATA_DATACOLUMN_ONSETDATASET_OFFSET UNITYSDK_OFFSET(0x1E3E2000)
#define SYSTEM_DATA_DATACOLUMN_RAISEPROPERTYCHANGING_OFFSET UNITYSDK_OFFSET(0x1E3DD840)
#define SYSTEM_DATA_DATACOLUMN_REMOVEDEPENDENTCOLUMN_OFFSET UNITYSDK_OFFSET(0x1E3E2530)
#define SYSTEM_DATA_DATACOLUMN_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x1E3E1F60)
#define SYSTEM_DATA_DATACOLUMN_SETMAXLENGTHSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x1E3DECE0)
#define SYSTEM_DATA_DATACOLUMN_SETORDINALINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E3DF840)
#define SYSTEM_DATA_DATACOLUMN_SETSTORAGE_OFFSET UNITYSDK_OFFSET(0x1E3E23C0)
#define SYSTEM_DATA_DATACOLUMN_SETTABLE_OFFSET UNITYSDK_OFFSET(0x1E3DFA90)
#define SYSTEM_DATA_DATACOLUMN_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1E3DFD70)
#define SYSTEM_DATA_DATACOLUMN_SET_ALLOWDBNULL_OFFSET UNITYSDK_OFFSET(0x1E3DB920)
#define SYSTEM_DATA_DATACOLUMN_SET_AUTOINCREMENTCURRENT_OFFSET UNITYSDK_OFFSET(0x1E3DCDB0)
#define SYSTEM_DATA_DATACOLUMN_SET_AUTOINCREMENTSEED_OFFSET UNITYSDK_OFFSET(0x1E3DCFF0)
#define SYSTEM_DATA_DATACOLUMN_SET_AUTOINCREMENTSTEP_OFFSET UNITYSDK_OFFSET(0x1E3DD130)
#define SYSTEM_DATA_DATACOLUMN_SET_AUTOINCREMENT_OFFSET UNITYSDK_OFFSET(0x1E3DBF40)
#define SYSTEM_DATA_DATACOLUMN_SET_CAPTION_OFFSET UNITYSDK_OFFSET(0x1E3DD260)
#define SYSTEM_DATA_DATACOLUMN_SET_COLUMNMAPPING_OFFSET UNITYSDK_OFFSET(0x1E3E0420)
#define SYSTEM_DATA_DATACOLUMN_SET_COLUMNNAME_OFFSET UNITYSDK_OFFSET(0x1E3DD2F0)
#define SYSTEM_DATA_DATACOLUMN_SET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x1E3DC260)
#define SYSTEM_DATA_DATACOLUMN_SET_DATETIMEMODE_OFFSET UNITYSDK_OFFSET(0x1E3DE6B0)
#define SYSTEM_DATA_DATACOLUMN_SET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1E3DE310)
#define SYSTEM_DATA_DATACOLUMN_SET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x1E3DAD10)
#define SYSTEM_DATA_DATACOLUMN_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E3DFBB0)
#define SYSTEM_DATA_DATACOLUMN_SET_MAXLENGTH_OFFSET UNITYSDK_OFFSET(0x1E3DEE80)
#define SYSTEM_DATA_DATACOLUMN_SET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1E3DF5A0)
#define SYSTEM_DATA_DATACOLUMN_SET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1E3DD9A0)
#define SYSTEM_DATA_DATACOLUMN_SET_READONLY_OFFSET UNITYSDK_OFFSET(0x1E3DE870)
#define SYSTEM_DATA_DATACOLUMN_SET_SIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x1E3DAB70)
#define SYSTEM_DATA_DATACOLUMN_SET_UNIQUE_OFFSET UNITYSDK_OFFSET(0x1E3DFED0)
#define SYSTEM_DATA_DATACOLUMN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3E2010)
#define SYSTEM_DATA_DATACOLUMN_UPDATECOLUMNTYPE_OFFSET UNITYSDK_OFFSET(0x1E3DABF0)
#define SYSTEM_DATA_DATACOLUMN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3DA7E0)
#define SYSTEM_DATA_DATACOLUMN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DA790)

namespace System::Data
{
	inline static constexpr unsigned int DataColumn_TypeDefinitionIndex = 39225;

	class DataColumn : public ::System::ComponentModel::MarshalByValueComponent
	{
	public:
		static ::System::Int32* StaticGet_s_objectTypeCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DataColumn_TypeDefinitionIndex)->GetStaticField(0x93D0);
		}
		::System::Data::SimpleType* _simpleType; // 0x20
		::System::Data::Common::DataStorage* _storage; // 0x28
		::System::Type* _dataType; // 0x30
		::System::Data::Index* _sortIndex; // 0x38
		::System::ComponentModel::PropertyChangedEventHandler* PropertyChanging; // 0x40
		::System::Data::PropertyCollection* _extendedProperties; // 0x48
		::System::String* _encodedColumnName; // 0x50
		::System::Object* _defaultValue; // 0x58
		::System::String* _XmlDataType_k__BackingField; // 0x60
		::System::String* _columnUri; // 0x68
		::System::String* _caption; // 0x70
		::System::String* _columnPrefix; // 0x78
		::System::Data::DataTable* _table; // 0x80
		::System::Collections::Generic::List_1<::System::Data::DataColumn*>* _dependentColumns; // 0x88
		::System::String* _columnName; // 0x90
		::System::Data::AutoIncrementValue* _autoInc; // 0x98
		::System::Data::DataExpression* _expression; // 0xA0
		::System::Boolean _defaultValueIsNull; // 0xA8
		::System::Boolean _isSqlType; // 0xA9
		::System::Boolean _allowNull; // 0xAA
		::System::Boolean _unique; // 0xAB
		::System::Boolean _implementsIXMLSerializable; // 0xAC
		::System::Boolean _readOnly; // 0xAD
		::System::Boolean _implementsIRevertibleChangeTracking; // 0xAE
		::System::Int32 _errors; // 0xB0
		::System::Data::MappingType _columnMapping; // 0xB4
		::System::Int32 _maxLength; // 0xB8
		::System::Int32 _ordinal; // 0xBC
		::System::Int32 _hashCode; // 0xC0
		::System::Data::Common::StorageType _storageType; // 0xC4
		::System::Data::DataSetDateTime _dateTimeMode; // 0xC8
		::System::Int32 _objectID; // 0xCC
		::System::Boolean _implementsIChangeTracking; // 0xD0
		::System::Boolean _implementsINullable; // 0xD1

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* columnName, ::System::Type* dataType, ::System::String* expr, ::System::Data::MappingType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::String*, ::System::Data::MappingType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN__CTOR_1_OFFSET))(this, columnName, dataType, expr, type);
		}

		::System::Void UpdateColumnType(::System::Type* type, ::System::Data::Common::StorageType typeCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Data::Common::StorageType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_UPDATECOLUMNTYPE_OFFSET))(this, type, typeCode);
		}

		::System::Void set_AllowDBNull(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_SET_ALLOWDBNULL_OFFSET))(this, value);
		}

		::System::Boolean get_AutoIncrement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_GET_AUTOINCREMENT_OFFSET))(this);
		}

		::System::Void set_AutoIncrement(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_SET_AUTOINCREMENT_OFFSET))(this, value);
		}

		::System::Object* get_AutoIncrementCurrent()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_GET_AUTOINCREMENTCURRENT_OFFSET))(this);
		}

		::System::Void set_AutoIncrementCurrent(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_SET_AUTOINCREMENTCURRENT_OFFSET))(this, value);
		}

		::System::Data::AutoIncrementValue* get_AutoInc()
		{
			return ((::System::Data::AutoIncrementValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_GET_AUTOINC_OFFSET))(this);
		}

		::System::Int64 get_AutoIncrementSeed()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_GET_AUTOINCREMENTSEED_OFFSET))(this);
		}

		::System::Void set_AutoIncrementSeed(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_SET_AUTOINCREMENTSEED_OFFSET))(this, value);
		}

		::System::Int64 get_AutoIncrementStep()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_GET_AUTOINCREMENTSTEP_OFFSET))(this);
		}

		::System::Void set_AutoIncrementStep(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_SET_AUTOINCREMENTSTEP_OFFSET))(this, value);
		}

		::System::String* get_Caption()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_GET_CAPTION_OFFSET))(this);
		}

		::System::Void set_Caption(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_SET_CAPTION_OFFSET))(this, value);
		}

		::System::Void set_ColumnName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_SET_COLUMNNAME_OFFSET))(this, value);
		}

		::System::String* get_EncodedColumnName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_GET_ENCODEDCOLUMNNAME_OFFSET))(this);
		}

		::System::IFormatProvider* get_FormatProvider()
		{
			return ((::System::IFormatProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_GET_FORMATPROVIDER_OFFSET))(this);
		}

		::System::Globalization::CultureInfo* get_Locale()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_GET_LOCALE_OFFSET))(this);
		}

		::System::Void set_Prefix(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_SET_PREFIX_OFFSET))(this, value);
		}

		::System::String* GetColumnValueAsString(::System::Data::DataRow* row, ::System::Data::DataRowVersion version)
		{
			return ((::System::String*(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_GETCOLUMNVALUEASSTRING_OFFSET))(this, row, version);
		}

		::System::Boolean get_Computed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_GET_COMPUTED_OFFSET))(this);
		}

		::System::Void set_DataType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_SET_DATATYPE_OFFSET))(this, value);
		}

		::System::Void set_DateTimeMode(::System::Data::DataSetDateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataSetDateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_SET_DATETIMEMODE_OFFSET))(this, value);
		}

		::System::Object* get_DefaultValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_GET_DEFAULTVALUE_OFFSET))(this);
		}

		::System::Void set_DefaultValue(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_SET_DEFAULTVALUE_OFFSET))(this, value);
		}

		::System::Void BindExpression()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_BINDEXPRESSION_OFFSET))(this);
		}

		::System::String* get_Expression()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_GET_EXPRESSION_OFFSET))(this);
		}

		::System::Void set_Expression(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_SET_EXPRESSION_OFFSET))(this, value);
		}

		::System::Data::PropertyCollection* get_ExtendedProperties()
		{
			return ((::System::Data::PropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_GET_EXTENDEDPROPERTIES_OFFSET))(this);
		}

		::System::Boolean get_HasData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_GET_HASDATA_OFFSET))(this);
		}

		::System::Boolean get_IsValueType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_GET_ISVALUETYPE_OFFSET))(this);
		}

		::System::Void SetMaxLengthSimpleType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_SETMAXLENGTHSIMPLETYPE_OFFSET))(this);
		}

		::System::Void set_MaxLength(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_SET_MAXLENGTH_OFFSET))(this, value);
		}

		::System::String* get_Namespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_GET_NAMESPACE_OFFSET))(this);
		}

		::System::Void set_Namespace(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_SET_NAMESPACE_OFFSET))(this, value);
		}

		::System::Void SetOrdinalInternal(::System::Int32 ordinal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_SETORDINALINTERNAL_OFFSET))(this, ordinal);
		}

		::System::Void set_ReadOnly(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_SET_READONLY_OFFSET))(this, value);
		}

		::System::Data::Index* get_SortIndex()
		{
			return ((::System::Data::Index*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_GET_SORTINDEX_OFFSET))(this);
		}

		::System::Data::DataTable* get_Table()
		{
			return ((::System::Data::DataTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_GET_TABLE_OFFSET))(this);
		}

		::System::Void SetTable(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_SETTABLE_OFFSET))(this, table);
		}

		::System::Data::DataRow* GetDataRow(::System::Int32 index)
		{
			return ((::System::Data::DataRow*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_GETDATAROW_OFFSET))(this, index);
		}

		::System::Object* get_Item(::System::Int32 record)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_GET_ITEM_OFFSET))(this, record);
		}

		::System::Void set_Item(::System::Int32 record, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_SET_ITEM_OFFSET))(this, record, value);
		}

		::System::Void InitializeRecord(::System::Int32 record)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_INITIALIZERECORD_OFFSET))(this, record);
		}

		::System::Void SetValue(::System::Int32 record, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_SETVALUE_OFFSET))(this, record, value);
		}

		::System::Void FreeRecord(::System::Int32 record)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_FREERECORD_OFFSET))(this, record);
		}

		::System::Void set_Unique(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_SET_UNIQUE_OFFSET))(this, value);
		}

		::System::Void set_SimpleType(::System::Data::SimpleType* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::SimpleType*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_SET_SIMPLETYPE_OFFSET))(this, value);
		}

		::System::Void set_ColumnMapping(::System::Data::MappingType value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::MappingType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_SET_COLUMNMAPPING_OFFSET))(this, value);
		}

		::System::Void CheckColumnConstraint(::System::Data::DataRow* row, ::System::Data::DataRowAction action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRowAction))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_CHECKCOLUMNCONSTRAINT_OFFSET))(this, row, action);
		}

		::System::Boolean CheckMaxLength()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_CHECKMAXLENGTH_OFFSET))(this);
		}

		::System::Void CheckMaxLength_1(::System::Data::DataRow* dr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_CHECKMAXLENGTH_1_OFFSET))(this, dr);
		}

		::System::Void CheckNotAllowNull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_CHECKNOTALLOWNULL_OFFSET))(this);
		}

		::System::Void CheckNullable(::System::Data::DataRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_CHECKNULLABLE_OFFSET))(this, row);
		}

		::System::Void CheckUnique()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_CHECKUNIQUE_OFFSET))(this);
		}

		::System::Int32 Compare(::System::Int32 record1, ::System::Int32 record2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_COMPARE_OFFSET))(this, record1, record2);
		}

		::System::Boolean CompareValueTo(::System::Int32 record1, ::System::Object* value, ::System::Boolean checkType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_COMPAREVALUETO_OFFSET))(this, record1, value, checkType);
		}

		::System::Int32 CompareValueTo_1(::System::Int32 record1, ::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_COMPAREVALUETO_1_OFFSET))(this, record1, value);
		}

		::System::Object* ConvertValue(::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_CONVERTVALUE_OFFSET))(this, value);
		}

		::System::Void Copy(::System::Int32 srcRecordNo, ::System::Int32 dstRecordNo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_COPY_OFFSET))(this, srcRecordNo, dstRecordNo);
		}

		::System::Data::DataColumn* Clone()
		{
			return ((::System::Data::DataColumn*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_CLONE_OFFSET))(this);
		}

		::System::Object* GetAggregateValue(::Il2CppArray<::System::Int32>* records, ::System::Data::AggregateType kind)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Data::AggregateType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_GETAGGREGATEVALUE_OFFSET))(this, records, kind);
		}

		::System::Int32 GetStringLength(::System::Int32 record)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_GETSTRINGLENGTH_OFFSET))(this, record);
		}

		::System::Void Init(::System::Int32 record)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_INIT_OFFSET))(this, record);
		}

		static ::System::Boolean IsAutoIncrementType(::System::Type* dataType)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_ISAUTOINCREMENTTYPE_OFFSET))(dataType);
		}

		::System::Boolean get_IsCustomType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_GET_ISCUSTOMTYPE_OFFSET))(this);
		}

		::System::Boolean IsValueCustomTypeInstance(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_ISVALUECUSTOMTYPEINSTANCE_OFFSET))(this, value);
		}

		::System::Boolean IsInRelation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_ISINRELATION_OFFSET))(this);
		}

		::System::Boolean IsMaxLengthViolated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_ISMAXLENGTHVIOLATED_OFFSET))(this);
		}

		::System::Boolean IsNotAllowDBNullViolated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_ISNOTALLOWDBNULLVIOLATED_OFFSET))(this);
		}

		::System::Void FinishInitInProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_FINISHINITINPROGRESS_OFFSET))(this);
		}

		::System::Void OnPropertyChanging(::System::ComponentModel::PropertyChangedEventArgs* pcevent)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_ONPROPERTYCHANGING_OFFSET))(this, pcevent);
		}

		::System::Void RaisePropertyChanging(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_RAISEPROPERTYCHANGING_OFFSET))(this, name);
		}

		::System::Void InsureStorage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_INSURESTORAGE_OFFSET))(this);
		}

		::System::Void SetCapacity(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_SETCAPACITY_OFFSET))(this, capacity);
		}

		::System::Void OnSetDataSet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_ONSETDATASET_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_TOSTRING_OFFSET))(this);
		}

		::System::Object* ConvertXmlToObject(::System::String* s)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_CONVERTXMLTOOBJECT_OFFSET))(this, s);
		}

		::System::Object* ConvertXmlToObject_1(::System::Xml::XmlReader* xmlReader, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Xml::Serialization::XmlRootAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_CONVERTXMLTOOBJECT_1_OFFSET))(this, xmlReader, xmlAttrib);
		}

		::System::String* ConvertObjectToXml(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_CONVERTOBJECTTOXML_OFFSET))(this, value);
		}

		::System::Void ConvertObjectToXml_1(::System::Object* value, ::System::Xml::XmlWriter* xmlWriter, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::XmlWriter*, ::System::Xml::Serialization::XmlRootAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_CONVERTOBJECTTOXML_1_OFFSET))(this, value, xmlWriter, xmlAttrib);
		}

		::System::Object* GetEmptyColumnStore(::System::Int32 recordCount)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_GETEMPTYCOLUMNSTORE_OFFSET))(this, recordCount);
		}

		::System::Void CopyValueIntoStore(::System::Int32 record, ::System::Object* store, ::System::Collections::BitArray* nullbits, ::System::Int32 storeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_COPYVALUEINTOSTORE_OFFSET))(this, record, store, nullbits, storeIndex);
		}

		::System::Void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::BitArray*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_SETSTORAGE_OFFSET))(this, store, nullbits);
		}

		::System::Void AddDependentColumn(::System::Data::DataColumn* expressionColumn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_ADDDEPENDENTCOLUMN_OFFSET))(this, expressionColumn);
		}

		::System::Void RemoveDependentColumn(::System::Data::DataColumn* expressionColumn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_REMOVEDEPENDENTCOLUMN_OFFSET))(this, expressionColumn);
		}

		::System::Void HandleDependentColumnList(::System::Data::DataExpression* oldExpression, ::System::Data::DataExpression* newExpression)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataExpression*, ::System::Data::DataExpression*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMN_HANDLEDEPENDENTCOLUMNLIST_OFFSET))(this, oldExpression, newExpression);
		}
	};
}
