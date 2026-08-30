#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/TextReader.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Decoder; }
namespace System::Text { class Encoding; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_IO_STREAMREADER_CHECKASYNCTASKINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1D46F6D0)
#define SYSTEM_IO_STREAMREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1D46FF80)
#define SYSTEM_IO_STREAMREADER_COMPRESSBUFFER_OFFSET UNITYSDK_OFFSET(0x1D470FC0)
#define SYSTEM_IO_STREAMREADER_DATAAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1D470490)
#define SYSTEM_IO_STREAMREADER_DETECTENCODING_OFFSET UNITYSDK_OFFSET(0x1D470FF0)
#define SYSTEM_IO_STREAMREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D470000)
#define SYSTEM_IO_STREAMREADER_GET_BASESTREAM_OFFSET UNITYSDK_OFFSET(0x1D470150)
#define SYSTEM_IO_STREAMREADER_GET_CURRENTENCODING_OFFSET UNITYSDK_OFFSET(0x1D470140)
#define SYSTEM_IO_STREAMREADER_GET_DEFAULTBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1D46F6C0)
#define SYSTEM_IO_STREAMREADER_GET_ENDOFSTREAM_OFFSET UNITYSDK_OFFSET(0x1D470160)
#define SYSTEM_IO_STREAMREADER_GET_LEAVEOPEN_OFFSET UNITYSDK_OFFSET(0x1D470120)
#define SYSTEM_IO_STREAMREADER_INIT_1_OFFSET UNITYSDK_OFFSET(0x1D46FF70)
#define SYSTEM_IO_STREAMREADER_INIT_OFFSET UNITYSDK_OFFSET(0x1D46FA80)
#define SYSTEM_IO_STREAMREADER_ISPREAMBLE_OFFSET UNITYSDK_OFFSET(0x1D471420)
#define SYSTEM_IO_STREAMREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x1D470310)
#define SYSTEM_IO_STREAMREADER_READBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1D470890)
#define SYSTEM_IO_STREAMREADER_READBUFFER_OFFSET UNITYSDK_OFFSET(0x1D471540)
#define SYSTEM_IO_STREAMREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x1D4718E0)
#define SYSTEM_IO_STREAMREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x1D470DD0)
#define SYSTEM_IO_STREAMREADER_READ_1_OFFSET UNITYSDK_OFFSET(0x1D470620)
#define SYSTEM_IO_STREAMREADER_READ_OFFSET UNITYSDK_OFFSET(0x1D4704A0)
#define SYSTEM_IO_STREAMREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D471CB0)
#define SYSTEM_IO_STREAMREADER__CTOR_10_OFFSET UNITYSDK_OFFSET(0x1D46FDB0)
#define SYSTEM_IO_STREAMREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D46F780)
#define SYSTEM_IO_STREAMREADER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D46F7E0)
#define SYSTEM_IO_STREAMREADER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D46F9D0)
#define SYSTEM_IO_STREAMREADER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1D46FA20)
#define SYSTEM_IO_STREAMREADER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1D46F840)
#define SYSTEM_IO_STREAMREADER__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1D46FC80)
#define SYSTEM_IO_STREAMREADER__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1D46FCE0)
#define SYSTEM_IO_STREAMREADER__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1D46FD60)
#define SYSTEM_IO_STREAMREADER__CTOR_9_OFFSET UNITYSDK_OFFSET(0x1D46FD40)
#define SYSTEM_IO_STREAMREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D46F750)

namespace System::IO
{
	inline static constexpr unsigned int StreamReader_TypeDefinitionIndex = 692;

	class StreamReader : public ::System::IO::TextReader
	{
	public:
		static ::System::IO::StreamReader** StaticGet_Null()
		{
			return (::System::IO::StreamReader**)Il2CppClass::FromTypeDefinitionIndex(StreamReader_TypeDefinitionIndex)->GetStaticField(0xC970);
		}
		::System::Threading::Tasks::Task* _asyncReadTask; // 0x18
		::Il2CppArray<::System::Char>* charBuffer; // 0x20
		::System::Text::Encoding* encoding; // 0x28
		::Il2CppArray<::System::Byte>* _preamble; // 0x30
		::Il2CppArray<::System::Byte>* byteBuffer; // 0x38
		::System::Text::Decoder* decoder; // 0x40
		::System::IO::Stream* stream; // 0x48
		::System::Boolean _checkPreamble; // 0x50
		::System::Boolean _closable; // 0x51
		::System::Boolean _isBlocked; // 0x52
		::System::Boolean _detectEncoding; // 0x53
		::System::Int32 bytePos; // 0x54
		::System::Int32 _maxCharsPerBuffer; // 0x58
		::System::Int32 byteLen; // 0x5C
		::System::Int32 charPos; // 0x60
		::System::Int32 charLen; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IO::Stream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::IO::Stream* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::IO::Stream* a1, ::System::Text::Encoding* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER__CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_4(::System::IO::Stream* a1, ::System::Text::Encoding* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER__CTOR_4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_5(::System::IO::Stream* a1, ::System::Text::Encoding* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER__CTOR_5_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_6(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER__CTOR_6_OFFSET))(this, a1);
		}

		::System::Void _ctor_7(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER__CTOR_7_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_8(::System::String* a1, ::System::Text::Encoding* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER__CTOR_8_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_9(::System::String* a1, ::System::Text::Encoding* a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Text::Encoding*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER__CTOR_9_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_10(::System::String* a1, ::System::Text::Encoding* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Text::Encoding*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER__CTOR_10_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER__CCTOR_OFFSET))();
		}

		static ::System::Int32 get_DefaultBufferSize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_GET_DEFAULTBUFFERSIZE_OFFSET))();
		}

		::System::Void CheckAsyncTaskInProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_CHECKASYNCTASKINPROGRESS_OFFSET))(this);
		}

		::System::Void Init(::System::IO::Stream* a1, ::System::Text::Encoding* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_INIT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Init_1(::System::IO::Stream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_INIT_1_OFFSET))(this, a1);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_DISPOSE_OFFSET))(this, a1);
		}

		::System::Text::Encoding* get_CurrentEncoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_GET_CURRENTENCODING_OFFSET))(this);
		}

		::System::IO::Stream* get_BaseStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_GET_BASESTREAM_OFFSET))(this);
		}

		::System::Boolean get_LeaveOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_GET_LEAVEOPEN_OFFSET))(this);
		}

		::System::Boolean get_EndOfStream()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_GET_ENDOFSTREAM_OFFSET))(this);
		}

		::System::Int32 Peek()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_PEEK_OFFSET))(this);
		}

		::System::Boolean DataAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_DATAAVAILABLE_OFFSET))(this);
		}

		::System::Int32 Read()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_READ_OFFSET))(this);
		}

		::System::Int32 Read_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_READ_1_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ReadToEnd()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_READTOEND_OFFSET))(this);
		}

		::System::Void CompressBuffer(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_COMPRESSBUFFER_OFFSET))(this, a1);
		}

		::System::Void DetectEncoding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_DETECTENCODING_OFFSET))(this);
		}

		::System::Boolean IsPreamble()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_ISPREAMBLE_OFFSET))(this);
		}

		::System::Int32 ReadBuffer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_READBUFFER_OFFSET))(this);
		}

		::System::Int32 ReadBuffer_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean& a4)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_READBUFFER_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* ReadLine()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_READLINE_OFFSET))(this);
		}
	};
}
