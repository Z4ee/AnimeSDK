#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/AggregateType.h"
#include "unitysdk/System/Data/Common/StorageType.h"
#include "unitysdk/System/Data/DataSetDateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Tuple_4; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class BitArray; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Data { class DataColumn; }
namespace System::Data { class DataTable; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Serialization { class XmlRootAttribute; }

#define SYSTEM_DATA_COMMON_DATASTORAGE_AGGREGATECOUNT_OFFSET UNITYSDK_OFFSET(0x1F73A8C0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x1F73A8B0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_COMPAREBITS_OFFSET UNITYSDK_OFFSET(0x1F73A980)
#define SYSTEM_DATA_COMMON_DATASTORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x1F73AB80)
#define SYSTEM_DATA_COMMON_DATASTORAGE_CONVERTVALUE_OFFSET UNITYSDK_OFFSET(0x1F73A9E0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x1F73AB40)
#define SYSTEM_DATA_COMMON_DATASTORAGE_COPYBITS_OFFSET UNITYSDK_OFFSET(0x1F73A9F0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_COPYVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F73BB10)
#define SYSTEM_DATA_COMMON_DATASTORAGE_CREATESTORAGE_OFFSET UNITYSDK_OFFSET(0x1F73ABC0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_DETERMINEIFVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1F73A7D0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_GETBITS_OFFSET UNITYSDK_OFFSET(0x1F73AA30)
#define SYSTEM_DATA_COMMON_DATASTORAGE_GETEMPTYSTORAGEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F73BB00)
#define SYSTEM_DATA_COMMON_DATASTORAGE_GETQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1F73BC90)
#define SYSTEM_DATA_COMMON_DATASTORAGE_GETSTORAGETYPE_OFFSET UNITYSDK_OFFSET(0x1F73B320)
#define SYSTEM_DATA_COMMON_DATASTORAGE_GETSTRINGLENGTH_OFFSET UNITYSDK_OFFSET(0x1F73AA60)
#define SYSTEM_DATA_COMMON_DATASTORAGE_GETTYPESTORAGE_OFFSET UNITYSDK_OFFSET(0x1F73B440)
#define SYSTEM_DATA_COMMON_DATASTORAGE_GETTYPE_OFFSET UNITYSDK_OFFSET(0x1F73BB50)
#define SYSTEM_DATA_COMMON_DATASTORAGE_GET_DATETIMEMODE_OFFSET UNITYSDK_OFFSET(0x1F73A820)
#define SYSTEM_DATA_COMMON_DATASTORAGE_GET_FORMATPROVIDER_OFFSET UNITYSDK_OFFSET(0x1F73A840)
#define SYSTEM_DATA_COMMON_DATASTORAGE_HASVALUE_OFFSET UNITYSDK_OFFSET(0x1F73AA70)
#define SYSTEM_DATA_COMMON_DATASTORAGE_IMPLEMENTSINTERFACES_OFFSET UNITYSDK_OFFSET(0x1F73B660)
#define SYSTEM_DATA_COMMON_DATASTORAGE_IMPLEMENTSINULLABLEVALUE_OFFSET UNITYSDK_OFFSET(0x1F73B920)
#define SYSTEM_DATA_COMMON_DATASTORAGE_INSPECTTYPEFORINTERFACES_OFFSET UNITYSDK_OFFSET(0x1F73B7A0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_ISNULL_OFFSET UNITYSDK_OFFSET(0x1F73AA90)
#define SYSTEM_DATA_COMMON_DATASTORAGE_ISOBJECTNULL_OFFSET UNITYSDK_OFFSET(0x1F73B9A0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_ISOBJECTSQLNULL_OFFSET UNITYSDK_OFFSET(0x1F73BA30)
#define SYSTEM_DATA_COMMON_DATASTORAGE_ISSQLTYPE_1_OFFSET UNITYSDK_OFFSET(0x1F73B560)
#define SYSTEM_DATA_COMMON_DATASTORAGE_ISSQLTYPE_OFFSET UNITYSDK_OFFSET(0x1F73B550)
#define SYSTEM_DATA_COMMON_DATASTORAGE_ISTYPECUSTOMTYPE_1_OFFSET UNITYSDK_OFFSET(0x1F73A7B0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_ISTYPECUSTOMTYPE_OFFSET UNITYSDK_OFFSET(0x1F73B4E0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x1F73AAD0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_SETNULLBIT_OFFSET UNITYSDK_OFFSET(0x1F73AAB0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_SETSTORAGEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F73BB40)
#define SYSTEM_DATA_COMMON_DATASTORAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F73BD10)
#define SYSTEM_DATA_COMMON_DATASTORAGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F73A780)
#define SYSTEM_DATA_COMMON_DATASTORAGE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F73A650)
#define SYSTEM_DATA_COMMON_DATASTORAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F73A5B0)

namespace System::Data::Common
{
	inline static constexpr unsigned int DataStorage_TypeDefinitionIndex = 39401;

