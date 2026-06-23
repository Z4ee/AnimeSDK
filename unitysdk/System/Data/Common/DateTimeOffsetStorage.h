#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/AggregateType.h"
#include "unitysdk/System/Data/Common/DataStorage.h"
#include "unitysdk/System/DateTimeOffset.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class BitArray; }
namespace System::Data { class DataColumn; }

#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x1D893000)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_COMPAREVALUETO_OFFSET UNITYSDK_OFFSET(0x1D8938A0)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_COMPARE_OFFSET UNITYSDK_OFFSET(0x1D893660)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x1D893FE0)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_CONVERTVALUE_OFFSET UNITYSDK_OFFSET(0x1D893A90)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x1D893F60)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_COPYVALUE_OFFSET UNITYSDK_OFFSET(0x1D894120)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_COPY_OFFSET UNITYSDK_OFFSET(0x1D893B60)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_GETEMPTYSTORAGE_OFFSET UNITYSDK_OFFSET(0x1D8940E0)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_GET_OFFSET UNITYSDK_OFFSET(0x1D893BF0)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x1D893E90)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_SETSTORAGE_OFFSET UNITYSDK_OFFSET(0x1D894250)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_SET_OFFSET UNITYSDK_OFFSET(0x1D893D30)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8942E0)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D892EC0)

namespace System::Data::Common
{
	inline static constexpr unsigned int DateTimeOffsetStorage_TypeDefinitionIndex = 38741;

	class DateTimeOffsetStorage : public ::System::Data::Common::DataStorage
	{
	public:
		static ::System::DateTimeOffset* StaticGet_s_defaultValue()
		{
			return (::System::DateTimeOffset*)Il2CppClass::FromTypeDefinitionIndex(DateTimeOffsetStorage_TypeDefinitionIndex)->GetStaticField(0x9240);
		}
		::Il2CppArray<::System::DateTimeOffset>* _values; // 0x48

		::System::Void _ctor(::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE__CTOR_OFFSET))(this, column);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE__CCTOR_OFFSET))();
		}

		::System::Object* Aggregate(::Il2CppArray<::System::Int32>* records, ::System::Data::AggregateType kind)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Data::AggregateType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_AGGREGATE_OFFSET))(this, records, kind);
		}

		::System::Int32 Compare(::System::Int32 recordNo1, ::System::Int32 recordNo2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_COMPARE_OFFSET))(this, recordNo1, recordNo2);
		}

		::System::Int32 CompareValueTo(::System::Int32 recordNo, ::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_COMPAREVALUETO_OFFSET))(this, recordNo, value);
		}

		::System::Object* ConvertValue(::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_CONVERTVALUE_OFFSET))(this, value);
		}

		::System::Void Copy(::System::Int32 recordNo1, ::System::Int32 recordNo2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_COPY_OFFSET))(this, recordNo1, recordNo2);
		}

		::System::Object* Get(::System::Int32 record)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_GET_OFFSET))(this, record);
		}

		::System::Void Set(::System::Int32 record, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_SET_OFFSET))(this, record, value);
		}

		::System::Void SetCapacity(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_SETCAPACITY_OFFSET))(this, capacity);
		}

		::System::Object* ConvertXmlToObject(::System::String* s)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_CONVERTXMLTOOBJECT_OFFSET))(this, s);
		}

		::System::String* ConvertObjectToXml(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_CONVERTOBJECTTOXML_OFFSET))(this, value);
		}

		::System::Object* GetEmptyStorage(::System::Int32 recordCount)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_GETEMPTYSTORAGE_OFFSET))(this, recordCount);
		}

		::System::Void CopyValue(::System::Int32 record, ::System::Object* store, ::System::Collections::BitArray* nullbits, ::System::Int32 storeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_COPYVALUE_OFFSET))(this, record, store, nullbits, storeIndex);
		}

		::System::Void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::BitArray*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_SETSTORAGE_OFFSET))(this, store, nullbits);
		}
	};
}
