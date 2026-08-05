#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/TextWriter.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1C6D3FA0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C6D3FD0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1C6D4000)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x1C6D3EE0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_GET_FORMATPROVIDER_OFFSET UNITYSDK_OFFSET(0x1C6D3F10)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_GET_NEWLINE_OFFSET UNITYSDK_OFFSET(0x1C6D3F40)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_SET_NEWLINE_OFFSET UNITYSDK_OFFSET(0x1C6D3F70)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_10_OFFSET UNITYSDK_OFFSET(0x1C6D44F0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_11_OFFSET UNITYSDK_OFFSET(0x1C6D4520)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_12_OFFSET UNITYSDK_OFFSET(0x1C6D4550)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_13_OFFSET UNITYSDK_OFFSET(0x1C6D4580)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_14_OFFSET UNITYSDK_OFFSET(0x1C6D45B0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_1_OFFSET UNITYSDK_OFFSET(0x1C6D4340)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_2_OFFSET UNITYSDK_OFFSET(0x1C6D4370)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_3_OFFSET UNITYSDK_OFFSET(0x1C6D43A0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_4_OFFSET UNITYSDK_OFFSET(0x1C6D43D0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_5_OFFSET UNITYSDK_OFFSET(0x1C6D4400)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_6_OFFSET UNITYSDK_OFFSET(0x1C6D4430)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_7_OFFSET UNITYSDK_OFFSET(0x1C6D4460)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_8_OFFSET UNITYSDK_OFFSET(0x1C6D4490)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_9_OFFSET UNITYSDK_OFFSET(0x1C6D44C0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x1C6D4310)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_10_OFFSET UNITYSDK_OFFSET(0x1C6D4210)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_11_OFFSET UNITYSDK_OFFSET(0x1C6D4240)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_12_OFFSET UNITYSDK_OFFSET(0x1C6D4270)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_13_OFFSET UNITYSDK_OFFSET(0x1C6D42A0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_14_OFFSET UNITYSDK_OFFSET(0x1C6D42E0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1C6D4060)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_2_OFFSET UNITYSDK_OFFSET(0x1C6D4090)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_3_OFFSET UNITYSDK_OFFSET(0x1C6D40C0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_4_OFFSET UNITYSDK_OFFSET(0x1C6D40F0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_5_OFFSET UNITYSDK_OFFSET(0x1C6D4120)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_6_OFFSET UNITYSDK_OFFSET(0x1C6D4150)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_7_OFFSET UNITYSDK_OFFSET(0x1C6D4180)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_8_OFFSET UNITYSDK_OFFSET(0x1C6D41B0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_9_OFFSET UNITYSDK_OFFSET(0x1C6D41E0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x1C6D4030)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D3E70)

namespace System::IO
{
	inline static constexpr unsigned int TextWriter_SyncTextWriter_TypeDefinitionIndex = 669;

	class TextWriter_SyncTextWriter : public ::System::IO::TextWriter
	{
	public:
		::System::IO::TextWriter* _out; // 0x28

		::System::Void _ctor(::System::IO::TextWriter* t)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER__CTOR_OFFSET))(this, t);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_GET_ENCODING_OFFSET))(this);
		}

		::System::IFormatProvider* get_FormatProvider()
		{
			return ((::System::IFormatProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_GET_FORMATPROVIDER_OFFSET))(this);
		}

		::System::String* get_NewLine()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_GET_NEWLINE_OFFSET))(this);
		}

		::System::Void set_NewLine(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_SET_NEWLINE_OFFSET))(this, value);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_FLUSH_OFFSET))(this);
		}

		::System::Void Write(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_OFFSET))(this, value);
		}

		::System::Void Write_1(::Il2CppArray<::System::Char>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_1_OFFSET))(this, buffer);
		}

		::System::Void Write_2(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_2_OFFSET))(this, buffer, index, count);
		}

		::System::Void Write_3(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_3_OFFSET))(this, value);
		}

		::System::Void Write_4(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_4_OFFSET))(this, value);
		}

		::System::Void Write_5(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_5_OFFSET))(this, value);
		}

		::System::Void Write_6(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_6_OFFSET))(this, value);
		}

		::System::Void Write_7(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_7_OFFSET))(this, value);
		}

		::System::Void Write_8(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_8_OFFSET))(this, value);
		}

		::System::Void Write_9(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_9_OFFSET))(this, value);
		}

		::System::Void Write_10(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_10_OFFSET))(this, value);
		}

		::System::Void Write_11(::System::String* format, ::System::Object* arg0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_11_OFFSET))(this, format, arg0);
		}

		::System::Void Write_12(::System::String* format, ::System::Object* arg0, ::System::Object* arg1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_12_OFFSET))(this, format, arg0, arg1);
		}

		::System::Void Write_13(::System::String* format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_13_OFFSET))(this, format, arg0, arg1, arg2);
		}

		::System::Void Write_14(::System::String* format, ::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_14_OFFSET))(this, format, arg);
		}

		::System::Void WriteLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_OFFSET))(this);
		}

		::System::Void WriteLine_1(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_1_OFFSET))(this, value);
		}

		::System::Void WriteLine_2(::Il2CppArray<::System::Char>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_2_OFFSET))(this, buffer);
		}

		::System::Void WriteLine_3(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_3_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteLine_4(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_4_OFFSET))(this, value);
		}

		::System::Void WriteLine_5(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_5_OFFSET))(this, value);
		}

		::System::Void WriteLine_6(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_6_OFFSET))(this, value);
		}

		::System::Void WriteLine_7(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_7_OFFSET))(this, value);
		}

		::System::Void WriteLine_8(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_8_OFFSET))(this, value);
		}

		::System::Void WriteLine_9(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_9_OFFSET))(this, value);
		}

		::System::Void WriteLine_10(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_10_OFFSET))(this, value);
		}

		::System::Void WriteLine_11(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_11_OFFSET))(this, value);
		}

		::System::Void WriteLine_12(::System::String* format, ::System::Object* arg0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_12_OFFSET))(this, format, arg0);
		}

		::System::Void WriteLine_13(::System::String* format, ::System::Object* arg0, ::System::Object* arg1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_13_OFFSET))(this, format, arg0, arg1);
		}

		::System::Void WriteLine_14(::System::String* format, ::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_14_OFFSET))(this, format, arg);
		}
	};
}
