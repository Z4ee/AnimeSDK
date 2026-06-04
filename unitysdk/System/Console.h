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

#define SYSTEM_CONSOLE_DOCONSOLECANCELEVENT_OFFSET UNITYSDK_OFFSET(0x18661580)
#define SYSTEM_CONSOLE_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x18660FD0)
#define SYSTEM_CONSOLE_GET_INPUTENCODING_OFFSET UNITYSDK_OFFSET(0x18661330)
#define SYSTEM_CONSOLE_GET_OUTPUTENCODING_OFFSET UNITYSDK_OFFSET(0x18661360)
#define SYSTEM_CONSOLE_GET_OUT_OFFSET UNITYSDK_OFFSET(0x18661000)
#define SYSTEM_CONSOLE_OPENSTANDARDERROR_OFFSET UNITYSDK_OFFSET(0x18660F80)
#define SYSTEM_CONSOLE_OPENSTANDARDINPUT_OFFSET UNITYSDK_OFFSET(0x18660EE0)
#define SYSTEM_CONSOLE_OPENSTANDARDOUTPUT_OFFSET UNITYSDK_OFFSET(0x18660F30)
#define SYSTEM_CONSOLE_OPEN_OFFSET UNITYSDK_OFFSET(0x18661030)
#define SYSTEM_CONSOLE_READKEY_1_OFFSET UNITYSDK_OFFSET(0x18661400)
#define SYSTEM_CONSOLE_READKEY_OFFSET UNITYSDK_OFFSET(0x18661390)
#define SYSTEM_CONSOLE_SETOUT_OFFSET UNITYSDK_OFFSET(0x18661130)
#define SYSTEM_CONSOLE_SETUPSTREAMS_OFFSET UNITYSDK_OFFSET(0x186607B0)
#define SYSTEM_CONSOLE_WRITELINE_1_OFFSET UNITYSDK_OFFSET(0x186612A0)
#define SYSTEM_CONSOLE_WRITELINE_OFFSET UNITYSDK_OFFSET(0x18661230)
#define SYSTEM_CONSOLE_WRITE_OFFSET UNITYSDK_OFFSET(0x186611C0)
#define SYSTEM_CONSOLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18660560)

namespace System
{
	inline static constexpr unsigned int Console_TypeDefinitionIndex = 379;

	class Console : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_outputEncoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(Console_TypeDefinitionIndex)->GetStaticField(0x32E0);
		}
		static ::System::ConsoleCancelEventHandler** StaticGet_cancel_event()
		{
			return (::System::ConsoleCancelEventHandler**)Il2CppClass::FromTypeDefinitionIndex(Console_TypeDefinitionIndex)->GetStaticField(0x32E8);
		}
		static ::System::Console_InternalCancelHandler** StaticGet_cancel_handler()
		{
			return (::System::Console_InternalCancelHandler**)Il2CppClass::FromTypeDefinitionIndex(Console_TypeDefinitionIndex)->GetStaticField(0x32F0);
		}
		static ::System::IO::TextWriter** StaticGet_stdout()
		{
			return (::System::IO::TextWriter**)Il2CppClass::FromTypeDefinitionIndex(Console_TypeDefinitionIndex)->GetStaticField(0x32F8);
		}
		static ::System::Text::Encoding** StaticGet_inputEncoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(Console_TypeDefinitionIndex)->GetStaticField(0x3300);
		}
		static ::System::IO::TextReader** StaticGet_stdin()
		{
			return (::System::IO::TextReader**)Il2CppClass::FromTypeDefinitionIndex(Console_TypeDefinitionIndex)->GetStaticField(0x3308);
		}
		static ::System::IO::TextWriter** StaticGet_stderr()
		{
			return (::System::IO::TextWriter**)Il2CppClass::FromTypeDefinitionIndex(Console_TypeDefinitionIndex)->GetStaticField(0x3310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE__CCTOR_OFFSET))();
		}

		static ::System::Void SetupStreams(::System::Text::Encoding* a1, ::System::Text::Encoding* a2)
		{
			return ((::System::Void(*)(::System::Text::Encoding*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_SETUPSTREAMS_OFFSET))(a1, a2);
		}

		static ::System::IO::TextWriter* get_Error()
		{
			return ((::System::IO::TextWriter*(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_GET_ERROR_OFFSET))();
		}

		static ::System::IO::TextWriter* get_Out()
		{
			return ((::System::IO::TextWriter*(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_GET_OUT_OFFSET))();
		}

		static ::System::IO::Stream* Open(::System::IntPtr a1, ::System::IO::FileAccess a2, ::System::Int32 a3)
		{
			return ((::System::IO::Stream*(*)(::System::IntPtr, ::System::IO::FileAccess, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_OPEN_OFFSET))(a1, a2, a3);
		}

		static ::System::IO::Stream* OpenStandardError(::System::Int32 a1)
		{
			return ((::System::IO::Stream*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_OPENSTANDARDERROR_OFFSET))(a1);
		}

		static ::System::IO::Stream* OpenStandardInput(::System::Int32 a1)
		{
			return ((::System::IO::Stream*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_OPENSTANDARDINPUT_OFFSET))(a1);
		}

		static ::System::IO::Stream* OpenStandardOutput(::System::Int32 a1)
		{
			return ((::System::IO::Stream*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_OPENSTANDARDOUTPUT_OFFSET))(a1);
		}

		static ::System::Void SetOut(::System::IO::TextWriter* a1)
		{
			return ((::System::Void(*)(::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_SETOUT_OFFSET))(a1);
		}

		static ::System::Void Write(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WRITE_OFFSET))(a1, a2);
		}

		static ::System::Void WriteLine(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WRITELINE_OFFSET))(a1);
		}

		static ::System::Void WriteLine_1(::System::String* a1, ::System::Object* a2, ::System::Object* a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WRITELINE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Text::Encoding* get_InputEncoding()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_GET_INPUTENCODING_OFFSET))();
		}

		static ::System::Text::Encoding* get_OutputEncoding()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_GET_OUTPUTENCODING_OFFSET))();
		}

		static ::System::ConsoleKeyInfo ReadKey()
		{
			return ((::System::ConsoleKeyInfo(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_READKEY_OFFSET))();
		}

		static ::System::ConsoleKeyInfo ReadKey_1(::System::Boolean a1)
		{
			return ((::System::ConsoleKeyInfo(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_READKEY_1_OFFSET))(a1);
		}

		static ::System::Void DoConsoleCancelEvent()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_DOCONSOLECANCELEVENT_OFFSET))();
		}
	};
}
