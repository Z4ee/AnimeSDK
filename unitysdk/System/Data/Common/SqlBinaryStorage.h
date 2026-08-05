#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/AggregateType.h"
#include "unitysdk/System/Data/Common/DataStorage.h"
#include "unitysdk/System/Data/SqlTypes/SqlBinary.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class BitArray; }
namespace System::Data { class DataColumn; }

#define SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x1CD6A950)
#define SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_COMPAREVALUETO_OFFSET UNITYSDK_OFFSET(0x1CD6AC50)
#define SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_COMPARE_OFFSET UNITYSDK_OFFSET(0x1CD6ABF0)
#define SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x1CD6B280)
#define SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_CONVERTVALUE_OFFSET UNITYSDK_OFFSET(0x1CD6AD40)
#define SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x1CD6AF40)
#define SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_COPYVALUE_OFFSET UNITYSDK_OFFSET(0x1CD6B510)
#define SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_COPY_OFFSET UNITYSDK_OFFSET(0x1CD6ADA0)
#define SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_GETEMPTYSTORAGE_OFFSET UNITYSDK_OFFSET(0x1CD6B4D0)
#define SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_GET_OFFSET UNITYSDK_OFFSET(0x1CD6AE00)
#define SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_ISNULL_OFFSET UNITYSDK_OFFSET(0x1CD6ABB0)
#define SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x1CD6AED0)
#define SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_SETSTORAGE_OFFSET UNITYSDK_OFFSET(0x1CD6B650)
#define SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_SET_OFFSET UNITYSDK_OFFSET(0x1CD6AE80)
#define SYSTEM_DATA_COMMON_SQLBINARYSTORAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD6A840)

namespace System::Data::Common
{
	inline static constexpr unsigned int SqlBinaryStorage_TypeDefinitionIndex = 39414;

	class SqlBinaryStorage : public ::System::Data::Common::DataStorage
	{
	public:
		::Il2CppArray<::System::Data::SqlTypes::SqlBinary>* _values; // 0x48

		::System::Void _ctor(::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLBINARYSTORAGE__CTOR_OFFSET))(this, column);
		}

		::System::Object* Aggregate(::Il2CppArray<::System::Int32>* records, ::System::Data::AggregateType kind)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Data::AggregateType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_AGGREGATE_OFFSET))(this, records, kind);
		}

		::System::Int32 Compare(::System::Int32 recordNo1, ::System::Int32 recordNo2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_COMPARE_OFFSET))(this, recordNo1, recordNo2);
		}

		::System::Int32 CompareValueTo(::System::Int32 recordNo, ::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_COMPAREVALUETO_OFFSET))(this, recordNo, value);
		}

		::System::Object* ConvertValue(::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_CONVERTVALUE_OFFSET))(this, value);
		}

		::System::Void Copy(::System::Int32 recordNo1, ::System::Int32 recordNo2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_COPY_OFFSET))(this, recordNo1, recordNo2);
		}

		::System::Object* Get(::System::Int32 record)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_GET_OFFSET))(this, record);
		}

		::System::Boolean IsNull(::System::Int32 record)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_ISNULL_OFFSET))(this, record);
		}

		::System::Void Set(::System::Int32 record, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_SET_OFFSET))(this, record, value);
		}

		::System::Void SetCapacity(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_SETCAPACITY_OFFSET))(this, capacity);
		}

		::System::Object* ConvertXmlToObject(::System::String* s)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_CONVERTXMLTOOBJECT_OFFSET))(this, s);
		}

		::System::String* ConvertObjectToXml(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_CONVERTOBJECTTOXML_OFFSET))(this, value);
		}

		::System::Object* GetEmptyStorage(::System::Int32 recordCount)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_GETEMPTYSTORAGE_OFFSET))(this, recordCount);
		}

		::System::Void CopyValue(::System::Int32 record, ::System::Object* store, ::System::Collections::BitArray* nullbits, ::System::Int32 storeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_COPYVALUE_OFFSET))(this, record, store, nullbits, storeIndex);
		}

		::System::Void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::BitArray*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLBINARYSTORAGE_SETSTORAGE_OFFSET))(this, store, nullbits);
		}
	};
}
