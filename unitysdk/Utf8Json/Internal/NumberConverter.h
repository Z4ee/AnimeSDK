#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UTF8JSON_INTERNAL_NUMBERCONVERTER_ISNUMBERREPRESENTATION_OFFSET UNITYSDK_OFFSET(0x1BDD5C40)
#define UTF8JSON_INTERNAL_NUMBERCONVERTER_ISNUMBER_OFFSET UNITYSDK_OFFSET(0x1BDD5C30)
#define UTF8JSON_INTERNAL_NUMBERCONVERTER_READBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1BDD79A0)
#define UTF8JSON_INTERNAL_NUMBERCONVERTER_READBYTE_OFFSET UNITYSDK_OFFSET(0x1BDD5E50)
#define UTF8JSON_INTERNAL_NUMBERCONVERTER_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x1BDD6180)
#define UTF8JSON_INTERNAL_NUMBERCONVERTER_READINT16_OFFSET UNITYSDK_OFFSET(0x1BDD5D80)
#define UTF8JSON_INTERNAL_NUMBERCONVERTER_READINT32_OFFSET UNITYSDK_OFFSET(0x1BDD5DE0)
#define UTF8JSON_INTERNAL_NUMBERCONVERTER_READINT64_OFFSET UNITYSDK_OFFSET(0x1BDD5CC0)
#define UTF8JSON_INTERNAL_NUMBERCONVERTER_READSBYTE_OFFSET UNITYSDK_OFFSET(0x1BDD5C60)
#define UTF8JSON_INTERNAL_NUMBERCONVERTER_READSINGLE_OFFSET UNITYSDK_OFFSET(0x1BDD60A0)
#define UTF8JSON_INTERNAL_NUMBERCONVERTER_READUINT16_OFFSET UNITYSDK_OFFSET(0x1BDD5FD0)
#define UTF8JSON_INTERNAL_NUMBERCONVERTER_READUINT32_OFFSET UNITYSDK_OFFSET(0x1BDD6030)
#define UTF8JSON_INTERNAL_NUMBERCONVERTER_READUINT64_OFFSET UNITYSDK_OFFSET(0x1BDD5EB0)
#define UTF8JSON_INTERNAL_NUMBERCONVERTER_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x1BDD6260)
#define UTF8JSON_INTERNAL_NUMBERCONVERTER_WRITEDOUBLE_OFFSET UNITYSDK_OFFSET(0x1BDD7930)
#define UTF8JSON_INTERNAL_NUMBERCONVERTER_WRITEINT16_OFFSET UNITYSDK_OFFSET(0x1BDD78A0)
#define UTF8JSON_INTERNAL_NUMBERCONVERTER_WRITEINT32_OFFSET UNITYSDK_OFFSET(0x1BDD78B0)
#define UTF8JSON_INTERNAL_NUMBERCONVERTER_WRITEINT64_OFFSET UNITYSDK_OFFSET(0x1BDD6B90)
#define UTF8JSON_INTERNAL_NUMBERCONVERTER_WRITESBYTE_OFFSET UNITYSDK_OFFSET(0x1BDD6B80)
#define UTF8JSON_INTERNAL_NUMBERCONVERTER_WRITESINGLE_OFFSET UNITYSDK_OFFSET(0x1BDD78C0)
#define UTF8JSON_INTERNAL_NUMBERCONVERTER_WRITEUINT16_OFFSET UNITYSDK_OFFSET(0x1BDD6B60)
#define UTF8JSON_INTERNAL_NUMBERCONVERTER_WRITEUINT32_OFFSET UNITYSDK_OFFSET(0x1BDD6B70)
#define UTF8JSON_INTERNAL_NUMBERCONVERTER_WRITEUINT64_OFFSET UNITYSDK_OFFSET(0x1BDD6270)

namespace Utf8Json::Internal
{
	inline static constexpr unsigned int NumberConverter_TypeDefinitionIndex = 85664;

