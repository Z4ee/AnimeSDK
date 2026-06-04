#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/TextWriter.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoder; }
namespace System::Text { class Encoding; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_IO_STREAMWRITER_CHECKASYNCTASKINPROGRESS_OFFSET UNITYSDK_OFFSET(0x187234E0)
#define SYSTEM_IO_STREAMWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x18723FF0)
#define SYSTEM_IO_STREAMWRITER_CREATEFILE_OFFSET UNITYSDK_OFFSET(0x18723F60)
#define SYSTEM_IO_STREAMWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x187240A0)
#define SYSTEM_IO_STREAMWRITER_FLUSH_1_OFFSET UNITYSDK_OFFSET(0x18724240)
#define SYSTEM_IO_STREAMWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x187243F0)
#define SYSTEM_IO_STREAMWRITER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x18724580)
#define SYSTEM_IO_STREAMWRITER_GET_LEAVEOPEN_OFFSET UNITYSDK_OFFSET(0x18724230)
#define SYSTEM_IO_STREAMWRITER_GET_UTF8NOBOM_OFFSET UNITYSDK_OFFSET(0x18723560)
#define SYSTEM_IO_STREAMWRITER_INIT_OFFSET UNITYSDK_OFFSET(0x18723AE0)
#define SYSTEM_IO_STREAMWRITER_SET_AUTOFLUSH_OFFSET UNITYSDK_OFFSET(0x187244E0)
#define SYSTEM_IO_STREAMWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x18724670)
#define SYSTEM_IO_STREAMWRITER_WRITE_2_OFFSET UNITYSDK_OFFSET(0x18724790)
#define SYSTEM_IO_STREAMWRITER_WRITE_3_OFFSET UNITYSDK_OFFSET(0x187249B0)
#define SYSTEM_IO_STREAMWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x18724590)
#define SYSTEM_IO_STREAMWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18724AD0)
#define SYSTEM_IO_STREAMWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18723860)
#define SYSTEM_IO_STREAMWRITER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18723AA0)
#define SYSTEM_IO_STREAMWRITER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x18723AC0)
#define SYSTEM_IO_STREAMWRITER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x187238B0)
#define SYSTEM_IO_STREAMWRITER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x18723BC0)
#define SYSTEM_IO_STREAMWRITER__CTOR_6_OFFSET UNITYSDK_OFFSET(0x18723C30)
#define SYSTEM_IO_STREAMWRITER__CTOR_7_OFFSET UNITYSDK_OFFSET(0x18723C90)
#define SYSTEM_IO_STREAMWRITER__CTOR_8_OFFSET UNITYSDK_OFFSET(0x18723C10)
#define SYSTEM_IO_STREAMWRITER__CTOR_9_OFFSET UNITYSDK_OFFSET(0x18723CB0)
#define SYSTEM_IO_STREAMWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x18723680)

namespace System::IO
{
	inline static constexpr unsigned int StreamWriter_TypeDefinitionIndex = 691;

	class StreamWriter : public ::System::IO::TextWriter
	{
	public:
		static ::System::Text::Encoding** StaticGet__UTF8NoBOM()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(StreamWriter_TypeDefinitionIndex)->GetStaticField(0x7E60);
		}
		static ::System::IO::StreamWriter** StaticGet_Null()
		{
			return (::System::IO::StreamWriter**)Il2CppClass::FromTypeDefinitionIndex(StreamWriter_TypeDefinitionIndex)->GetStaticField(0x7E68);
		}
		::Il2CppArray<::System::Byte>* byteBuffer; // 0x28
		::System::Text::Encoding* encoding; // 0x30
		::System::Text::Encoder* encoder; // 0x38
		::System::Threading::Tasks::Task* _asyncWriteTask; // 0x40
		::Il2CppArray<::System::Char>* charBuffer; // 0x48
		::System::IO::Stream* stream; // 0x50
		::System::Int32 charLen; // 0x58
		::System::Boolean closable; // 0x5C
		::System::Boolean autoFlush; // 0x5D
		::System::Boolean haveWrittenPreamble; // 0x5E
		::System::Int32 charPos; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IO::Stream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::IO::Stream* a1, ::System::Text::Encoding* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::IO::Stream* a1, ::System::Text::Encoding* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER__CTOR_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_4(::System::IO::Stream* a1, ::System::Text::Encoding* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER__CTOR_4_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_5(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER__CTOR_5_OFFSET))(this, a1);
		}

		::System::Void _ctor_6(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER__CTOR_6_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_7(::System::String* a1, ::System::Boolean a2, ::System::Text::Encoding* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER__CTOR_7_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_8(::System::String* a1, ::System::Boolean a2, ::System::Text::Encoding* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Text::Encoding*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER__CTOR_8_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_9(::System::String* a1, ::System::Boolean a2, ::System::Text::Encoding* a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Text::Encoding*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER__CTOR_9_OFFSET))(this, a1, a2, a3, a4, a5);
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

		::System::Void Init(::System::IO::Stream* a1, ::System::Text::Encoding* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::IO::Stream* CreateFile(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::IO::Stream*(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_CREATEFILE_OFFSET))(a1, a2, a3);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_FLUSH_OFFSET))(this);
		}

		::System::Void Flush_1(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_FLUSH_1_OFFSET))(this, a1, a2);
		}

		::System::Void set_AutoFlush(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_SET_AUTOFLUSH_OFFSET))(this, a1);
		}

		::System::Boolean get_LeaveOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_GET_LEAVEOPEN_OFFSET))(this);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_GET_ENCODING_OFFSET))(this);
		}

		::System::Void Write(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITE_OFFSET))(this, a1);
		}

		::System::Void Write_1(::Il2CppArray<::System::Char>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITE_1_OFFSET))(this, a1);
		}

		::System::Void Write_2(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITE_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Write_3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITE_3_OFFSET))(this, a1);
		}
	};
}
