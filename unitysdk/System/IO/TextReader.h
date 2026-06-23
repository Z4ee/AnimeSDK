#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SYSTEM_IO_TEXTREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1C6FACB0)
#define SYSTEM_IO_TEXTREADER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C6FAE10)
#define SYSTEM_IO_TEXTREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C6FAD60)
#define SYSTEM_IO_TEXTREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x1C6FAE20)
#define SYSTEM_IO_TEXTREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x1C6FB100)
#define SYSTEM_IO_TEXTREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x1C6FAFF0)
#define SYSTEM_IO_TEXTREADER_READ_1_OFFSET UNITYSDK_OFFSET(0x1C6FAE40)
#define SYSTEM_IO_TEXTREADER_READ_OFFSET UNITYSDK_OFFSET(0x1C6FAE30)
#define SYSTEM_IO_TEXTREADER_SYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1C6FB230)
#define SYSTEM_IO_TEXTREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6FB300)
#define SYSTEM_IO_TEXTREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6FACA0)

namespace System::IO
{
	inline static constexpr unsigned int TextReader_TypeDefinitionIndex = 663;

	class TextReader : public ::System::MarshalByRefObject
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet__ReadDelegate()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TextReader_TypeDefinitionIndex)->GetStaticField(0x180);
		}
		static ::System::Func_2<::System::Object*, ::System::String*>** StaticGet__ReadLineDelegate()
		{
			return (::System::Func_2<::System::Object*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TextReader_TypeDefinitionIndex)->GetStaticField(0x188);
		}
		static ::System::IO::TextReader** StaticGet_Null()
		{
			return (::System::IO::TextReader**)Il2CppClass::FromTypeDefinitionIndex(TextReader_TypeDefinitionIndex)->GetStaticField(0x190);
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

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Int32 Peek()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_PEEK_OFFSET))(this);
		}

		::System::Int32 Read()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_READ_OFFSET))(this);
		}

		::System::Int32 Read_1(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_READ_1_OFFSET))(this, buffer, index, count);
		}

		::System::String* ReadToEnd()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_READTOEND_OFFSET))(this);
		}

		::System::String* ReadLine()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_READLINE_OFFSET))(this);
		}

		static ::System::IO::TextReader* Synchronized(::System::IO::TextReader* reader)
		{
			return ((::System::IO::TextReader*(*)(::System::IO::TextReader*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_SYNCHRONIZED_OFFSET))(reader);
		}
	};
}
