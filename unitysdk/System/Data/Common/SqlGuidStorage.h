#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/AggregateType.h"
#include "unitysdk/System/Data/Common/DataStorage.h"
#include "unitysdk/System/Data/SqlTypes/SqlGuid.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class BitArray; }
namespace System::Data { class DataColumn; }

#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x1BA01EA0)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_COMPAREVALUETO_OFFSET UNITYSDK_OFFSET(0x1BA021A0)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_COMPARE_OFFSET UNITYSDK_OFFSET(0x1BA02140)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x1BA027C0)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_CONVERTVALUE_OFFSET UNITYSDK_OFFSET(0x1BA02290)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x1BA02490)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_COPYVALUE_OFFSET UNITYSDK_OFFSET(0x1BA02A50)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_COPY_OFFSET UNITYSDK_OFFSET(0x1BA022F0)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_GETEMPTYSTORAGE_OFFSET UNITYSDK_OFFSET(0x1BA02A10)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_GET_OFFSET UNITYSDK_OFFSET(0x1BA02350)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_ISNULL_OFFSET UNITYSDK_OFFSET(0x1BA02100)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x1BA02420)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_SETSTORAGE_OFFSET UNITYSDK_OFFSET(0x1BA02B90)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_SET_OFFSET UNITYSDK_OFFSET(0x1BA023D0)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA01D90)

namespace System::Data::Common
{
	inline static constexpr unsigned int SqlGuidStorage_TypeDefinitionIndex = 37143;

	class SqlGuidStorage : public ::System::Data::Common::DataStorage
	{
	public:
		::Il2CppArray<::System::Data::SqlTypes::SqlGuid>* _values; // 0x48

		::System::Void _ctor(::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE__CTOR_OFFSET))(this, column);
		}

		::System::Object* Aggregate(::Il2CppArray<::System::Int32>* records, ::System::Data::AggregateType kind)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Data::AggregateType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_AGGREGATE_OFFSET))(this, records, kind);
		}

		::System::Int32 Compare(::System::Int32 recordNo1, ::System::Int32 recordNo2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_COMPARE_OFFSET))(this, recordNo1, recordNo2);
		}

		::System::Int32 CompareValueTo(::System::Int32 recordNo, ::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_COMPAREVALUETO_OFFSET))(this, recordNo, value);
		}

		::System::Object* ConvertValue(::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_CONVERTVALUE_OFFSET))(this, value);
		}

		::System::Void Copy(::System::Int32 recordNo1, ::System::Int32 recordNo2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_COPY_OFFSET))(this, recordNo1, recordNo2);
		}

		::System::Object* Get(::System::Int32 record)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_GET_OFFSET))(this, record);
		}

		::System::Boolean IsNull(::System::Int32 record)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_ISNULL_OFFSET))(this, record);
		}

		::System::Void Set(::System::Int32 record, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_SET_OFFSET))(this, record, value);
		}

		::System::Void SetCapacity(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_SETCAPACITY_OFFSET))(this, capacity);
		}

		::System::Object* ConvertXmlToObject(::System::String* s)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_CONVERTXMLTOOBJECT_OFFSET))(this, s);
		}

		::System::String* ConvertObjectToXml(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_CONVERTOBJECTTOXML_OFFSET))(this, value);
		}

		::System::Object* GetEmptyStorage(::System::Int32 recordCount)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_GETEMPTYSTORAGE_OFFSET))(this, recordCount);
		}

		::System::Void CopyValue(::System::Int32 record, ::System::Object* store, ::System::Collections::BitArray* nullbits, ::System::Int32 storeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_COPYVALUE_OFFSET))(this, record, store, nullbits, storeIndex);
		}

		::System::Void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::BitArray*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_SETSTORAGE_OFFSET))(this, store, nullbits);
		}
	};
}
