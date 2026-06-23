#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ConsoleKeyInfo.h"
#include "unitysdk/System/IO/FileAccess.h"
#include "unitysdk/System/Object.h"

namespace System { class ConsoleCancelEventHandler; }
namespace System { class Console_InternalCancelHandler; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::IO { class TextReader; }
namespace System::IO { class TextWriter; }
namespace System::Text { class Encoding; }

#define SYSTEM_CONSOLE_DOCONSOLECANCELEVENT_OFFSET UNITYSDK_OFFSET(0x1AE3CFC0)
#define SYSTEM_CONSOLE_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1AE3CA40)
#define SYSTEM_CONSOLE_OPENSTANDARDERROR_OFFSET UNITYSDK_OFFSET(0x1AE3C9E0)
#define SYSTEM_CONSOLE_OPENSTANDARDINPUT_OFFSET UNITYSDK_OFFSET(0x1AE3C920)
#define SYSTEM_CONSOLE_OPENSTANDARDOUTPUT_OFFSET UNITYSDK_OFFSET(0x1AE3C980)
#define SYSTEM_CONSOLE_OPEN_OFFSET UNITYSDK_OFFSET(0x1AE3CAA0)
#define SYSTEM_CONSOLE_READKEY_1_OFFSET UNITYSDK_OFFSET(0x1AE3CF40)
#define SYSTEM_CONSOLE_READKEY_OFFSET UNITYSDK_OFFSET(0x1AE3CE80)
#define SYSTEM_CONSOLE_SETOUT_OFFSET UNITYSDK_OFFSET(0x1AE3CBA0)
#define SYSTEM_CONSOLE_SETUPSTREAMS_OFFSET UNITYSDK_OFFSET(0x1AE3C4C0)
#define SYSTEM_CONSOLE_WRITELINE_1_OFFSET UNITYSDK_OFFSET(0x1AE3CD50)
#define SYSTEM_CONSOLE_WRITELINE_2_OFFSET UNITYSDK_OFFSET(0x1AE3CDE0)
#define SYSTEM_CONSOLE_WRITELINE_OFFSET UNITYSDK_OFFSET(0x1AE3CCC0)
#define SYSTEM_CONSOLE_WRITE_OFFSET UNITYSDK_OFFSET(0x1AE3CC30)
#define SYSTEM_CONSOLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE3C3B0)

namespace System
{
	inline static constexpr unsigned int Console_TypeDefinitionIndex = 368;

	class Console : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_outputEncoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(Console_TypeDefinitionIndex)->GetStaticField(0xBF0);
		}
		static ::System::IO::TextReader** StaticGet_stdin()
		{
			return (::System::IO::TextReader**)Il2CppClass::FromTypeDefinitionIndex(Console_TypeDefinitionIndex)->GetStaticField(0xBF8);
		}
		static ::System::IO::TextWriter** StaticGet_stdout()
		{
			return (::System::IO::TextWriter**)Il2CppClass::FromTypeDefinitionIndex(Console_TypeDefinitionIndex)->GetStaticField(0xC00);
		}
		static ::System::ConsoleCancelEventHandler** StaticGet_cancel_event()
		{
			return (::System::ConsoleCancelEventHandler**)Il2CppClass::FromTypeDefinitionIndex(Console_TypeDefinitionIndex)->GetStaticField(0xC08);
		}
		static ::System::Console_InternalCancelHandler** StaticGet_cancel_handler()
		{
			return (::System::Console_InternalCancelHandler**)Il2CppClass::FromTypeDefinitionIndex(Console_TypeDefinitionIndex)->GetStaticField(0xC10);
		}
		static ::System::Text::Encoding** StaticGet_inputEncoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(Console_TypeDefinitionIndex)->GetStaticField(0xC18);
		}
		static ::System::IO::TextWriter** StaticGet_stderr()
		{
			return (::System::IO::TextWriter**)Il2CppClass::FromTypeDefinitionIndex(Console_TypeDefinitionIndex)->GetStaticField(0xC20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE__CCTOR_OFFSET))();
		}

		static ::System::Void SetupStreams(::System::Text::Encoding* inputEncoding, ::System::Text::Encoding* outputEncoding)
		{
			return ((::System::Void(*)(::System::Text::Encoding*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_SETUPSTREAMS_OFFSET))(inputEncoding, outputEncoding);
		}

		static ::System::IO::TextWriter* get_Error()
		{
			return ((::System::IO::TextWriter*(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_GET_ERROR_OFFSET))();
		}

		static ::System::IO::Stream* Open(::System::IntPtr handle, ::System::IO::FileAccess access, ::System::Int32 bufferSize)
		{
			return ((::System::IO::Stream*(*)(::System::IntPtr, ::System::IO::FileAccess, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_OPEN_OFFSET))(handle, access, bufferSize);
		}

		static ::System::IO::Stream* OpenStandardError(::System::Int32 bufferSize)
		{
			return ((::System::IO::Stream*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_OPENSTANDARDERROR_OFFSET))(bufferSize);
		}

		static ::System::IO::Stream* OpenStandardInput(::System::Int32 bufferSize)
		{
			return ((::System::IO::Stream*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_OPENSTANDARDINPUT_OFFSET))(bufferSize);
		}

		static ::System::IO::Stream* OpenStandardOutput(::System::Int32 bufferSize)
		{
			return ((::System::IO::Stream*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_OPENSTANDARDOUTPUT_OFFSET))(bufferSize);
		}

		static ::System::Void SetOut(::System::IO::TextWriter* newOut)
		{
			return ((::System::Void(*)(::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_SETOUT_OFFSET))(newOut);
		}

		static ::System::Void Write(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WRITE_OFFSET))(value);
		}

		static ::System::Void WriteLine(::System::Object* value)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WRITELINE_OFFSET))(value);
		}

		static ::System::Void WriteLine_1(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WRITELINE_1_OFFSET))(value);
		}

		static ::System::Void WriteLine_2(::System::String* format, ::System::Object* arg0)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WRITELINE_2_OFFSET))(format, arg0);
		}

		static ::System::ConsoleKeyInfo ReadKey()
		{
			return ((::System::ConsoleKeyInfo(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_READKEY_OFFSET))();
		}

		static ::System::ConsoleKeyInfo ReadKey_1(::System::Boolean intercept)
		{
			return ((::System::ConsoleKeyInfo(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_READKEY_1_OFFSET))(intercept);
		}

		static ::System::Void DoConsoleCancelEvent()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_DOCONSOLECANCELEVENT_OFFSET))();
		}
	};
}
