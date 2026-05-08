#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/AggregateType.h"
#include "unitysdk/System/Data/Common/DataStorage.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class BitArray; }
namespace System::Data { class DataColumn; }

#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x1BE45C90)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_COMPAREVALUETO_OFFSET UNITYSDK_OFFSET(0x1BE46FE0)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_COMPARE_OFFSET UNITYSDK_OFFSET(0x1BE46E70)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x1BE47760)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_CONVERTTOTIMESPAN_OFFSET UNITYSDK_OFFSET(0x1BE47160)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_CONVERTVALUE_OFFSET UNITYSDK_OFFSET(0x1BE47340)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x1BE476F0)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_COPYVALUE_OFFSET UNITYSDK_OFFSET(0x1BE47970)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_COPY_OFFSET UNITYSDK_OFFSET(0x1BE473C0)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_GETEMPTYSTORAGE_OFFSET UNITYSDK_OFFSET(0x1BE47930)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_GET_OFFSET UNITYSDK_OFFSET(0x1BE47450)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x1BE47620)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_SETSTORAGE_OFFSET UNITYSDK_OFFSET(0x1BE47A90)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_SET_OFFSET UNITYSDK_OFFSET(0x1BE47520)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE47B20)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE45B50)

namespace System::Data::Common
{
	inline static constexpr unsigned int TimeSpanStorage_TypeDefinitionIndex = 37154;

	class TimeSpanStorage : public ::System::Data::Common::DataStorage
	{
	public:
		static ::System::TimeSpan* StaticGet_s_defaultValue()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(TimeSpanStorage_TypeDefinitionIndex)->GetStaticField(0x8D30);
		}
		::Il2CppArray<::System::TimeSpan>* _values; // 0x48

		::System::Void _ctor(::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE__CTOR_OFFSET))(this, column);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE__CCTOR_OFFSET))();
		}

		::System::Object* Aggregate(::Il2CppArray<::System::Int32>* records, ::System::Data::AggregateType kind)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Data::AggregateType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_AGGREGATE_OFFSET))(this, records, kind);
		}

		::System::Int32 Compare(::System::Int32 recordNo1, ::System::Int32 recordNo2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_COMPARE_OFFSET))(this, recordNo1, recordNo2);
		}

		::System::Int32 CompareValueTo(::System::Int32 recordNo, ::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_COMPAREVALUETO_OFFSET))(this, recordNo, value);
		}

		static ::System::TimeSpan ConvertToTimeSpan(::System::Object* value)
		{
			return ((::System::TimeSpan(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_CONVERTTOTIMESPAN_OFFSET))(value);
		}

		::System::Object* ConvertValue(::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_CONVERTVALUE_OFFSET))(this, value);
		}

		::System::Void Copy(::System::Int32 recordNo1, ::System::Int32 recordNo2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_COPY_OFFSET))(this, recordNo1, recordNo2);
		}

		::System::Object* Get(::System::Int32 record)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_GET_OFFSET))(this, record);
		}

		::System::Void Set(::System::Int32 record, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_SET_OFFSET))(this, record, value);
		}

		::System::Void SetCapacity(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_SETCAPACITY_OFFSET))(this, capacity);
		}

		::System::Object* ConvertXmlToObject(::System::String* s)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_CONVERTXMLTOOBJECT_OFFSET))(this, s);
		}

		::System::String* ConvertObjectToXml(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_CONVERTOBJECTTOXML_OFFSET))(this, value);
		}

		::System::Object* GetEmptyStorage(::System::Int32 recordCount)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_GETEMPTYSTORAGE_OFFSET))(this, recordCount);
		}

		::System::Void CopyValue(::System::Int32 record, ::System::Object* store, ::System::Collections::BitArray* nullbits, ::System::Int32 storeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_COPYVALUE_OFFSET))(this, record, store, nullbits, storeIndex);
		}

		::System::Void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::BitArray*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_SETSTORAGE_OFFSET))(this, store, nullbits);
		}
	};
}
