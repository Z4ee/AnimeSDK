#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/TextReader.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Decoder; }
namespace System::Text { class Encoding; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_IO_STREAMREADER_CHECKASYNCTASKINPROGRESS_OFFSET UNITYSDK_OFFSET(0x16342B80)
#define SYSTEM_IO_STREAMREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x163435A0)
#define SYSTEM_IO_STREAMREADER_COMPRESSBUFFER_OFFSET UNITYSDK_OFFSET(0x16344120)
#define SYSTEM_IO_STREAMREADER_DATAAVAILABLE_OFFSET UNITYSDK_OFFSET(0x16343950)
#define SYSTEM_IO_STREAMREADER_DETECTENCODING_OFFSET UNITYSDK_OFFSET(0x16344150)
#define SYSTEM_IO_STREAMREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x163435C0)
#define SYSTEM_IO_STREAMREADER_GET_BASESTREAM_OFFSET UNITYSDK_OFFSET(0x163436C0)
#define SYSTEM_IO_STREAMREADER_GET_CURRENTENCODING_OFFSET UNITYSDK_OFFSET(0x163436B0)
#define SYSTEM_IO_STREAMREADER_GET_DEFAULTBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x16342B70)
#define SYSTEM_IO_STREAMREADER_GET_ENDOFSTREAM_OFFSET UNITYSDK_OFFSET(0x163436D0)
#define SYSTEM_IO_STREAMREADER_GET_LEAVEOPEN_OFFSET UNITYSDK_OFFSET(0x16343690)
#define SYSTEM_IO_STREAMREADER_INIT_1_OFFSET UNITYSDK_OFFSET(0x16343590)
#define SYSTEM_IO_STREAMREADER_INIT_OFFSET UNITYSDK_OFFSET(0x16343000)
#define SYSTEM_IO_STREAMREADER_ISPREAMBLE_OFFSET UNITYSDK_OFFSET(0x16344500)
#define SYSTEM_IO_STREAMREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x16343820)
#define SYSTEM_IO_STREAMREADER_READBUFFER_1_OFFSET UNITYSDK_OFFSET(0x16343D00)
#define SYSTEM_IO_STREAMREADER_READBUFFER_OFFSET UNITYSDK_OFFSET(0x16344630)
#define SYSTEM_IO_STREAMREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x16344830)
#define SYSTEM_IO_STREAMREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x16343F90)
#define SYSTEM_IO_STREAMREADER_READ_1_OFFSET UNITYSDK_OFFSET(0x16343A90)
#define SYSTEM_IO_STREAMREADER_READ_OFFSET UNITYSDK_OFFSET(0x16343960)
#define SYSTEM_IO_STREAMREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16344AE0)
#define SYSTEM_IO_STREAMREADER__CTOR_10_OFFSET UNITYSDK_OFFSET(0x16343350)
#define SYSTEM_IO_STREAMREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16342C30)
#define SYSTEM_IO_STREAMREADER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x16342D30)
#define SYSTEM_IO_STREAMREADER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x16342F50)
#define SYSTEM_IO_STREAMREADER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x16342FA0)
#define SYSTEM_IO_STREAMREADER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x16342E30)
#define SYSTEM_IO_STREAMREADER__CTOR_6_OFFSET UNITYSDK_OFFSET(0x163430E0)
#define SYSTEM_IO_STREAMREADER__CTOR_7_OFFSET UNITYSDK_OFFSET(0x163431E0)
#define SYSTEM_IO_STREAMREADER__CTOR_8_OFFSET UNITYSDK_OFFSET(0x16343300)
#define SYSTEM_IO_STREAMREADER__CTOR_9_OFFSET UNITYSDK_OFFSET(0x163432E0)
#define SYSTEM_IO_STREAMREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x16342C00)

namespace System::IO
{
	inline static constexpr unsigned int StreamReader_TypeDefinitionIndex = 690;

