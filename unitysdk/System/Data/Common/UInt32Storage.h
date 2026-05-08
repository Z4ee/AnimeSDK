#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/AggregateType.h"
#include "unitysdk/System/Data/Common/DataStorage.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class BitArray; }
namespace System::Data { class DataColumn; }

#define SYSTEM_DATA_COMMON_UINT32STORAGE_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x195A64A0)
#define SYSTEM_DATA_COMMON_UINT32STORAGE_COMPAREVALUETO_OFFSET UNITYSDK_OFFSET(0x195A6EC0)
#define SYSTEM_DATA_COMMON_UINT32STORAGE_COMPARE_OFFSET UNITYSDK_OFFSET(0x195A6E00)
#define SYSTEM_DATA_COMMON_UINT32STORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x195A76D0)
#define SYSTEM_DATA_COMMON_UINT32STORAGE_CONVERTVALUE_OFFSET UNITYSDK_OFFSET(0x195A7000)
#define SYSTEM_DATA_COMMON_UINT32STORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x195A7610)
#define SYSTEM_DATA_COMMON_UINT32STORAGE_COPYVALUE_OFFSET UNITYSDK_OFFSET(0x195A7800)
#define SYSTEM_DATA_COMMON_UINT32STORAGE_COPY_OFFSET UNITYSDK_OFFSET(0x195A71B0)
#define SYSTEM_DATA_COMMON_UINT32STORAGE_GETEMPTYSTORAGE_OFFSET UNITYSDK_OFFSET(0x195A77C0)
#define SYSTEM_DATA_COMMON_UINT32STORAGE_GET_OFFSET UNITYSDK_OFFSET(0x195A7240)
#define SYSTEM_DATA_COMMON_UINT32STORAGE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x195A7540)
#define SYSTEM_DATA_COMMON_UINT32STORAGE_SETSTORAGE_OFFSET UNITYSDK_OFFSET(0x195A7920)
#define SYSTEM_DATA_COMMON_UINT32STORAGE_SET_OFFSET UNITYSDK_OFFSET(0x195A72F0)
#define SYSTEM_DATA_COMMON_UINT32STORAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x195A6380)

namespace System::Data::Common
{
	inline static constexpr unsigned int UInt32Storage_TypeDefinitionIndex = 37156;

	class UInt32Storage : public ::System::Data::Common::DataStorage
	{
	public:
		static ::System::UInt32* StaticGet_s_defaultValue()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(UInt32Storage_TypeDefinitionIndex)->GetStaticField(0x8DF0);
		}
		::Il2CppArray<::System::UInt32>* _values; // 0x48

		::System::Void _ctor(::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT32STORAGE__CTOR_OFFSET))(this, column);
		}

		::System::Object* Aggregate(::Il2CppArray<::System::Int32>* records, ::System::Data::AggregateType kind)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Data::AggregateType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT32STORAGE_AGGREGATE_OFFSET))(this, records, kind);
		}

		::System::Int32 Compare(::System::Int32 recordNo1, ::System::Int32 recordNo2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT32STORAGE_COMPARE_OFFSET))(this, recordNo1, recordNo2);
		}

		::System::Int32 CompareValueTo(::System::Int32 recordNo, ::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT32STORAGE_COMPAREVALUETO_OFFSET))(this, recordNo, value);
		}

		::System::Object* ConvertValue(::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT32STORAGE_CONVERTVALUE_OFFSET))(this, value);
		}

		::System::Void Copy(::System::Int32 recordNo1, ::System::Int32 recordNo2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT32STORAGE_COPY_OFFSET))(this, recordNo1, recordNo2);
		}

		::System::Object* Get(::System::Int32 record)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT32STORAGE_GET_OFFSET))(this, record);
		}

		::System::Void Set(::System::Int32 record, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT32STORAGE_SET_OFFSET))(this, record, value);
		}

		::System::Void SetCapacity(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT32STORAGE_SETCAPACITY_OFFSET))(this, capacity);
		}

		::System::Object* ConvertXmlToObject(::System::String* s)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT32STORAGE_CONVERTXMLTOOBJECT_OFFSET))(this, s);
		}

		::System::String* ConvertObjectToXml(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT32STORAGE_CONVERTOBJECTTOXML_OFFSET))(this, value);
		}

		::System::Object* GetEmptyStorage(::System::Int32 recordCount)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT32STORAGE_GETEMPTYSTORAGE_OFFSET))(this, recordCount);
		}

		::System::Void CopyValue(::System::Int32 record, ::System::Object* store, ::System::Collections::BitArray* nullbits, ::System::Int32 storeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT32STORAGE_COPYVALUE_OFFSET))(this, record, store, nullbits, storeIndex);
		}

		::System::Void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::BitArray*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT32STORAGE_SETSTORAGE_OFFSET))(this, store, nullbits);
		}
	};
}
