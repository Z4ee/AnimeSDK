#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/AggregateType.h"
#include "unitysdk/System/Data/Common/DataStorage.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class BitArray; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Data { class DataColumn; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Serialization { class XmlRootAttribute; }

#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x1D9F7430)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_COMPAREVALUETO_OFFSET UNITYSDK_OFFSET(0x1D9F74C0)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_COMPARE_OFFSET UNITYSDK_OFFSET(0x1D9F7480)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_CONVERTOBJECTTOXML_1_OFFSET UNITYSDK_OFFSET(0x1D9F8760)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x1D9F8380)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_CONVERTXMLTOOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1D9F80C0)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x1D9F7C30)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_COPYVALUE_OFFSET UNITYSDK_OFFSET(0x1D9F8920)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_COPY_OFFSET UNITYSDK_OFFSET(0x1D9F77D0)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_GETEMPTYSTORAGE_OFFSET UNITYSDK_OFFSET(0x1D9F88E0)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_GETSTATICNULLFORUDTTYPE_OFFSET UNITYSDK_OFFSET(0x1D9F6E00)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_GET_OFFSET UNITYSDK_OFFSET(0x1D9F78B0)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_ISNULL_OFFSET UNITYSDK_OFFSET(0x1D9F72E0)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x1D9F7B60)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_SETSTORAGE_OFFSET UNITYSDK_OFFSET(0x1D9F8AB0)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_SET_OFFSET UNITYSDK_OFFSET(0x1D9F78F0)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9F8B40)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D9F7180)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9F6D80)

namespace System::Data::Common
{
	inline static constexpr unsigned int SqlUdtStorage_TypeDefinitionIndex = 38769;

	class SqlUdtStorage : public ::System::Data::Common::DataStorage
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_s_typeToNull()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(SqlUdtStorage_TypeDefinitionIndex)->GetStaticField(0x29170);
		}
		::Il2CppArray<::System::Object*>* _values; // 0x48
		::System::Boolean _implementsIXmlSerializable; // 0x50
		::System::Boolean _implementsIComparable; // 0x51

		::System::Void _ctor(::System::Data::DataColumn* column, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE__CTOR_OFFSET))(this, column, type);
		}

		::System::Void _ctor_1(::System::Data::DataColumn* column, ::System::Type* type, ::System::Object* nullValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE__CTOR_1_OFFSET))(this, column, type, nullValue);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE__CCTOR_OFFSET))();
		}

		static ::System::Object* GetStaticNullForUdtType(::System::Type* type)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_GETSTATICNULLFORUDTTYPE_OFFSET))(type);
		}

		::System::Boolean IsNull(::System::Int32 record)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_ISNULL_OFFSET))(this, record);
		}

		::System::Object* Aggregate(::Il2CppArray<::System::Int32>* records, ::System::Data::AggregateType kind)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Data::AggregateType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_AGGREGATE_OFFSET))(this, records, kind);
		}

		::System::Int32 Compare(::System::Int32 recordNo1, ::System::Int32 recordNo2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_COMPARE_OFFSET))(this, recordNo1, recordNo2);
		}

		::System::Int32 CompareValueTo(::System::Int32 recordNo1, ::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_COMPAREVALUETO_OFFSET))(this, recordNo1, value);
		}

		::System::Void Copy(::System::Int32 recordNo1, ::System::Int32 recordNo2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_COPY_OFFSET))(this, recordNo1, recordNo2);
		}

		::System::Object* Get(::System::Int32 recordNo)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_GET_OFFSET))(this, recordNo);
		}

		::System::Void Set(::System::Int32 recordNo, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_SET_OFFSET))(this, recordNo, value);
		}

		::System::Void SetCapacity(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_SETCAPACITY_OFFSET))(this, capacity);
		}

		::System::Object* ConvertXmlToObject(::System::String* s)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_CONVERTXMLTOOBJECT_OFFSET))(this, s);
		}

		::System::Object* ConvertXmlToObject_1(::System::Xml::XmlReader* xmlReader, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Xml::Serialization::XmlRootAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_CONVERTXMLTOOBJECT_1_OFFSET))(this, xmlReader, xmlAttrib);
		}

		::System::String* ConvertObjectToXml(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_CONVERTOBJECTTOXML_OFFSET))(this, value);
		}

		::System::Void ConvertObjectToXml_1(::System::Object* value, ::System::Xml::XmlWriter* xmlWriter, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::XmlWriter*, ::System::Xml::Serialization::XmlRootAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_CONVERTOBJECTTOXML_1_OFFSET))(this, value, xmlWriter, xmlAttrib);
		}

		::System::Object* GetEmptyStorage(::System::Int32 recordCount)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_GETEMPTYSTORAGE_OFFSET))(this, recordCount);
		}

		::System::Void CopyValue(::System::Int32 record, ::System::Object* store, ::System::Collections::BitArray* nullbits, ::System::Int32 storeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_COPYVALUE_OFFSET))(this, record, store, nullbits, storeIndex);
		}

		::System::Void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::BitArray*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_SETSTORAGE_OFFSET))(this, store, nullbits);
		}
	};
}