	class NumberConverter : public ::System::Object
	{
	public:
		static ::System::Boolean IsNumber(::System::Byte c)
		{
			return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_NUMBERCONVERTER_ISNUMBER_OFFSET))(c);
		}

		static ::System::Boolean IsNumberRepresentation(::System::Byte c)
		{
			return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_NUMBERCONVERTER_ISNUMBERREPRESENTATION_OFFSET))(c);
		}

		static ::System::SByte ReadSByte(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32& readCount)
		{
			return ((::System::SByte(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_NUMBERCONVERTER_READSBYTE_OFFSET))(bytes, offset, readCount);
		}

		static ::System::Int16 ReadInt16(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32& readCount)
		{
			return ((::System::Int16(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_NUMBERCONVERTER_READINT16_OFFSET))(bytes, offset, readCount);
		}

		static ::System::Int32 ReadInt32(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32& readCount)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_NUMBERCONVERTER_READINT32_OFFSET))(bytes, offset, readCount);
		}

		static ::System::Int64 ReadInt64(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32& readCount)
		{
			return ((::System::Int64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_NUMBERCONVERTER_READINT64_OFFSET))(bytes, offset, readCount);
		}

		static ::System::Byte ReadByte(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32& readCount)
		{
			return ((::System::Byte(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_NUMBERCONVERTER_READBYTE_OFFSET))(bytes, offset, readCount);
		}

		static ::System::UInt16 ReadUInt16(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32& readCount)
		{
			return ((::System::UInt16(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_NUMBERCONVERTER_READUINT16_OFFSET))(bytes, offset, readCount);
		}

		static ::System::UInt32 ReadUInt32(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32& readCount)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_NUMBERCONVERTER_READUINT32_OFFSET))(bytes, offset, readCount);
		}

		static ::System::UInt64 ReadUInt64(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32& readCount)
		{
			return ((::System::UInt64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_NUMBERCONVERTER_READUINT64_OFFSET))(bytes, offset, readCount);
		}

		static ::System::Single ReadSingle(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32& readCount)
		{
			return ((::System::Single(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_NUMBERCONVERTER_READSINGLE_OFFSET))(bytes, offset, readCount);
		}

		static ::System::Double ReadDouble(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32& readCount)
		{
			return ((::System::Double(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_NUMBERCONVERTER_READDOUBLE_OFFSET))(bytes, offset, readCount);
		}

		static ::System::Int32 WriteByte(::Il2CppArray<::System::Byte>*& buffer, ::System::Int32 offset, ::System::Byte value)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*&, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_NUMBERCONVERTER_WRITEBYTE_OFFSET))(buffer, offset, value);
		}

		static ::System::Int32 WriteUInt16(::Il2CppArray<::System::Byte>*& buffer, ::System::Int32 offset, ::System::UInt16 value)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*&, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_NUMBERCONVERTER_WRITEUINT16_OFFSET))(buffer, offset, value);
		}

		static ::System::Int32 WriteUInt32(::Il2CppArray<::System::Byte>*& buffer, ::System::Int32 offset, ::System::UInt32 value)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*&, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_NUMBERCONVERTER_WRITEUINT32_OFFSET))(buffer, offset, value);
		}

		static ::System::Int32 WriteUInt64(::Il2CppArray<::System::Byte>*& buffer, ::System::Int32 offset, ::System::UInt64 value)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*&, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_NUMBERCONVERTER_WRITEUINT64_OFFSET))(buffer, offset, value);
		}

		static ::System::Int32 WriteSByte(::Il2CppArray<::System::Byte>*& buffer, ::System::Int32 offset, ::System::SByte value)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*&, ::System::Int32, ::System::SByte))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_NUMBERCONVERTER_WRITESBYTE_OFFSET))(buffer, offset, value);
		}

		static ::System::Int32 WriteInt16(::Il2CppArray<::System::Byte>*& buffer, ::System::Int32 offset, ::System::Int16 value)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*&, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_NUMBERCONVERTER_WRITEINT16_OFFSET))(buffer, offset, value);
		}

		static ::System::Int32 WriteInt32(::Il2CppArray<::System::Byte>*& buffer, ::System::Int32 offset, ::System::Int32 value)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_NUMBERCONVERTER_WRITEINT32_OFFSET))(buffer, offset, value);
		}

		static ::System::Int32 WriteInt64(::Il2CppArray<::System::Byte>*& buffer, ::System::Int32 offset, ::System::Int64 value)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*&, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_NUMBERCONVERTER_WRITEINT64_OFFSET))(buffer, offset, value);
		}

		static ::System::Int32 WriteSingle(::Il2CppArray<::System::Byte>*& bytes, ::System::Int32 offset, ::System::Single value)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*&, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_NUMBERCONVERTER_WRITESINGLE_OFFSET))(bytes, offset, value);
		}

		static ::System::Int32 WriteDouble(::Il2CppArray<::System::Byte>*& bytes, ::System::Int32 offset, ::System::Double value)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*&, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_NUMBERCONVERTER_WRITEDOUBLE_OFFSET))(bytes, offset, value);
		}

		static ::System::Boolean ReadBoolean(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32& readCount)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_NUMBERCONVERTER_READBOOLEAN_OFFSET))(bytes, offset, readCount);
		}
	};
}
