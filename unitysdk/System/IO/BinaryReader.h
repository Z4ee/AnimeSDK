#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Decoder; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_BINARYREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x18705330)
#define SYSTEM_IO_BINARYREADER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x187053A0)
#define SYSTEM_IO_BINARYREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18705350)
#define SYSTEM_IO_BINARYREADER_FILLBUFFER_OFFSET UNITYSDK_OFFSET(0x18706790)
#define SYSTEM_IO_BINARYREADER_GET_BASESTREAM_OFFSET UNITYSDK_OFFSET(0x18705320)
#define SYSTEM_IO_BINARYREADER_INTERNALREADCHARS_OFFSET UNITYSDK_OFFSET(0x18706060)
#define SYSTEM_IO_BINARYREADER_INTERNALREADONECHAR_OFFSET UNITYSDK_OFFSET(0x187053E0)
#define SYSTEM_IO_BINARYREADER_READ7BITENCODEDINT_OFFSET UNITYSDK_OFFSET(0x18705F60)
#define SYSTEM_IO_BINARYREADER_READBOOLEAN_OFFSET UNITYSDK_OFFSET(0x187056B0)
#define SYSTEM_IO_BINARYREADER_READBYTES_OFFSET UNITYSDK_OFFSET(0x18706670)
#define SYSTEM_IO_BINARYREADER_READBYTE_OFFSET UNITYSDK_OFFSET(0x187056F0)
#define SYSTEM_IO_BINARYREADER_READCHARS_OFFSET UNITYSDK_OFFSET(0x18706430)
#define SYSTEM_IO_BINARYREADER_READCHAR_OFFSET UNITYSDK_OFFSET(0x18705760)
#define SYSTEM_IO_BINARYREADER_READDECIMAL_OFFSET UNITYSDK_OFFSET(0x18705B50)
#define SYSTEM_IO_BINARYREADER_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x18705B10)
#define SYSTEM_IO_BINARYREADER_READINT16_OFFSET UNITYSDK_OFFSET(0x18705780)
#define SYSTEM_IO_BINARYREADER_READINT32_OFFSET UNITYSDK_OFFSET(0x18705820)
#define SYSTEM_IO_BINARYREADER_READINT64_OFFSET UNITYSDK_OFFSET(0x18705950)
#define SYSTEM_IO_BINARYREADER_READSBYTE_OFFSET UNITYSDK_OFFSET(0x18705720)
#define SYSTEM_IO_BINARYREADER_READSINGLE_OFFSET UNITYSDK_OFFSET(0x18705AD0)
#define SYSTEM_IO_BINARYREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x18705C80)
#define SYSTEM_IO_BINARYREADER_READUINT16_OFFSET UNITYSDK_OFFSET(0x187057D0)
#define SYSTEM_IO_BINARYREADER_READUINT32_OFFSET UNITYSDK_OFFSET(0x187058E0)
#define SYSTEM_IO_BINARYREADER_READUINT64_OFFSET UNITYSDK_OFFSET(0x18705A10)
#define SYSTEM_IO_BINARYREADER_READ_1_OFFSET UNITYSDK_OFFSET(0x18706540)
#define SYSTEM_IO_BINARYREADER_READ_OFFSET UNITYSDK_OFFSET(0x187053C0)
#define SYSTEM_IO_BINARYREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18705310)
#define SYSTEM_IO_BINARYREADER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18705130)
#define SYSTEM_IO_BINARYREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x187050C0)

namespace System::IO
{
	inline static constexpr unsigned int BinaryReader_TypeDefinitionIndex = 659;

	class BinaryReader : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* m_buffer; // 0x10
		::Il2CppArray<::System::Char>* m_charBuffer; // 0x18
		::System::Text::Decoder* m_decoder; // 0x20
		::System::IO::Stream* m_stream; // 0x28
		::Il2CppArray<::System::Char>* m_singleChar; // 0x30
		::Il2CppArray<::System::Byte>* m_charBytes; // 0x38
		::System::Int32 m_maxCharsSize; // 0x40
		::System::Boolean m_2BytesPerChar; // 0x44
		::System::Boolean m_leaveOpen; // 0x45
		::System::Boolean m_isMemoryStream; // 0x46

		::System::Void _ctor(::System::IO::Stream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::IO::Stream* a1, ::System::Text::Encoding* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::IO::Stream* a1, ::System::Text::Encoding* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::IO::Stream* get_BaseStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_GET_BASESTREAM_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_DISPOSE_1_OFFSET))(this);
		}

		::System::Int32 Read()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READ_OFFSET))(this);
		}

		::System::Boolean ReadBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READBOOLEAN_OFFSET))(this);
		}

		::System::Byte ReadByte()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READBYTE_OFFSET))(this);
		}

		::System::SByte ReadSByte()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READSBYTE_OFFSET))(this);
		}

		::System::Char ReadChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READCHAR_OFFSET))(this);
		}

		::System::Int16 ReadInt16()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READINT16_OFFSET))(this);
		}

		::System::UInt16 ReadUInt16()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READUINT16_OFFSET))(this);
		}

		::System::Int32 ReadInt32()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READINT32_OFFSET))(this);
		}

		::System::UInt32 ReadUInt32()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READUINT32_OFFSET))(this);
		}

		::System::Int64 ReadInt64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READINT64_OFFSET))(this);
		}

		::System::UInt64 ReadUInt64()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READUINT64_OFFSET))(this);
		}

		::System::Single ReadSingle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READSINGLE_OFFSET))(this);
		}

		::System::Double ReadDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READDOUBLE_OFFSET))(this);
		}

		::System::Decimal ReadDecimal()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READDECIMAL_OFFSET))(this);
		}

		::System::String* ReadString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READSTRING_OFFSET))(this);
		}

		::System::Int32 InternalReadChars(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_INTERNALREADCHARS_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 InternalReadOneChar()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_INTERNALREADONECHAR_OFFSET))(this);
		}

		::Il2CppArray<::System::Char>* ReadChars(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READCHARS_OFFSET))(this, a1);
		}

		::System::Int32 Read_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READ_1_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* ReadBytes(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READBYTES_OFFSET))(this, a1);
		}

		::System::Void FillBuffer(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_FILLBUFFER_OFFSET))(this, a1);
		}

		::System::Int32 Read7BitEncodedInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READ7BITENCODEDINT_OFFSET))(this);
		}
	};
}
