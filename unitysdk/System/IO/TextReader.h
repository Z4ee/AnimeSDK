#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SYSTEM_IO_TEXTREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x18725960)
#define SYSTEM_IO_TEXTREADER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x18721F40)
#define SYSTEM_IO_TEXTREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x187259E0)
#define SYSTEM_IO_TEXTREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x18725A60)
#define SYSTEM_IO_TEXTREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x18725D10)
#define SYSTEM_IO_TEXTREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x18725C30)
#define SYSTEM_IO_TEXTREADER_READ_1_OFFSET UNITYSDK_OFFSET(0x18725A80)
#define SYSTEM_IO_TEXTREADER_READ_OFFSET UNITYSDK_OFFSET(0x18725A70)
#define SYSTEM_IO_TEXTREADER_SYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x18725F70)
#define SYSTEM_IO_TEXTREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18726020)
#define SYSTEM_IO_TEXTREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x187214D0)

namespace System::IO
{
	inline static constexpr unsigned int TextReader_TypeDefinitionIndex = 694;

	class TextReader : public ::System::MarshalByRefObject
	{
	public:
		static ::System::IO::TextReader** StaticGet_Null()
		{
			return (::System::IO::TextReader**)Il2CppClass::FromTypeDefinitionIndex(TextReader_TypeDefinitionIndex)->GetStaticField(0x7FC0);
		}
		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet__ReadDelegate()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TextReader_TypeDefinitionIndex)->GetStaticField(0x7FC8);
		}
		static ::System::Func_2<::System::Object*, ::System::String*>** StaticGet__ReadLineDelegate()
		{
			return (::System::Func_2<::System::Object*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TextReader_TypeDefinitionIndex)->GetStaticField(0x7FD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER__CCTOR_OFFSET))();
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Int32 Peek()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_PEEK_OFFSET))(this);
		}

		::System::Int32 Read()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_READ_OFFSET))(this);
		}

		::System::Int32 Read_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_READ_1_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ReadToEnd()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_READTOEND_OFFSET))(this);
		}

		::System::String* ReadLine()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_READLINE_OFFSET))(this);
		}

		static ::System::IO::TextReader* Synchronized(::System::IO::TextReader* a1)
		{
			return ((::System::IO::TextReader*(*)(::System::IO::TextReader*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_SYNCHRONIZED_OFFSET))(a1);
		}
	};
}