	class DataStorage : public ::System::Object
	{
	public:
		static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Tuple_4<::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean>*>** StaticGet_s_typeImplementsInterface()
		{
			return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Tuple_4<::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(DataStorage_TypeDefinitionIndex)->GetStaticField(0x2AAD0);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet_s_storageClassType()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(DataStorage_TypeDefinitionIndex)->GetStaticField(0x2AAD8);
		}
		static ::System::Func_2<::System::Type*, ::System::Tuple_4<::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean>*>** StaticGet_s_inspectTypeForInterfaces()
		{
			return (::System::Func_2<::System::Type*, ::System::Tuple_4<::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(DataStorage_TypeDefinitionIndex)->GetStaticField(0x2AAE0);
		}
		::System::Data::DataTable* _table; // 0x10
		::System::Object* _defaultValue; // 0x18
		::System::Data::DataColumn* _column; // 0x20
		::System::Object* _nullValue; // 0x28
		::System::Type* _dataType; // 0x30
		::System::Collections::BitArray* _dbNullBits; // 0x38
		::System::Data::Common::StorageType _storageTypeCode; // 0x40
		::System::Boolean _isStringType; // 0x44
		::System::Boolean _isCloneable; // 0x45
		::System::Boolean _isCustomDefinedType; // 0x46
		::System::Boolean _isValueType; // 0x47

		::System::Void _ctor(::System::Data::DataColumn* column, ::System::Type* type, ::System::Object* defaultValue, ::System::Data::Common::StorageType storageType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*, ::System::Type*, ::System::Object*, ::System::Data::Common::StorageType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE__CTOR_OFFSET))(this, column, type, defaultValue, storageType);
		}

