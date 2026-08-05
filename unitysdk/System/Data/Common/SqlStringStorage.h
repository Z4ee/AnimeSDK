#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/AggregateType.h"
#include "unitysdk/System/Data/Common/DataStorage.h"
#include "unitysdk/System/Data/SqlTypes/SqlString.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class BitArray; }
namespace System::Data { class DataColumn; }

#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x1F1AD9A0)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_COMPAREVALUETO_OFFSET UNITYSDK_OFFSET(0x1F1AE1B0)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_COMPARE_1_OFFSET UNITYSDK_OFFSET(0x1F1AE0E0)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_COMPARE_OFFSET UNITYSDK_OFFSET(0x1F1ADFC0)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x1F1AE850)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_CONVERTVALUE_OFFSET UNITYSDK_OFFSET(0x1F1AE2D0)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x1F1AE4F0)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_COPYVALUE_OFFSET UNITYSDK_OFFSET(0x1F1AEAE0)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_COPY_OFFSET UNITYSDK_OFFSET(0x1F1AE330)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_GETEMPTYSTORAGE_OFFSET UNITYSDK_OFFSET(0x1F1AEAA0)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_GETSTRINGLENGTH_OFFSET UNITYSDK_OFFSET(0x1F1AE3A0)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_GET_OFFSET UNITYSDK_OFFSET(0x1F1AE050)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_ISNULL_OFFSET UNITYSDK_OFFSET(0x1F1ADF80)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x1F1AE480)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_SETSTORAGE_OFFSET UNITYSDK_OFFSET(0x1F1AEC50)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_SET_OFFSET UNITYSDK_OFFSET(0x1F1AE420)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1AD870)

namespace System::Data::Common
{
	inline static constexpr unsigned int SqlStringStorage_TypeDefinitionIndex = 39427;

	class SqlStringStorage : public ::System::Data::Common::DataStorage
	{
	public:
		::Il2CppArray<::System::Data::SqlTypes::SqlString>* _values; // 0x48

		::System::Void _ctor(::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE__CTOR_OFFSET))(this, column);
		}

		::System::Object* Aggregate(::Il2CppArray<::System::Int32>* recordNos, ::System::Data::AggregateType kind)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Data::AggregateType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_AGGREGATE_OFFSET))(this, recordNos, kind);
		}

		::System::Int32 Compare(::System::Int32 recordNo1, ::System::Int32 recordNo2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_COMPARE_OFFSET))(this, recordNo1, recordNo2);
		}

		::System::Int32 Compare_1(::System::Data::SqlTypes::SqlString valueNo1, ::System::Data::SqlTypes::SqlString valueNo2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::SqlTypes::SqlString, ::System::Data::SqlTypes::SqlString))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_COMPARE_1_OFFSET))(this, valueNo1, valueNo2);
		}

		::System::Int32 CompareValueTo(::System::Int32 recordNo, ::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_COMPAREVALUETO_OFFSET))(this, recordNo, value);
		}

		::System::Object* ConvertValue(::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_CONVERTVALUE_OFFSET))(this, value);
		}

		::System::Void Copy(::System::Int32 recordNo1, ::System::Int32 recordNo2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_COPY_OFFSET))(this, recordNo1, recordNo2);
		}

		::System::Object* Get(::System::Int32 record)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_GET_OFFSET))(this, record);
		}

		::System::Int32 GetStringLength(::System::Int32 record)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_GETSTRINGLENGTH_OFFSET))(this, record);
		}

		::System::Boolean IsNull(::System::Int32 record)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_ISNULL_OFFSET))(this, record);
		}

		::System::Void Set(::System::Int32 record, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_SET_OFFSET))(this, record, value);
		}

		::System::Void SetCapacity(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_SETCAPACITY_OFFSET))(this, capacity);
		}

		::System::Object* ConvertXmlToObject(::System::String* s)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_CONVERTXMLTOOBJECT_OFFSET))(this, s);
		}

		::System::String* ConvertObjectToXml(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_CONVERTOBJECTTOXML_OFFSET))(this, value);
		}

		::System::Object* GetEmptyStorage(::System::Int32 recordCount)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_GETEMPTYSTORAGE_OFFSET))(this, recordCount);
		}

		::System::Void CopyValue(::System::Int32 record, ::System::Object* store, ::System::Collections::BitArray* nullbits, ::System::Int32 storeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_COPYVALUE_OFFSET))(this, record, store, nullbits, storeIndex);
		}

		::System::Void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::BitArray*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_SETSTORAGE_OFFSET))(this, store, nullbits);
		}
	};
}
