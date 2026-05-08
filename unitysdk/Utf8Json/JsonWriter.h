#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UTF8JSON_JSONWRITER_ADVANCEOFFSET_OFFSET UNITYSDK_OFFSET(0x9B4070)
#define UTF8JSON_JSONWRITER_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x9B42B0)
#define UTF8JSON_JSONWRITER_GETBUFFER_OFFSET UNITYSDK_OFFSET(0x9B4080)
#define UTF8JSON_JSONWRITER_GETENCODEDPROPERTYNAMEWITHBEGINOBJECT_OFFSET UNITYSDK_OFFSET(0x1BDD9D30)
#define UTF8JSON_JSONWRITER_GETENCODEDPROPERTYNAMEWITHOUTQUOTATION_OFFSET UNITYSDK_OFFSET(0x1BDD9E10)
#define UTF8JSON_JSONWRITER_GETENCODEDPROPERTYNAMEWITHPREFIXVALUESEPARATOR_OFFSET UNITYSDK_OFFSET(0x1BDD9C50)
#define UTF8JSON_JSONWRITER_GETENCODEDPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1BDD9BC0)
#define UTF8JSON_JSONWRITER_GET_CURRENTOFFSET_OFFSET UNITYSDK_OFFSET(0x2F0420)
#define UTF8JSON_JSONWRITER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B41B0)
#define UTF8JSON_JSONWRITER_TOUTF8BYTEARRAY_OFFSET UNITYSDK_OFFSET(0x9B4140)
#define UTF8JSON_JSONWRITER_WRITEBEGINARRAY_OFFSET UNITYSDK_OFFSET(0x9B43B0)
#define UTF8JSON_JSONWRITER_WRITEBEGINOBJECT_OFFSET UNITYSDK_OFFSET(0x9B4470)
#define UTF8JSON_JSONWRITER_WRITEBOOLEAN_OFFSET UNITYSDK_OFFSET(0x9B46C0)
#define UTF8JSON_JSONWRITER_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x9B47F0)
#define UTF8JSON_JSONWRITER_WRITEDOUBLE_OFFSET UNITYSDK_OFFSET(0x9B4770)
#define UTF8JSON_JSONWRITER_WRITEENDARRAY_OFFSET UNITYSDK_OFFSET(0x9B4410)
#define UTF8JSON_JSONWRITER_WRITEENDOBJECT_OFFSET UNITYSDK_OFFSET(0x9B44D0)
#define UTF8JSON_JSONWRITER_WRITEFALSE_OFFSET UNITYSDK_OFFSET(0x9B46E0)
#define UTF8JSON_JSONWRITER_WRITEINT16_OFFSET UNITYSDK_OFFSET(0x9B48E0)
#define UTF8JSON_JSONWRITER_WRITEINT32_OFFSET UNITYSDK_OFFSET(0x9B4910)
#define UTF8JSON_JSONWRITER_WRITEINT64_OFFSET UNITYSDK_OFFSET(0x9B4940)
#define UTF8JSON_JSONWRITER_WRITENAMESEPARATOR_OFFSET UNITYSDK_OFFSET(0x9B4590)
#define UTF8JSON_JSONWRITER_WRITENULL_OFFSET UNITYSDK_OFFSET(0x9B46B0)
#define UTF8JSON_JSONWRITER_WRITEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x9B45F0)
#define UTF8JSON_JSONWRITER_WRITEQUOTATION_OFFSET UNITYSDK_OFFSET(0x9B4650)
#define UTF8JSON_JSONWRITER_WRITERAWUNSAFE_OFFSET UNITYSDK_OFFSET(0x9B4370)
#define UTF8JSON_JSONWRITER_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x9B4320)
#define UTF8JSON_JSONWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x9B42C0)
#define UTF8JSON_JSONWRITER_WRITESBYTE_OFFSET UNITYSDK_OFFSET(0x9B48B0)
#define UTF8JSON_JSONWRITER_WRITESINGLE_OFFSET UNITYSDK_OFFSET(0x9B46F0)
#define UTF8JSON_JSONWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x9B4970)
#define UTF8JSON_JSONWRITER_WRITETRUE_OFFSET UNITYSDK_OFFSET(0x9B46D0)
#define UTF8JSON_JSONWRITER_WRITEUINT16_OFFSET UNITYSDK_OFFSET(0x9B4820)
#define UTF8JSON_JSONWRITER_WRITEUINT32_OFFSET UNITYSDK_OFFSET(0x9B4850)
#define UTF8JSON_JSONWRITER_WRITEUINT64_OFFSET UNITYSDK_OFFSET(0x9B4880)
#define UTF8JSON_JSONWRITER_WRITEVALUESEPARATOR_OFFSET UNITYSDK_OFFSET(0x9B4530)
#define UTF8JSON_JSONWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDDA360)
#define UTF8JSON_JSONWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x4B7AC0)

