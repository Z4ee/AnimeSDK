#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_TEXTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1DF35CA0)
#define SYSTEM_IO_TEXTWRITER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1DF35D60)
#define SYSTEM_IO_TEXTWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DF35D50)
#define SYSTEM_IO_TEXTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1DF35E10)
#define SYSTEM_IO_TEXTWRITER_GET_FORMATPROVIDER_OFFSET UNITYSDK_OFFSET(0x1DF35BF0)
#define SYSTEM_IO_TEXTWRITER_GET_INITIALNEWLINE_OFFSET UNITYSDK_OFFSET(0x1DF358E0)
#define SYSTEM_IO_TEXTWRITER_GET_NEWLINE_OFFSET UNITYSDK_OFFSET(0x1DF35E20)
#define SYSTEM_IO_TEXTWRITER_SET_NEWLINE_OFFSET UNITYSDK_OFFSET(0x1DF35ED0)
#define SYSTEM_IO_TEXTWRITER_SYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1DF36010)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_10_OFFSET UNITYSDK_OFFSET(0x1DF36A40)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_11_OFFSET UNITYSDK_OFFSET(0x1DF36C40)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_12_OFFSET UNITYSDK_OFFSET(0x1DF36DA0)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_13_OFFSET UNITYSDK_OFFSET(0x1DF36E10)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_14_OFFSET UNITYSDK_OFFSET(0x1DF36E90)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_1_OFFSET UNITYSDK_OFFSET(0x1DF36880)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_2_OFFSET UNITYSDK_OFFSET(0x1DF368B0)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_3_OFFSET UNITYSDK_OFFSET(0x1DF368E0)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_4_OFFSET UNITYSDK_OFFSET(0x1DF36920)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_5_OFFSET UNITYSDK_OFFSET(0x1DF36950)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_6_OFFSET UNITYSDK_OFFSET(0x1DF36980)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_7_OFFSET UNITYSDK_OFFSET(0x1DF369B0)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_8_OFFSET UNITYSDK_OFFSET(0x1DF369E0)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_9_OFFSET UNITYSDK_OFFSET(0x1DF36A10)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x1DF36860)
#define SYSTEM_IO_TEXTWRITER_WRITE_10_OFFSET UNITYSDK_OFFSET(0x1DF36560)
#define SYSTEM_IO_TEXTWRITER_WRITE_11_OFFSET UNITYSDK_OFFSET(0x1DF366A0)
#define SYSTEM_IO_TEXTWRITER_WRITE_12_OFFSET UNITYSDK_OFFSET(0x1DF36710)
#define SYSTEM_IO_TEXTWRITER_WRITE_13_OFFSET UNITYSDK_OFFSET(0x1DF36790)
#define SYSTEM_IO_TEXTWRITER_WRITE_14_OFFSET UNITYSDK_OFFSET(0x1DF36810)
#define SYSTEM_IO_TEXTWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1DF36110)
#define SYSTEM_IO_TEXTWRITER_WRITE_2_OFFSET UNITYSDK_OFFSET(0x1DF36140)
#define SYSTEM_IO_TEXTWRITER_WRITE_3_OFFSET UNITYSDK_OFFSET(0x1DF362C0)
#define SYSTEM_IO_TEXTWRITER_WRITE_4_OFFSET UNITYSDK_OFFSET(0x1DF36320)
#define SYSTEM_IO_TEXTWRITER_WRITE_5_OFFSET UNITYSDK_OFFSET(0x1DF36370)
#define SYSTEM_IO_TEXTWRITER_WRITE_6_OFFSET UNITYSDK_OFFSET(0x1DF363C0)
#define SYSTEM_IO_TEXTWRITER_WRITE_7_OFFSET UNITYSDK_OFFSET(0x1DF36410)
#define SYSTEM_IO_TEXTWRITER_WRITE_8_OFFSET UNITYSDK_OFFSET(0x1DF36460)
#define SYSTEM_IO_TEXTWRITER_WRITE_9_OFFSET UNITYSDK_OFFSET(0x1DF364B0)
#define SYSTEM_IO_TEXTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x1DF36100)
#define SYSTEM_IO_TEXTWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF36EE0)
#define SYSTEM_IO_TEXTWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF35A90)
#define SYSTEM_IO_TEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF35940)

namespace System::IO
{
	inline static constexpr unsigned int TextWriter_TypeDefinitionIndex = 667;

