#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/TextWriter.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoder; }
namespace System::Text { class Encoding; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_IO_STREAMWRITER_CHECKASYNCTASKINPROGRESS_OFFSET UNITYSDK_OFFSET(0x16344D30)
#define SYSTEM_IO_STREAMWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x16345840)
#define SYSTEM_IO_STREAMWRITER_CREATEFILE_OFFSET UNITYSDK_OFFSET(0x163457B0)
#define SYSTEM_IO_STREAMWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x163458C0)
#define SYSTEM_IO_STREAMWRITER_FLUSH_1_OFFSET UNITYSDK_OFFSET(0x16345A60)
#define SYSTEM_IO_STREAMWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x16345C10)
#define SYSTEM_IO_STREAMWRITER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x16345DA0)
#define SYSTEM_IO_STREAMWRITER_GET_LEAVEOPEN_OFFSET UNITYSDK_OFFSET(0x16345A50)
#define SYSTEM_IO_STREAMWRITER_GET_UTF8NOBOM_OFFSET UNITYSDK_OFFSET(0x16344DB0)
#define SYSTEM_IO_STREAMWRITER_INIT_OFFSET UNITYSDK_OFFSET(0x16345330)
#define SYSTEM_IO_STREAMWRITER_SET_AUTOFLUSH_OFFSET UNITYSDK_OFFSET(0x16345D00)
#define SYSTEM_IO_STREAMWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x16345E90)
#define SYSTEM_IO_STREAMWRITER_WRITE_2_OFFSET UNITYSDK_OFFSET(0x16345FB0)
#define SYSTEM_IO_STREAMWRITER_WRITE_3_OFFSET UNITYSDK_OFFSET(0x163461D0)
#define SYSTEM_IO_STREAMWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x16345DB0)
#define SYSTEM_IO_STREAMWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x163462F0)
#define SYSTEM_IO_STREAMWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x163450B0)
#define SYSTEM_IO_STREAMWRITER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x163452F0)
#define SYSTEM_IO_STREAMWRITER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x16345310)
#define SYSTEM_IO_STREAMWRITER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x16345100)
#define SYSTEM_IO_STREAMWRITER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x16345410)
#define SYSTEM_IO_STREAMWRITER__CTOR_6_OFFSET UNITYSDK_OFFSET(0x16345480)
#define SYSTEM_IO_STREAMWRITER__CTOR_7_OFFSET UNITYSDK_OFFSET(0x163454E0)
#define SYSTEM_IO_STREAMWRITER__CTOR_8_OFFSET UNITYSDK_OFFSET(0x16345460)
#define SYSTEM_IO_STREAMWRITER__CTOR_9_OFFSET UNITYSDK_OFFSET(0x16345500)
#define SYSTEM_IO_STREAMWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x16344ED0)

namespace System::IO
{
	inline static constexpr unsigned int StreamWriter_TypeDefinitionIndex = 692;

	class StreamWriter : public ::System::IO::TextWriter
	{
	public:
		static ::System::IO::StreamWriter** StaticGet_Null()
		{
			return (::System::IO::StreamWriter**)Il2CppClass::FromTypeDefinitionIndex(StreamWriter_TypeDefinitionIndex)->GetStaticField(0x52F0);
		}
		static ::System::Text::Encoding** StaticGet__UTF8NoBOM()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(StreamWriter_TypeDefinitionIndex)->GetStaticField(0x52F8);
		}
		::Il2CppArray<::System::Byte>* byteBuffer; // 0x28
		::System::IO::Stream* stream; // 0x30
		::System::Text::Encoding* encoding; // 0x38
		::System::Text::Encoder* encoder; // 0x40
		::System::Threading::Tasks::Task* _asyncWriteTask; // 0x48
		::Il2CppArray<::System::Char>* charBuffer; // 0x50
		::System::Int32 charPos; // 0x58
		::System::Int32 charLen; // 0x5C
		::System::Boolean autoFlush; // 0x60
		::System::Boolean haveWrittenPreamble; // 0x61
		::System::Boolean closable; // 0x62

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER__CTOR_1_OFFSET))(this, stream);
		}

		::System::Void _ctor_2(::System::IO::Stream* stream, ::System::Text::Encoding* encoding)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER__CTOR_2_OFFSET))(this, stream, encoding);
		}

		::System::Void _ctor_3(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER__CTOR_3_OFFSET))(this, stream, encoding, bufferSize);
		}

		::System::Void _ctor_4(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, ::System::Int32 bufferSize, ::System::Boolean leaveOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER__CTOR_4_OFFSET))(this, stream, encoding, bufferSize, leaveOpen);
		}

		::System::Void _ctor_5(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER__CTOR_5_OFFSET))(this, path);
		}

		::System::Void _ctor_6(::System::String* path, ::System::Boolean append)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER__CTOR_6_OFFSET))(this, path, append);
		}

		::System::Void _ctor_7(::System::String* path, ::System::Boolean append, ::System::Text::Encoding* encoding)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER__CTOR_7_OFFSET))(this, path, append, encoding);
		}

		::System::Void _ctor_8(::System::String* path, ::System::Boolean append, ::System::Text::Encoding* encoding, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Text::Encoding*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER__CTOR_8_OFFSET))(this, path, append, encoding, bufferSize);
		}

		::System::Void _ctor_9(::System::String* path, ::System::Boolean append, ::System::Text::Encoding* encoding, ::System::Int32 bufferSize, ::System::Boolean checkHost)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Text::Encoding*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER__CTOR_9_OFFSET))(this, path, append, encoding, bufferSize, checkHost);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER__CCTOR_OFFSET))();
		}

		::System::Void CheckAsyncTaskInProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_CHECKASYNCTASKINPROGRESS_OFFSET))(this);
		}

		static ::System::Text::Encoding* get_UTF8NoBOM()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_GET_UTF8NOBOM_OFFSET))();
		}

		::System::Void Init(::System::IO::Stream* streamArg, ::System::Text::Encoding* encodingArg, ::System::Int32 bufferSize, ::System::Boolean shouldLeaveOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_INIT_OFFSET))(this, streamArg, encodingArg, bufferSize, shouldLeaveOpen);
		}

		static ::System::IO::Stream* CreateFile(::System::String* path, ::System::Boolean append, ::System::Boolean checkHost)
		{
			return ((::System::IO::Stream*(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_CREATEFILE_OFFSET))(path, append, checkHost);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_FLUSH_OFFSET))(this);
		}

		::System::Void Flush_1(::System::Boolean flushStream, ::System::Boolean flushEncoder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_FLUSH_1_OFFSET))(this, flushStream, flushEncoder);
		}

		::System::Void set_AutoFlush(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_SET_AUTOFLUSH_OFFSET))(this, value);
		}

		::System::Boolean get_LeaveOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_GET_LEAVEOPEN_OFFSET))(this);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_GET_ENCODING_OFFSET))(this);
		}

		::System::Void Write(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITE_OFFSET))(this, value);
		}

		::System::Void Write_1(::Il2CppArray<::System::Char>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITE_1_OFFSET))(this, buffer);
		}

		::System::Void Write_2(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITE_2_OFFSET))(this, buffer, index, count);
		}

		::System::Void Write_3(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITE_3_OFFSET))(this, value);
		}
	};
}