namespace Utf8Json
{
	inline static constexpr unsigned int JsonWriter_TypeDefinitionIndex = 85517;

	struct alignas(8) JsonWriter
	{
		static ::Il2CppArray<::System::Byte>** StaticGet_emptyBytes()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(JsonWriter_TypeDefinitionIndex)->GetStaticField(0x4A9A0);
		}
		::Il2CppArray<::System::Byte>* buffer; // 0x10
		::System::Int32 offset; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::Byte>* initialBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER__CTOR_OFFSET))(this, initialBuffer);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER__CCTOR_OFFSET))();
		}

		::System::Int32 get_CurrentOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_GET_CURRENTOFFSET_OFFSET))(this);
		}

		::System::Void AdvanceOffset(::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_ADVANCEOFFSET_OFFSET))(this, offset);
		}

		static ::Il2CppArray<::System::Byte>* GetEncodedPropertyName(::System::String* propertyName)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_GETENCODEDPROPERTYNAME_OFFSET))(propertyName);
		}

		static ::Il2CppArray<::System::Byte>* GetEncodedPropertyNameWithPrefixValueSeparator(::System::String* propertyName)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_GETENCODEDPROPERTYNAMEWITHPREFIXVALUESEPARATOR_OFFSET))(propertyName);
		}

		static ::Il2CppArray<::System::Byte>* GetEncodedPropertyNameWithBeginObject(::System::String* propertyName)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_GETENCODEDPROPERTYNAMEWITHBEGINOBJECT_OFFSET))(propertyName);
		}

		static ::Il2CppArray<::System::Byte>* GetEncodedPropertyNameWithoutQuotation(::System::String* propertyName)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_GETENCODEDPROPERTYNAMEWITHOUTQUOTATION_OFFSET))(propertyName);
		}

		/*
		::System::ArraySegment_1<::System::Byte> GetBuffer()
		{
			return ((::System::ArraySegment_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_GETBUFFER_OFFSET))(this);
		}
		*/

		::Il2CppArray<::System::Byte>* ToUtf8ByteArray()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_TOUTF8BYTEARRAY_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_TOSTRING_OFFSET))(this);
		}

		::System::Void EnsureCapacity(::System::Int32 appendLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_ENSURECAPACITY_OFFSET))(this, appendLength);
		}

		::System::Void WriteRaw(::System::Byte rawValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITERAW_OFFSET))(this, rawValue);
		}

		::System::Void WriteRaw_1(::Il2CppArray<::System::Byte>* rawValue)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITERAW_1_OFFSET))(this, rawValue);
		}

		::System::Void WriteRawUnsafe(::System::Byte rawValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITERAWUNSAFE_OFFSET))(this, rawValue);
		}

		::System::Void WriteBeginArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITEBEGINARRAY_OFFSET))(this);
		}

		::System::Void WriteEndArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITEENDARRAY_OFFSET))(this);
		}

		::System::Void WriteBeginObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITEBEGINOBJECT_OFFSET))(this);
		}

		::System::Void WriteEndObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITEENDOBJECT_OFFSET))(this);
		}

		::System::Void WriteValueSeparator()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITEVALUESEPARATOR_OFFSET))(this);
		}

		::System::Void WriteNameSeparator()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITENAMESEPARATOR_OFFSET))(this);
		}

		::System::Void WritePropertyName(::System::String* propertyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITEPROPERTYNAME_OFFSET))(this, propertyName);
		}

		::System::Void WriteQuotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITEQUOTATION_OFFSET))(this);
		}

		::System::Void WriteNull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITENULL_OFFSET))(this);
		}

		::System::Void WriteBoolean(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITEBOOLEAN_OFFSET))(this, value);
		}

		::System::Void WriteTrue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITETRUE_OFFSET))(this);
		}

		::System::Void WriteFalse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITEFALSE_OFFSET))(this);
		}

		::System::Void WriteSingle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITESINGLE_OFFSET))(this, value);
		}

		::System::Void WriteDouble(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITEDOUBLE_OFFSET))(this, value);
		}

		::System::Void WriteByte(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITEBYTE_OFFSET))(this, value);
		}

		::System::Void WriteUInt16(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITEUINT16_OFFSET))(this, value);
		}

		::System::Void WriteUInt32(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITEUINT32_OFFSET))(this, value);
		}

		::System::Void WriteUInt64(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITEUINT64_OFFSET))(this, value);
		}

		::System::Void WriteSByte(::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITESBYTE_OFFSET))(this, value);
		}

		::System::Void WriteInt16(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITEINT16_OFFSET))(this, value);
		}

		::System::Void WriteInt32(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITEINT32_OFFSET))(this, value);
		}

		::System::Void WriteInt64(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITEINT64_OFFSET))(this, value);
		}

		::System::Void WriteString(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONWRITER_WRITESTRING_OFFSET))(this, value);
		}
	};
}