	class TextWriter : public ::System::MarshalByRefObject
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet__FlushDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TextWriter_TypeDefinitionIndex)->GetStaticField(0x11F0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet__WriteCharDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TextWriter_TypeDefinitionIndex)->GetStaticField(0x11F8);
		}
		static ::System::Action_1<::System::Object*>** StaticGet__WriteStringDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TextWriter_TypeDefinitionIndex)->GetStaticField(0x1200);
		}
		static ::System::Action_1<::System::Object*>** StaticGet__WriteCharArrayRangeDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TextWriter_TypeDefinitionIndex)->GetStaticField(0x1208);
		}
		static ::System::Action_1<::System::Object*>** StaticGet__WriteLineCharArrayRangeDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TextWriter_TypeDefinitionIndex)->GetStaticField(0x1210);
		}
		static ::System::Action_1<::System::Object*>** StaticGet__WriteLineStringDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TextWriter_TypeDefinitionIndex)->GetStaticField(0x1218);
		}
		static ::System::IO::TextWriter** StaticGet_Null()
		{
			return (::System::IO::TextWriter**)Il2CppClass::FromTypeDefinitionIndex(TextWriter_TypeDefinitionIndex)->GetStaticField(0x1220);
		}
		static ::System::Action_1<::System::Object*>** StaticGet__WriteLineCharDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TextWriter_TypeDefinitionIndex)->GetStaticField(0x1228);
		}
		::Il2CppArray<::System::Char>* CoreNewLine; // 0x18
		::System::IFormatProvider* InternalFormatProvider; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IFormatProvider* formatProvider)
		{
			return ((::System::Void(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER__CTOR_1_OFFSET))(this, formatProvider);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER__CCTOR_OFFSET))();
		}

		static ::System::String* get_InitialNewLine()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_GET_INITIALNEWLINE_OFFSET))();
		}

		::System::IFormatProvider* get_FormatProvider()
		{
			return ((::System::IFormatProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_GET_FORMATPROVIDER_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_DISPOSE_1_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_FLUSH_OFFSET))(this);
		}

		::System::String* get_NewLine()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_GET_NEWLINE_OFFSET))(this);
		}

		::System::Void set_NewLine(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SET_NEWLINE_OFFSET))(this, value);
		}

		static ::System::IO::TextWriter* Synchronized(::System::IO::TextWriter* writer)
		{
			return ((::System::IO::TextWriter*(*)(::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCHRONIZED_OFFSET))(writer);
		}

		::System::Void Write(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_OFFSET))(this, value);
		}

		::System::Void Write_1(::Il2CppArray<::System::Char>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_1_OFFSET))(this, buffer);
		}

		::System::Void Write_2(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_2_OFFSET))(this, buffer, index, count);
		}

		::System::Void Write_3(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_3_OFFSET))(this, value);
		}

		::System::Void Write_4(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_4_OFFSET))(this, value);
		}

		::System::Void Write_5(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_5_OFFSET))(this, value);
		}

		::System::Void Write_6(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_6_OFFSET))(this, value);
		}

		::System::Void Write_7(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_7_OFFSET))(this, value);
		}

		::System::Void Write_8(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_8_OFFSET))(this, value);
		}

		::System::Void Write_9(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_9_OFFSET))(this, value);
		}

		::System::Void Write_10(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_10_OFFSET))(this, value);
		}

		::System::Void Write_11(::System::String* format, ::System::Object* arg0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_11_OFFSET))(this, format, arg0);
		}

		::System::Void Write_12(::System::String* format, ::System::Object* arg0, ::System::Object* arg1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_12_OFFSET))(this, format, arg0, arg1);
		}

		::System::Void Write_13(::System::String* format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_13_OFFSET))(this, format, arg0, arg1, arg2);
		}

		::System::Void Write_14(::System::String* format, ::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_14_OFFSET))(this, format, arg);
		}

		::System::Void WriteLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_OFFSET))(this);
		}

		::System::Void WriteLine_1(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_1_OFFSET))(this, value);
		}

		::System::Void WriteLine_2(::Il2CppArray<::System::Char>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_2_OFFSET))(this, buffer);
		}

		::System::Void WriteLine_3(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_3_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteLine_4(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_4_OFFSET))(this, value);
		}

		::System::Void WriteLine_5(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_5_OFFSET))(this, value);
		}

		::System::Void WriteLine_6(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_6_OFFSET))(this, value);
		}

		::System::Void WriteLine_7(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_7_OFFSET))(this, value);
		}

		::System::Void WriteLine_8(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_8_OFFSET))(this, value);
		}

		::System::Void WriteLine_9(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_9_OFFSET))(this, value);
		}

		::System::Void WriteLine_10(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_10_OFFSET))(this, value);
		}

		::System::Void WriteLine_11(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_11_OFFSET))(this, value);
		}

		::System::Void WriteLine_12(::System::String* format, ::System::Object* arg0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_12_OFFSET))(this, format, arg0);
		}

		::System::Void WriteLine_13(::System::String* format, ::System::Object* arg0, ::System::Object* arg1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_13_OFFSET))(this, format, arg0, arg1);
		}

		::System::Void WriteLine_14(::System::String* format, ::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_14_OFFSET))(this, format, arg);
		}
	};
}
