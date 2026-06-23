#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/AggregateType.h"
#include "unitysdk/System/Data/Common/DataStorage.h"
#include "unitysdk/System/Numerics/BigInteger.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class BitArray; }
namespace System::Data { class DataColumn; }

#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x1D6CEA80)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_COMPAREVALUETO_OFFSET UNITYSDK_OFFSET(0x1D6CEBD0)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_COMPARE_OFFSET UNITYSDK_OFFSET(0x1D6CEAD0)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_CONVERTFROMBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1D6CF4A0)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x1D6D0130)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_CONVERTTOBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1D6CED20)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_CONVERTVALUE_OFFSET UNITYSDK_OFFSET(0x1D6CFBB0)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x1D6D0060)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_COPYVALUE_OFFSET UNITYSDK_OFFSET(0x1D6D0250)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_COPY_OFFSET UNITYSDK_OFFSET(0x1D6CFC90)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_GETEMPTYSTORAGE_OFFSET UNITYSDK_OFFSET(0x1D6D0210)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_GET_OFFSET UNITYSDK_OFFSET(0x1D6CFD20)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x1D6CFF90)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_SETSTORAGE_OFFSET UNITYSDK_OFFSET(0x1D6D0380)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_SET_OFFSET UNITYSDK_OFFSET(0x1D6CFE00)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CE930)

namespace System::Data::Common
{
	inline static constexpr unsigned int BigIntegerStorage_TypeDefinitionIndex = 38735;

	class BigIntegerStorage : public ::System::Data::Common::DataStorage
	{
	public:
		::Il2CppArray<::System::Numerics::BigInteger>* _values; // 0x48

		::System::Void _ctor(::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE__CTOR_OFFSET))(this, column);
		}

		::System::Object* Aggregate(::Il2CppArray<::System::Int32>* records, ::System::Data::AggregateType kind)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Data::AggregateType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_AGGREGATE_OFFSET))(this, records, kind);
		}

		::System::Int32 Compare(::System::Int32 recordNo1, ::System::Int32 recordNo2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_COMPARE_OFFSET))(this, recordNo1, recordNo2);
		}

		::System::Int32 CompareValueTo(::System::Int32 recordNo, ::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_COMPAREVALUETO_OFFSET))(this, recordNo, value);
		}

		static ::System::Numerics::BigInteger ConvertToBigInteger(::System::Object* value, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_CONVERTTOBIGINTEGER_OFFSET))(value, formatProvider);
		}

		static ::System::Object* ConvertFromBigInteger(::System::Numerics::BigInteger value, ::System::Type* type, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::Object*(*)(::System::Numerics::BigInteger, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_CONVERTFROMBIGINTEGER_OFFSET))(value, type, formatProvider);
		}

		::System::Object* ConvertValue(::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_CONVERTVALUE_OFFSET))(this, value);
		}

		::System::Void Copy(::System::Int32 recordNo1, ::System::Int32 recordNo2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_COPY_OFFSET))(this, recordNo1, recordNo2);
		}

		::System::Object* Get(::System::Int32 record)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_GET_OFFSET))(this, record);
		}

		::System::Void Set(::System::Int32 record, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_SET_OFFSET))(this, record, value);
		}

		::System::Void SetCapacity(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_SETCAPACITY_OFFSET))(this, capacity);
		}

		::System::Object* ConvertXmlToObject(::System::String* s)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_CONVERTXMLTOOBJECT_OFFSET))(this, s);
		}

		::System::String* ConvertObjectToXml(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_CONVERTOBJECTTOXML_OFFSET))(this, value);
		}

		::System::Object* GetEmptyStorage(::System::Int32 recordCount)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_GETEMPTYSTORAGE_OFFSET))(this, recordCount);
		}

		::System::Void CopyValue(::System::Int32 record, ::System::Object* store, ::System::Collections::BitArray* nullbits, ::System::Int32 storeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_COPYVALUE_OFFSET))(this, record, store, nullbits, storeIndex);
		}

		::System::Void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::BitArray*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_SETSTORAGE_OFFSET))(this, store, nullbits);
		}
	};
}
