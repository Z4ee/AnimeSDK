#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/AggregateType.h"
#include "unitysdk/System/Data/Common/DataStorage.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class BitArray; }
namespace System::Data { class DataColumn; }
namespace System::Data::SqlTypes { class SqlChars; }

#define SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x1F2F6540)
#define SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_COMPAREVALUETO_OFFSET UNITYSDK_OFFSET(0x1F2F67F0)
#define SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_COMPARE_OFFSET UNITYSDK_OFFSET(0x1F2F67E0)
#define SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x1F2F6DB0)
#define SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x1F2F6A40)
#define SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_COPYVALUE_OFFSET UNITYSDK_OFFSET(0x1F2F7040)
#define SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_COPY_OFFSET UNITYSDK_OFFSET(0x1F2F6800)
#define SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_GETEMPTYSTORAGE_OFFSET UNITYSDK_OFFSET(0x1F2F7000)
#define SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_GET_OFFSET UNITYSDK_OFFSET(0x1F2F6860)
#define SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_ISNULL_OFFSET UNITYSDK_OFFSET(0x1F2F6790)
#define SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x1F2F69D0)
#define SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_SETSTORAGE_OFFSET UNITYSDK_OFFSET(0x1F2F71A0)
#define SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_SET_OFFSET UNITYSDK_OFFSET(0x1F2F68A0)
#define SYSTEM_DATA_COMMON_SQLCHARSSTORAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2F63E0)

namespace System::Data::Common
{
	inline static constexpr unsigned int SqlCharsStorage_TypeDefinitionIndex = 39417;

	class SqlCharsStorage : public ::System::Data::Common::DataStorage
	{
	public:
		::Il2CppArray<::System::Data::SqlTypes::SqlChars*>* _values; // 0x48

		::System::Void _ctor(::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCHARSSTORAGE__CTOR_OFFSET))(this, column);
		}

		::System::Object* Aggregate(::Il2CppArray<::System::Int32>* records, ::System::Data::AggregateType kind)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Data::AggregateType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_AGGREGATE_OFFSET))(this, records, kind);
		}

		::System::Int32 Compare(::System::Int32 recordNo1, ::System::Int32 recordNo2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_COMPARE_OFFSET))(this, recordNo1, recordNo2);
		}

		::System::Int32 CompareValueTo(::System::Int32 recordNo, ::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_COMPAREVALUETO_OFFSET))(this, recordNo, value);
		}

		::System::Void Copy(::System::Int32 recordNo1, ::System::Int32 recordNo2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_COPY_OFFSET))(this, recordNo1, recordNo2);
		}

		::System::Object* Get(::System::Int32 record)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_GET_OFFSET))(this, record);
		}

		::System::Boolean IsNull(::System::Int32 record)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_ISNULL_OFFSET))(this, record);
		}

		::System::Void Set(::System::Int32 record, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_SET_OFFSET))(this, record, value);
		}

		::System::Void SetCapacity(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_SETCAPACITY_OFFSET))(this, capacity);
		}

		::System::Object* ConvertXmlToObject(::System::String* s)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_CONVERTXMLTOOBJECT_OFFSET))(this, s);
		}

		::System::String* ConvertObjectToXml(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_CONVERTOBJECTTOXML_OFFSET))(this, value);
		}

		::System::Object* GetEmptyStorage(::System::Int32 recordCount)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_GETEMPTYSTORAGE_OFFSET))(this, recordCount);
		}

		::System::Void CopyValue(::System::Int32 record, ::System::Object* store, ::System::Collections::BitArray* nullbits, ::System::Int32 storeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_COPYVALUE_OFFSET))(this, record, store, nullbits, storeIndex);
		}

		::System::Void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::BitArray*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCHARSSTORAGE_SETSTORAGE_OFFSET))(this, store, nullbits);
		}
	};
}
