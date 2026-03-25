#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoder; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_BINARYWRITER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x16327190)
#define SYSTEM_IO_BINARYWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16327140)
#define SYSTEM_IO_BINARYWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x163271D0)
#define SYSTEM_IO_BINARYWRITER_GET_BASESTREAM_OFFSET UNITYSDK_OFFSET(0x163271B0)
#define SYSTEM_IO_BINARYWRITER_SEEK_OFFSET UNITYSDK_OFFSET(0x16327200)
#define SYSTEM_IO_BINARYWRITER_WRITE7BITENCODEDINT_OFFSET UNITYSDK_OFFSET(0x163280A0)
#define SYSTEM_IO_BINARYWRITER_WRITE_10_OFFSET UNITYSDK_OFFSET(0x163276D0)
#define SYSTEM_IO_BINARYWRITER_WRITE_11_OFFSET UNITYSDK_OFFSET(0x16327760)
#define SYSTEM_IO_BINARYWRITER_WRITE_12_OFFSET UNITYSDK_OFFSET(0x16327860)
#define SYSTEM_IO_BINARYWRITER_WRITE_13_OFFSET UNITYSDK_OFFSET(0x16327960)
#define SYSTEM_IO_BINARYWRITER_WRITE_14_OFFSET UNITYSDK_OFFSET(0x16327B50)
#define SYSTEM_IO_BINARYWRITER_WRITE_15_OFFSET UNITYSDK_OFFSET(0x16327D40)
#define SYSTEM_IO_BINARYWRITER_WRITE_16_OFFSET UNITYSDK_OFFSET(0x16327D90)
#define SYSTEM_IO_BINARYWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x163272A0)
#define SYSTEM_IO_BINARYWRITER_WRITE_2_OFFSET UNITYSDK_OFFSET(0x163272D0)
#define SYSTEM_IO_BINARYWRITER_WRITE_3_OFFSET UNITYSDK_OFFSET(0x16327300)
#define SYSTEM_IO_BINARYWRITER_WRITE_4_OFFSET UNITYSDK_OFFSET(0x16327390)
#define SYSTEM_IO_BINARYWRITER_WRITE_5_OFFSET UNITYSDK_OFFSET(0x163273C0)
#define SYSTEM_IO_BINARYWRITER_WRITE_6_OFFSET UNITYSDK_OFFSET(0x163274A0)
#define SYSTEM_IO_BINARYWRITER_WRITE_7_OFFSET UNITYSDK_OFFSET(0x16327570)
#define SYSTEM_IO_BINARYWRITER_WRITE_8_OFFSET UNITYSDK_OFFSET(0x163275C0)
#define SYSTEM_IO_BINARYWRITER_WRITE_9_OFFSET UNITYSDK_OFFSET(0x16327640)
#define SYSTEM_IO_BINARYWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x16327230)
#define SYSTEM_IO_BINARYWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16328100)
#define SYSTEM_IO_BINARYWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16326FA0)
#define SYSTEM_IO_BINARYWRITER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x16327130)
#define SYSTEM_IO_BINARYWRITER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x16327030)
#define SYSTEM_IO_BINARYWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x16326EC0)

namespace System::IO
{
	inline static constexpr unsigned int BinaryWriter_TypeDefinitionIndex = 661;

	class BinaryWriter : public ::System::Object
	{
	public:
		static ::System::IO::BinaryWriter** StaticGet_Null()
		{
			return (::System::IO::BinaryWriter**)Il2CppClass::FromTypeDefinitionIndex(BinaryWriter_TypeDefinitionIndex)->GetStaticField(0x4EC0);
		}
		::Il2CppArray<::System::Byte>* _largeByteBuffer; // 0x10
		::System::Text::Encoding* _encoding; // 0x18
		::System::IO::Stream* OutStream; // 0x20
		::System::Text::Encoder* _encoder; // 0x28
		::Il2CppArray<::System::Char>* _tmpOneCharBuffer; // 0x30
		::Il2CppArray<::System::Byte>* _buffer; // 0x38
		::System::Boolean _leaveOpen; // 0x40
		::System::Int32 _maxChars; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IO::Stream* output)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER__CTOR_1_OFFSET))(this, output);
		}

		::System::Void _ctor_2(::System::IO::Stream* output, ::System::Text::Encoding* encoding)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER__CTOR_2_OFFSET))(this, output, encoding);
		}

		::System::Void _ctor_3(::System::IO::Stream* output, ::System::Text::Encoding* encoding, ::System::Boolean leaveOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER__CTOR_3_OFFSET))(this, output, encoding, leaveOpen);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER__CCTOR_OFFSET))();
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_DISPOSE_1_OFFSET))(this);
		}

		::System::IO::Stream* get_BaseStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_GET_BASESTREAM_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_FLUSH_OFFSET))(this);
		}

		::System::Int64 Seek(::System::Int32 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void Write(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_OFFSET))(this, value);
		}

		::System::Void Write_1(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_1_OFFSET))(this, value);
		}

		::System::Void Write_2(::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_2_OFFSET))(this, value);
		}

		::System::Void Write_3(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_3_OFFSET))(this, buffer);
		}

		::System::Void Write_4(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_4_OFFSET))(this, buffer, index, count);
		}

		::System::Void Write_5(::System::Char ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_5_OFFSET))(this, ch);
		}

		::System::Void Write_6(::Il2CppArray<::System::Char>* chars)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_6_OFFSET))(this, chars);
		}

		::System::Void Write_7(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_7_OFFSET))(this, value);
		}

		::System::Void Write_8(::System::Decimal value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_8_OFFSET))(this, value);
		}

		::System::Void Write_9(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_9_OFFSET))(this, value);
		}

		::System::Void Write_10(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_10_OFFSET))(this, value);
		}

		::System::Void Write_11(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_11_OFFSET))(this, value);
		}

		::System::Void Write_12(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_12_OFFSET))(this, value);
		}

		::System::Void Write_13(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_13_OFFSET))(this, value);
		}

		::System::Void Write_14(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_14_OFFSET))(this, value);
		}

		::System::Void Write_15(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_15_OFFSET))(this, value);
		}

		::System::Void Write_16(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_16_OFFSET))(this, value);
		}

		::System::Void Write7BitEncodedInt(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE7BITENCODEDINT_OFFSET))(this, value);
		}
	};
}
