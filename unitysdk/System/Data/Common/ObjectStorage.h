#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Data/AggregateType.h"
#include "unitysdk/System/Data/Common/DataStorage.h"
#include "unitysdk/System/Data/Common/ObjectStorage_Families.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class BitArray; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Data { class DataColumn; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Serialization { class XmlRootAttribute; }
namespace System::Xml::Serialization { class XmlSerializer; }
namespace System::Xml::Serialization { class XmlSerializerFactory; }

#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x1959CA20)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1959D900)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_COMPAREVALUETO_OFFSET UNITYSDK_OFFSET(0x1959D6C0)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_COMPAREWITHFAMILIES_OFFSET UNITYSDK_OFFSET(0x1959CC90)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_COMPARE_OFFSET UNITYSDK_OFFSET(0x1959CA70)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_CONVERTOBJECTTOXML_1_OFFSET UNITYSDK_OFFSET(0x1959FF90)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x1959FA90)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_CONVERTXMLTOOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1959ECA0)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x1959E570)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_COPYVALUE_OFFSET UNITYSDK_OFFSET(0x195A0170)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_COPY_OFFSET UNITYSDK_OFFSET(0x1959DBD0)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_GETEMPTYSTORAGE_OFFSET UNITYSDK_OFFSET(0x195A0130)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_GETFAMILY_OFFSET UNITYSDK_OFFSET(0x1959DB30)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_GETXMLSERIALIZER_1_OFFSET UNITYSDK_OFFSET(0x1959F3A0)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_GETXMLSERIALIZER_OFFSET UNITYSDK_OFFSET(0x1959EC10)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_GET_OFFSET UNITYSDK_OFFSET(0x1959D8B0)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_ISNULL_OFFSET UNITYSDK_OFFSET(0x1959DC80)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x1959E500)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_SETSTORAGE_OFFSET UNITYSDK_OFFSET(0x195A0480)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_SET_OFFSET UNITYSDK_OFFSET(0x1959DCC0)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_VERIFYIDYNAMICMETAOBJECTPROVIDER_OFFSET UNITYSDK_OFFSET(0x195A06F0)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x195A07E0)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1959C8A0)

namespace System::Data::Common
{
	inline static constexpr unsigned int ObjectStorage_TypeDefinitionIndex = 37131;

	class ObjectStorage : public ::System::Data::Common::DataStorage
	{
	public:
		static ::System::Object** StaticGet_s_defaultValue()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ObjectStorage_TypeDefinitionIndex)->GetStaticField(0x275B0);
		}
		static ::System::Xml::Serialization::XmlSerializerFactory** StaticGet_s_serializerFactory()
		{
			return (::System::Xml::Serialization::XmlSerializerFactory**)Il2CppClass::FromTypeDefinitionIndex(ObjectStorage_TypeDefinitionIndex)->GetStaticField(0x275B8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>, ::System::Xml::Serialization::XmlSerializer*>** StaticGet_s_tempAssemblyCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>, ::System::Xml::Serialization::XmlSerializer*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectStorage_TypeDefinitionIndex)->GetStaticField(0x275C0);
		}
		static ::System::Object** StaticGet_s_tempAssemblyCacheLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ObjectStorage_TypeDefinitionIndex)->GetStaticField(0x275C8);
		}
		::Il2CppArray<::System::Object*>* _values; // 0x48
		::System::Boolean _implementsIXmlSerializable; // 0x50

		::System::Void _ctor(::System::Data::DataColumn* column, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE__CTOR_OFFSET))(this, column, type);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE__CCTOR_OFFSET))();
		}

		::System::Object* Aggregate(::Il2CppArray<::System::Int32>* records, ::System::Data::AggregateType kind)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Data::AggregateType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_AGGREGATE_OFFSET))(this, records, kind);
		}

		::System::Int32 Compare(::System::Int32 recordNo1, ::System::Int32 recordNo2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_COMPARE_OFFSET))(this, recordNo1, recordNo2);
		}

		::System::Int32 CompareValueTo(::System::Int32 recordNo1, ::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_COMPAREVALUETO_OFFSET))(this, recordNo1, value);
		}

		::System::Int32 CompareTo(::System::Object* valueNo1, ::System::Object* valueNo2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_COMPARETO_OFFSET))(this, valueNo1, valueNo2);
		}

		::System::Int32 CompareWithFamilies(::System::Object* valueNo1, ::System::Object* valueNo2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_COMPAREWITHFAMILIES_OFFSET))(this, valueNo1, valueNo2);
		}

		::System::Void Copy(::System::Int32 recordNo1, ::System::Int32 recordNo2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_COPY_OFFSET))(this, recordNo1, recordNo2);
		}

		::System::Object* Get(::System::Int32 recordNo)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_GET_OFFSET))(this, recordNo);
		}

		::System::Data::Common::ObjectStorage_Families GetFamily(::System::Type* dataType)
		{
			return ((::System::Data::Common::ObjectStorage_Families(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_GETFAMILY_OFFSET))(this, dataType);
		}

		::System::Boolean IsNull(::System::Int32 record)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_ISNULL_OFFSET))(this, record);
		}

		::System::Void Set(::System::Int32 recordNo, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_SET_OFFSET))(this, recordNo, value);
		}

		::System::Void SetCapacity(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_SETCAPACITY_OFFSET))(this, capacity);
		}

		::System::Object* ConvertXmlToObject(::System::String* s)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_CONVERTXMLTOOBJECT_OFFSET))(this, s);
		}

		::System::Object* ConvertXmlToObject_1(::System::Xml::XmlReader* xmlReader, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Xml::Serialization::XmlRootAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_CONVERTXMLTOOBJECT_1_OFFSET))(this, xmlReader, xmlAttrib);
		}

		::System::String* ConvertObjectToXml(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_CONVERTOBJECTTOXML_OFFSET))(this, value);
		}

		::System::Void ConvertObjectToXml_1(::System::Object* value, ::System::Xml::XmlWriter* xmlWriter, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::XmlWriter*, ::System::Xml::Serialization::XmlRootAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_CONVERTOBJECTTOXML_1_OFFSET))(this, value, xmlWriter, xmlAttrib);
		}

		::System::Object* GetEmptyStorage(::System::Int32 recordCount)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_GETEMPTYSTORAGE_OFFSET))(this, recordCount);
		}

		::System::Void CopyValue(::System::Int32 record, ::System::Object* store, ::System::Collections::BitArray* nullbits, ::System::Int32 storeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_COPYVALUE_OFFSET))(this, record, store, nullbits, storeIndex);
		}

		::System::Void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::BitArray*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_SETSTORAGE_OFFSET))(this, store, nullbits);
		}

		static ::System::Void VerifyIDynamicMetaObjectProvider(::System::Type* type)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_VERIFYIDYNAMICMETAOBJECTPROVIDER_OFFSET))(type);
		}

		static ::System::Xml::Serialization::XmlSerializer* GetXmlSerializer(::System::Type* type)
		{
			return ((::System::Xml::Serialization::XmlSerializer*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_GETXMLSERIALIZER_OFFSET))(type);
		}

		static ::System::Xml::Serialization::XmlSerializer* GetXmlSerializer_1(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* attribute)
		{
			return ((::System::Xml::Serialization::XmlSerializer*(*)(::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_GETXMLSERIALIZER_1_OFFSET))(type, attribute);
		}
	};
}