	class StreamReader : public ::System::IO::TextReader
	{
	public:
		static ::System::IO::StreamReader** StaticGet_Null()
		{
			return (::System::IO::StreamReader**)Il2CppClass::FromTypeDefinitionIndex(StreamReader_TypeDefinitionIndex)->GetStaticField(0x52E0);
		}
		::System::Threading::Tasks::Task* _asyncReadTask; // 0x18
		::Il2CppArray<::System::Byte>* _preamble; // 0x20
		::System::Text::Encoding* encoding; // 0x28
		::System::IO::Stream* stream; // 0x30
		::System::Text::Decoder* decoder; // 0x38
		::Il2CppArray<::System::Char>* charBuffer; // 0x40
		::Il2CppArray<::System::Byte>* byteBuffer; // 0x48
		::System::Int32 _maxCharsPerBuffer; // 0x50
		::System::Int32 charPos; // 0x54
		::System::Int32 bytePos; // 0x58
		::System::Int32 charLen; // 0x5C
		::System::Int32 byteLen; // 0x60
		::System::Boolean _closable; // 0x64
		::System::Boolean _detectEncoding; // 0x65
		::System::Boolean _isBlocked; // 0x66
		::System::Boolean _checkPreamble; // 0x67

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER__CTOR_1_OFFSET))(this, stream);
		}

		::System::Void _ctor_2(::System::IO::Stream* stream, ::System::Boolean detectEncodingFromByteOrderMarks)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER__CTOR_2_OFFSET))(this, stream, detectEncodingFromByteOrderMarks);
		}

		::System::Void _ctor_3(::System::IO::Stream* stream, ::System::Text::Encoding* encoding)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER__CTOR_3_OFFSET))(this, stream, encoding);
		}

		::System::Void _ctor_4(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, ::System::Boolean detectEncodingFromByteOrderMarks)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER__CTOR_4_OFFSET))(this, stream, encoding, detectEncodingFromByteOrderMarks);
		}

		::System::Void _ctor_5(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, ::System::Boolean detectEncodingFromByteOrderMarks, ::System::Int32 bufferSize, ::System::Boolean leaveOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER__CTOR_5_OFFSET))(this, stream, encoding, detectEncodingFromByteOrderMarks, bufferSize, leaveOpen);
		}

		::System::Void _ctor_6(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER__CTOR_6_OFFSET))(this, path);
		}

		::System::Void _ctor_7(::System::String* path, ::System::Boolean detectEncodingFromByteOrderMarks)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER__CTOR_7_OFFSET))(this, path, detectEncodingFromByteOrderMarks);
		}

		::System::Void _ctor_8(::System::String* path, ::System::Text::Encoding* encoding)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER__CTOR_8_OFFSET))(this, path, encoding);
		}

		::System::Void _ctor_9(::System::String* path, ::System::Text::Encoding* encoding, ::System::Boolean detectEncodingFromByteOrderMarks, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Text::Encoding*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER__CTOR_9_OFFSET))(this, path, encoding, detectEncodingFromByteOrderMarks, bufferSize);
		}

		::System::Void _ctor_10(::System::String* path, ::System::Text::Encoding* encoding, ::System::Boolean detectEncodingFromByteOrderMarks, ::System::Int32 bufferSize, ::System::Boolean checkHost)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Text::Encoding*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER__CTOR_10_OFFSET))(this, path, encoding, detectEncodingFromByteOrderMarks, bufferSize, checkHost);
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

		::System::Void Init(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, ::System::Boolean detectEncodingFromByteOrderMarks, ::System::Int32 bufferSize, ::System::Boolean leaveOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_INIT_OFFSET))(this, stream, encoding, detectEncodingFromByteOrderMarks, bufferSize, leaveOpen);
		}

		::System::Void Init_1(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_INIT_1_OFFSET))(this, stream);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_DISPOSE_OFFSET))(this, disposing);
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

		::System::Int32 Read_1(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_READ_1_OFFSET))(this, buffer, index, count);
		}

		::System::String* ReadToEnd()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_READTOEND_OFFSET))(this);
		}

		::System::Void CompressBuffer(::System::Int32 n)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_COMPRESSBUFFER_OFFSET))(this, n);
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

		::System::Int32 ReadBuffer_1(::Il2CppArray<::System::Char>* userBuffer, ::System::Int32 userOffset, ::System::Int32 desiredChars, ::System::Boolean& readToUserBuffer)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_READBUFFER_1_OFFSET))(this, userBuffer, userOffset, desiredChars, readToUserBuffer);
		}

		::System::String* ReadLine()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_READLINE_OFFSET))(this);
		}
	};
}
