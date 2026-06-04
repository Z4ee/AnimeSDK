#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_TEXTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x18726650)
#define SYSTEM_IO_TEXTWRITER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x187266D0)
#define SYSTEM_IO_TEXTWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x187243E0)
#define SYSTEM_IO_TEXTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x18726750)
#define SYSTEM_IO_TEXTWRITER_GET_FORMATPROVIDER_OFFSET UNITYSDK_OFFSET(0x187265C0)
#define SYSTEM_IO_TEXTWRITER_GET_INITIALNEWLINE_OFFSET UNITYSDK_OFFSET(0x18726470)
#define SYSTEM_IO_TEXTWRITER_SYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x18726760)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_1_OFFSET UNITYSDK_OFFSET(0x18726CD0)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_2_OFFSET UNITYSDK_OFFSET(0x18726D00)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_3_OFFSET UNITYSDK_OFFSET(0x18726D40)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_4_OFFSET UNITYSDK_OFFSET(0x18726EB0)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_5_OFFSET UNITYSDK_OFFSET(0x18726F20)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_6_OFFSET UNITYSDK_OFFSET(0x18726FA0)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_7_OFFSET UNITYSDK_OFFSET(0x18727020)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x18726CB0)
#define SYSTEM_IO_TEXTWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x18726920)
#define SYSTEM_IO_TEXTWRITER_WRITE_2_OFFSET UNITYSDK_OFFSET(0x18726950)
#define SYSTEM_IO_TEXTWRITER_WRITE_3_OFFSET UNITYSDK_OFFSET(0x18726AC0)
#define SYSTEM_IO_TEXTWRITER_WRITE_4_OFFSET UNITYSDK_OFFSET(0x18726B30)
#define SYSTEM_IO_TEXTWRITER_WRITE_5_OFFSET UNITYSDK_OFFSET(0x18726BC0)
#define SYSTEM_IO_TEXTWRITER_WRITE_6_OFFSET UNITYSDK_OFFSET(0x18726C30)
#define SYSTEM_IO_TEXTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x18726910)
#define SYSTEM_IO_TEXTWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x187270F0)
#define SYSTEM_IO_TEXTWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18723770)
#define SYSTEM_IO_TEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x187264D0)

namespace System::IO
{
	inline static constexpr unsigned int TextWriter_TypeDefinitionIndex = 698;

	class TextWriter : public ::System::MarshalByRefObject
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet__WriteLineCharDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TextWriter_TypeDefinitionIndex)->GetStaticField(0x8030);
		}
		static ::System::Action_1<::System::Object*>** StaticGet__WriteLineCharArrayRangeDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TextWriter_TypeDefinitionIndex)->GetStaticField(0x8038);
		}
		static ::System::Action_1<::System::Object*>** StaticGet__FlushDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TextWriter_TypeDefinitionIndex)->GetStaticField(0x8040);
		}
		static ::System::Action_1<::System::Object*>** StaticGet__WriteCharArrayRangeDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TextWriter_TypeDefinitionIndex)->GetStaticField(0x8048);
		}
		static ::System::Action_1<::System::Object*>** StaticGet__WriteStringDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TextWriter_TypeDefinitionIndex)->GetStaticField(0x8050);
		}
		static ::System::IO::TextWriter** StaticGet_Null()
		{
			return (::System::IO::TextWriter**)Il2CppClass::FromTypeDefinitionIndex(TextWriter_TypeDefinitionIndex)->GetStaticField(0x8058);
		}
		static ::System::Action_1<::System::Object*>** StaticGet__WriteCharDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TextWriter_TypeDefinitionIndex)->GetStaticField(0x8060);
		}
		static ::System::Action_1<::System::Object*>** StaticGet__WriteLineStringDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TextWriter_TypeDefinitionIndex)->GetStaticField(0x8068);
		}
		::Il2CppArray<::System::Char>* CoreNewLine; // 0x18
		::System::IFormatProvider* InternalFormatProvider; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IFormatProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER__CTOR_1_OFFSET))(this, a1);
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

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_DISPOSE_1_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_FLUSH_OFFSET))(this);
		}

		static ::System::IO::TextWriter* Synchronized(::System::IO::TextWriter* a1)
		{
			return ((::System::IO::TextWriter*(*)(::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCHRONIZED_OFFSET))(a1);
		}

		::System::Void Write(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_OFFSET))(this, a1);
		}

		::System::Void Write_1(::Il2CppArray<::System::Char>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_1_OFFSET))(this, a1);
		}

		::System::Void Write_2(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Write_3(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_3_OFFSET))(this, a1);
		}

		::System::Void Write_4(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_4_OFFSET))(this, a1);
		}

		::System::Void Write_5(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_5_OFFSET))(this, a1, a2);
		}

		::System::Void Write_6(::System::String* a1, ::System::Object* a2, ::System::Object* a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_6_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_OFFSET))(this);
		}

		::System::Void WriteLine_1(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_1_OFFSET))(this, a1);
		}

		::System::Void WriteLine_2(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteLine_3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_3_OFFSET))(this, a1);
		}

		::System::Void WriteLine_4(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_4_OFFSET))(this, a1, a2);
		}

		::System::Void WriteLine_5(::System::String* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteLine_6(::System::String* a1, ::System::Object* a2, ::System::Object* a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_6_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteLine_7(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_7_OFFSET))(this, a1, a2);
		}
	};
}
