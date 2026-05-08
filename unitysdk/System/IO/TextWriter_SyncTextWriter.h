#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/TextWriter.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x18B985F0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B98620)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x18B98650)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x18B98530)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_GET_FORMATPROVIDER_OFFSET UNITYSDK_OFFSET(0x18B98560)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_GET_NEWLINE_OFFSET UNITYSDK_OFFSET(0x18B98590)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_SET_NEWLINE_OFFSET UNITYSDK_OFFSET(0x18B985C0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_10_OFFSET UNITYSDK_OFFSET(0x18B98B40)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_11_OFFSET UNITYSDK_OFFSET(0x18B98B70)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_12_OFFSET UNITYSDK_OFFSET(0x18B98BA0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_13_OFFSET UNITYSDK_OFFSET(0x18B98BD0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_14_OFFSET UNITYSDK_OFFSET(0x18B98C00)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_1_OFFSET UNITYSDK_OFFSET(0x18B98990)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_2_OFFSET UNITYSDK_OFFSET(0x18B989C0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_3_OFFSET UNITYSDK_OFFSET(0x18B989F0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_4_OFFSET UNITYSDK_OFFSET(0x18B98A20)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_5_OFFSET UNITYSDK_OFFSET(0x18B98A50)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_6_OFFSET UNITYSDK_OFFSET(0x18B98A80)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_7_OFFSET UNITYSDK_OFFSET(0x18B98AB0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_8_OFFSET UNITYSDK_OFFSET(0x18B98AE0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_9_OFFSET UNITYSDK_OFFSET(0x18B98B10)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x18B98960)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_10_OFFSET UNITYSDK_OFFSET(0x18B98860)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_11_OFFSET UNITYSDK_OFFSET(0x18B98890)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_12_OFFSET UNITYSDK_OFFSET(0x18B988C0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_13_OFFSET UNITYSDK_OFFSET(0x18B988F0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_14_OFFSET UNITYSDK_OFFSET(0x18B98930)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x18B986B0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_2_OFFSET UNITYSDK_OFFSET(0x18B986E0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_3_OFFSET UNITYSDK_OFFSET(0x18B98710)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_4_OFFSET UNITYSDK_OFFSET(0x18B98740)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_5_OFFSET UNITYSDK_OFFSET(0x18B98770)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_6_OFFSET UNITYSDK_OFFSET(0x18B987A0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_7_OFFSET UNITYSDK_OFFSET(0x18B987D0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_8_OFFSET UNITYSDK_OFFSET(0x18B98800)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_9_OFFSET UNITYSDK_OFFSET(0x18B98830)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x18B98680)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x18B984C0)

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