		::System::Void _ctor_1(::System::Data::DataColumn* column, ::System::Type* type, ::System::Object* defaultValue, ::System::Object* nullValue, ::System::Data::Common::StorageType storageType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*, ::System::Type*, ::System::Object*, ::System::Object*, ::System::Data::Common::StorageType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE__CTOR_1_OFFSET))(this, column, type, defaultValue, nullValue, storageType);
		}

		::System::Void _ctor_2(::System::Data::DataColumn* column, ::System::Type* type, ::System::Object* defaultValue, ::System::Object* nullValue, ::System::Boolean isICloneable, ::System::Data::Common::StorageType storageType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*, ::System::Type*, ::System::Object*, ::System::Object*, ::System::Boolean, ::System::Data::Common::StorageType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE__CTOR_2_OFFSET))(this, column, type, defaultValue, nullValue, isICloneable, storageType);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE__CCTOR_OFFSET))();
		}

		::System::Data::DataSetDateTime get_DateTimeMode()
		{
			return ((::System::Data::DataSetDateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_GET_DATETIMEMODE_OFFSET))(this);
		}

		::System::IFormatProvider* get_FormatProvider()
		{
			return ((::System::IFormatProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_GET_FORMATPROVIDER_OFFSET))(this);
		}

		::System::Object* Aggregate(::Il2CppArray<::System::Int32>* recordNos, ::System::Data::AggregateType kind)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Data::AggregateType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_AGGREGATE_OFFSET))(this, recordNos, kind);
		}

		::System::Object* AggregateCount(::Il2CppArray<::System::Int32>* recordNos)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_AGGREGATECOUNT_OFFSET))(this, recordNos);
		}

		::System::Int32 CompareBits(::System::Int32 recordNo1, ::System::Int32 recordNo2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_COMPAREBITS_OFFSET))(this, recordNo1, recordNo2);
		}

		::System::Object* ConvertValue(::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_CONVERTVALUE_OFFSET))(this, value);
		}

		::System::Void CopyBits(::System::Int32 srcRecordNo, ::System::Int32 dstRecordNo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_COPYBITS_OFFSET))(this, srcRecordNo, dstRecordNo);
		}

		::System::Object* GetBits(::System::Int32 recordNo)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_GETBITS_OFFSET))(this, recordNo);
		}

		::System::Int32 GetStringLength(::System::Int32 record)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_GETSTRINGLENGTH_OFFSET))(this, record);
		}

		::System::Boolean HasValue(::System::Int32 recordNo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_HASVALUE_OFFSET))(this, recordNo);
		}

		::System::Boolean IsNull(::System::Int32 recordNo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_ISNULL_OFFSET))(this, recordNo);
		}

		::System::Void SetNullBit(::System::Int32 recordNo, ::System::Boolean flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_SETNULLBIT_OFFSET))(this, recordNo, flag);
		}

		::System::Void SetCapacity(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_SETCAPACITY_OFFSET))(this, capacity);
		}

		::System::Object* ConvertXmlToObject(::System::Xml::XmlReader* xmlReader, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Xml::Serialization::XmlRootAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_CONVERTXMLTOOBJECT_OFFSET))(this, xmlReader, xmlAttrib);
		}

		::System::Void ConvertObjectToXml(::System::Object* value, ::System::Xml::XmlWriter* xmlWriter, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::XmlWriter*, ::System::Xml::Serialization::XmlRootAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_CONVERTOBJECTTOXML_OFFSET))(this, value, xmlWriter, xmlAttrib);
		}

		static ::System::Data::Common::DataStorage* CreateStorage(::System::Data::DataColumn* column, ::System::Type* dataType, ::System::Data::Common::StorageType typeCode)
		{
			return ((::System::Data::Common::DataStorage*(*)(::System::Data::DataColumn*, ::System::Type*, ::System::Data::Common::StorageType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_CREATESTORAGE_OFFSET))(column, dataType, typeCode);
		}

		static ::System::Data::Common::StorageType GetStorageType(::System::Type* dataType)
		{
			return ((::System::Data::Common::StorageType(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_GETSTORAGETYPE_OFFSET))(dataType);
		}

		static ::System::Type* GetTypeStorage(::System::Data::Common::StorageType storageType)
		{
			return ((::System::Type*(*)(::System::Data::Common::StorageType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_GETTYPESTORAGE_OFFSET))(storageType);
		}

		static ::System::Boolean IsTypeCustomType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_ISTYPECUSTOMTYPE_OFFSET))(type);
		}

		static ::System::Boolean IsTypeCustomType_1(::System::Data::Common::StorageType typeCode)
		{
			return ((::System::Boolean(*)(::System::Data::Common::StorageType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_ISTYPECUSTOMTYPE_1_OFFSET))(typeCode);
		}

		static ::System::Boolean IsSqlType(::System::Data::Common::StorageType storageType)
		{
			return ((::System::Boolean(*)(::System::Data::Common::StorageType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_ISSQLTYPE_OFFSET))(storageType);
		}

		static ::System::Boolean IsSqlType_1(::System::Type* dataType)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_ISSQLTYPE_1_OFFSET))(dataType);
		}

		static ::System::Boolean DetermineIfValueType(::System::Data::Common::StorageType typeCode, ::System::Type* dataType)
		{
			return ((::System::Boolean(*)(::System::Data::Common::StorageType, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_DETERMINEIFVALUETYPE_OFFSET))(typeCode, dataType);
		}

		static ::System::Void ImplementsInterfaces(::System::Data::Common::StorageType typeCode, ::System::Type* dataType, ::System::Boolean& sqlType, ::System::Boolean& nullable, ::System::Boolean& xmlSerializable, ::System::Boolean& changeTracking, ::System::Boolean& revertibleChangeTracking)
		{
			return ((::System::Void(*)(::System::Data::Common::StorageType, ::System::Type*, ::System::Boolean&, ::System::Boolean&, ::System::Boolean&, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_IMPLEMENTSINTERFACES_OFFSET))(typeCode, dataType, sqlType, nullable, xmlSerializable, changeTracking, revertibleChangeTracking);
		}

		static ::System::Tuple_4<::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean>* InspectTypeForInterfaces(::System::Type* dataType)
		{
			return ((::System::Tuple_4<::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_INSPECTTYPEFORINTERFACES_OFFSET))(dataType);
		}

		static ::System::Boolean ImplementsINullableValue(::System::Data::Common::StorageType typeCode, ::System::Type* dataType)
		{
			return ((::System::Boolean(*)(::System::Data::Common::StorageType, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_IMPLEMENTSINULLABLEVALUE_OFFSET))(typeCode, dataType);
		}

		static ::System::Boolean IsObjectNull(::System::Object* value)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_ISOBJECTNULL_OFFSET))(value);
		}

		static ::System::Boolean IsObjectSqlNull(::System::Object* value)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_ISOBJECTSQLNULL_OFFSET))(value);
		}

		::System::Object* GetEmptyStorageInternal(::System::Int32 recordCount)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_GETEMPTYSTORAGEINTERNAL_OFFSET))(this, recordCount);
		}

		::System::Void CopyValueInternal(::System::Int32 record, ::System::Object* store, ::System::Collections::BitArray* nullbits, ::System::Int32 storeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_COPYVALUEINTERNAL_OFFSET))(this, record, store, nullbits, storeIndex);
		}

		::System::Void SetStorageInternal(::System::Object* store, ::System::Collections::BitArray* nullbits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::BitArray*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_SETSTORAGEINTERNAL_OFFSET))(this, store, nullbits);
		}

		static ::System::Type* GetType(::System::String* value)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_GETTYPE_OFFSET))(value);
		}

		static ::System::String* GetQualifiedName(::System::Type* type)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_GETQUALIFIEDNAME_OFFSET))(type);
		}
	};
}
