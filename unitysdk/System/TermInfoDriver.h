#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ConsoleColor.h"
#include "unitysdk/System/ConsoleKeyInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TermInfoStrings.h"

namespace System { class ByteMatcher; }
namespace System { class String; }
namespace System { class TermInfoReader; }
namespace System::Collections { class Hashtable; }
namespace System::IO { class CStreamWriter; }
namespace System::IO { class StreamReader; }

#define SYSTEM_TERMINFODRIVER_ADDSTRINGMAPPING_OFFSET UNITYSDK_OFFSET(0x19562010)
#define SYSTEM_TERMINFODRIVER_ADDTOBUFFER_OFFSET UNITYSDK_OFFSET(0x1955DAA0)
#define SYSTEM_TERMINFODRIVER_ADJUSTBUFFER_OFFSET UNITYSDK_OFFSET(0x1955DD20)
#define SYSTEM_TERMINFODRIVER_CHANGECOLOR_OFFSET UNITYSDK_OFFSET(0x1955D860)
#define SYSTEM_TERMINFODRIVER_CHECKWINDOWDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x1955DB90)
#define SYSTEM_TERMINFODRIVER_CREATEKEYINFOFROMINT_OFFSET UNITYSDK_OFFSET(0x1955D410)
#define SYSTEM_TERMINFODRIVER_CREATEKEYMAP_OFFSET UNITYSDK_OFFSET(0x1955FC90)
#define SYSTEM_TERMINFODRIVER_ECHOFLUSH_OFFSET UNITYSDK_OFFSET(0x1955ED00)
#define SYSTEM_TERMINFODRIVER_ECHO_OFFSET UNITYSDK_OFFSET(0x1955EBC0)
#define SYSTEM_TERMINFODRIVER_GETCURSORPOSITION_OFFSET UNITYSDK_OFFSET(0x1955C9D0)
#define SYSTEM_TERMINFODRIVER_GETKEYFROMBUFFER_OFFSET UNITYSDK_OFFSET(0x1955DD50)
#define SYSTEM_TERMINFODRIVER_GET_WINDOWHEIGHT_OFFSET UNITYSDK_OFFSET(0x1955CBF0)
#define SYSTEM_TERMINFODRIVER_GET_WINDOWWIDTH_OFFSET UNITYSDK_OFFSET(0x1955CBC0)
#define SYSTEM_TERMINFODRIVER_INCREMENTX_OFFSET UNITYSDK_OFFSET(0x1955CB10)
#define SYSTEM_TERMINFODRIVER_INITKEYS_OFFSET UNITYSDK_OFFSET(0x1955E7A0)
#define SYSTEM_TERMINFODRIVER_INIT_OFFSET UNITYSDK_OFFSET(0x1955C190)
#define SYSTEM_TERMINFODRIVER_INPUTPENDING_OFFSET UNITYSDK_OFFSET(0x1955E9B0)
#define SYSTEM_TERMINFODRIVER_ISSPECIALKEY_1_OFFSET UNITYSDK_OFFSET(0x1955D6D0)
#define SYSTEM_TERMINFODRIVER_ISSPECIALKEY_OFFSET UNITYSDK_OFFSET(0x1955D5E0)
#define SYSTEM_TERMINFODRIVER_QUEUEECHO_OFFSET UNITYSDK_OFFSET(0x1955E9F0)
#define SYSTEM_TERMINFODRIVER_READKEYINTERNAL_OFFSET UNITYSDK_OFFSET(0x1955E4C0)
#define SYSTEM_TERMINFODRIVER_READKEY_OFFSET UNITYSDK_OFFSET(0x1955F430)
#define SYSTEM_TERMINFODRIVER_READLINE_OFFSET UNITYSDK_OFFSET(0x1955F6B0)
#define SYSTEM_TERMINFODRIVER_READTOEND_OFFSET UNITYSDK_OFFSET(0x1955FB90)
#define SYSTEM_TERMINFODRIVER_READUNTILCONDITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x1955F6C0)
#define SYSTEM_TERMINFODRIVER_READ_OFFSET UNITYSDK_OFFSET(0x1955EDE0)
#define SYSTEM_TERMINFODRIVER_RESETCOLOR_OFFSET UNITYSDK_OFFSET(0x1955FBA0)
#define SYSTEM_TERMINFODRIVER_SEARCHTERMINFO_OFFSET UNITYSDK_OFFSET(0x1955B7B0)
#define SYSTEM_TERMINFODRIVER_SETCURSORPOSITION_OFFSET UNITYSDK_OFFSET(0x1955CFF0)
#define SYSTEM_TERMINFODRIVER_SET_FOREGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x1955DA60)
#define SYSTEM_TERMINFODRIVER_TRYTERMINFODIR_OFFSET UNITYSDK_OFFSET(0x1955B5E0)
#define SYSTEM_TERMINFODRIVER_WRITECONSOLE_OFFSET UNITYSDK_OFFSET(0x1955BAC0)
#define SYSTEM_TERMINFODRIVER_WRITESPECIALKEY_1_OFFSET UNITYSDK_OFFSET(0x1955D280)
#define SYSTEM_TERMINFODRIVER_WRITESPECIALKEY_OFFSET UNITYSDK_OFFSET(0x1955CC20)
#define SYSTEM_TERMINFODRIVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19562060)
#define SYSTEM_TERMINFODRIVER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1955BC70)
#define SYSTEM_TERMINFODRIVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1955BB80)

namespace System
{
	inline static constexpr unsigned int TermInfoDriver_TypeDefinitionIndex = 411;

	class TermInfoDriver : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet__consoleColorToAnsiCode()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TermInfoDriver_TypeDefinitionIndex)->GetStaticField(0xBE0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_locations()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TermInfoDriver_TypeDefinitionIndex)->GetStaticField(0xBE8);
		}
		static ::System::Int32** StaticGet_native_terminal_size()
		{
			return (::System::Int32**)Il2CppClass::FromTypeDefinitionIndex(TermInfoDriver_TypeDefinitionIndex)->GetStaticField(0x2B0);
		}
		static ::System::Int32* StaticGet_terminal_size()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TermInfoDriver_TypeDefinitionIndex)->GetStaticField(0x2B8);
		}
		::System::ByteMatcher* rootmap; // 0x10
		::System::String* csrVisible; // 0x18
		::System::String* clear; // 0x20
		::Il2CppArray<::System::Byte>* control_characters; // 0x28
		::System::String* title; // 0x30
		::System::TermInfoReader* reader; // 0x38
		::System::String* origPair; // 0x40
		::Il2CppArray<::System::Char>* echobuf; // 0x48
		::System::Collections::Hashtable* keymap; // 0x50
		::System::String* bell; // 0x58
		::System::IO::CStreamWriter* stdout; // 0x60
		::System::String* term; // 0x68
		::System::String* setbgcolor; // 0x70
		::System::String* setfgcolor; // 0x78
		::Il2CppArray<::System::Char>* buffer; // 0x80
		::System::Object* initLock; // 0x88
		::System::String* cursorAddress; // 0x90
		::System::String* csrInvisible; // 0x98
		::System::String* keypadLocal; // 0xA0
		::System::String* titleFormat; // 0xA8
		::System::IO::StreamReader* stdin; // 0xB0
		::System::String* keypadXmit; // 0xB8
		::System::String* origColors; // 0xC0
		::System::Int32 readpos; // 0xC8
		::System::Boolean initKeys; // 0xCC
		::System::Boolean cursorVisible; // 0xCD
		::System::Boolean noGetPosition; // 0xCE
		::System::Boolean inited; // 0xCF
		::System::Int32 bufferHeight; // 0xD0
		::System::Int32 rl_startx; // 0xD4
		::System::Int32 windowWidth; // 0xD8
		::System::Int32 rl_starty; // 0xDC
		::System::Int32 cursorLeft; // 0xE0
		::System::Int32 maxColors; // 0xE4
		::System::ConsoleColor fgcolor; // 0xE8
		::System::Int32 writepos; // 0xEC
		::System::Int32 windowHeight; // 0xF0
		::System::Int32 echon; // 0xF4
		::System::Int32 cursorTop; // 0xF8
		::System::Int32 bufferWidth; // 0xFC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* term)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER__CTOR_1_OFFSET))(this, term);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER__CCTOR_OFFSET))();
		}

		static ::System::String* TryTermInfoDir(::System::String* dir, ::System::String* term)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_TRYTERMINFODIR_OFFSET))(dir, term);
		}

		static ::System::String* SearchTerminfo(::System::String* term)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_SEARCHTERMINFO_OFFSET))(term);
		}

		::System::Void WriteConsole(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_WRITECONSOLE_OFFSET))(this, str);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_INIT_OFFSET))(this);
		}

		::System::Void IncrementX()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_INCREMENTX_OFFSET))(this);
		}

		::System::Void WriteSpecialKey(::System::ConsoleKeyInfo key)
		{
			return ((::System::Void(*)(::PVOID, ::System::ConsoleKeyInfo))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_WRITESPECIALKEY_OFFSET))(this, key);
		}

		::System::Void WriteSpecialKey_1(::System::Char c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_WRITESPECIALKEY_1_OFFSET))(this, c);
		}

		::System::Boolean IsSpecialKey(::System::ConsoleKeyInfo key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ConsoleKeyInfo))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_ISSPECIALKEY_OFFSET))(this, key);
		}

		::System::Boolean IsSpecialKey_1(::System::Char c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_ISSPECIALKEY_1_OFFSET))(this, c);
		}

		::System::Void ChangeColor(::System::String* format, ::System::ConsoleColor color)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::ConsoleColor))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_CHANGECOLOR_OFFSET))(this, format, color);
		}

		::System::Void set_ForegroundColor(::System::ConsoleColor value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ConsoleColor))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_SET_FOREGROUNDCOLOR_OFFSET))(this, value);
		}

		::System::Void GetCursorPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_GETCURSORPOSITION_OFFSET))(this);
		}

		::System::Void CheckWindowDimensions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_CHECKWINDOWDIMENSIONS_OFFSET))(this);
		}

		::System::Int32 get_WindowHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_GET_WINDOWHEIGHT_OFFSET))(this);
		}

		::System::Int32 get_WindowWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_GET_WINDOWWIDTH_OFFSET))(this);
		}

		::System::Void AddToBuffer(::System::Int32 b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_ADDTOBUFFER_OFFSET))(this, b);
		}

		::System::Void AdjustBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_ADJUSTBUFFER_OFFSET))(this);
		}

		::System::ConsoleKeyInfo CreateKeyInfoFromInt(::System::Int32 n, ::System::Boolean alt)
		{
			return ((::System::ConsoleKeyInfo(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_CREATEKEYINFOFROMINT_OFFSET))(this, n, alt);
		}

		::System::Object* GetKeyFromBuffer(::System::Boolean cooked)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_GETKEYFROMBUFFER_OFFSET))(this, cooked);
		}

		::System::ConsoleKeyInfo ReadKeyInternal(::System::Boolean& fresh)
		{
			return ((::System::ConsoleKeyInfo(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_READKEYINTERNAL_OFFSET))(this, fresh);
		}

		::System::Boolean InputPending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_INPUTPENDING_OFFSET))(this);
		}

		::System::Void QueueEcho(::System::Char c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_QUEUEECHO_OFFSET))(this, c);
		}

		::System::Void Echo(::System::ConsoleKeyInfo key)
		{
			return ((::System::Void(*)(::PVOID, ::System::ConsoleKeyInfo))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_ECHO_OFFSET))(this, key);
		}

		::System::Void EchoFlush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_ECHOFLUSH_OFFSET))(this);
		}

		::System::Int32 Read(::Il2CppArray<::System::Char>* dest, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_READ_OFFSET))(this, dest, index, count);
		}

		::System::ConsoleKeyInfo ReadKey(::System::Boolean intercept)
		{
			return ((::System::ConsoleKeyInfo(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_READKEY_OFFSET))(this, intercept);
		}

		::System::String* ReadLine()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_READLINE_OFFSET))(this);
		}

		::System::String* ReadToEnd()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_READTOEND_OFFSET))(this);
		}

		::System::String* ReadUntilConditionInternal(::System::Boolean haltOnNewLine)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_READUNTILCONDITIONINTERNAL_OFFSET))(this, haltOnNewLine);
		}

		::System::Void ResetColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_RESETCOLOR_OFFSET))(this);
		}

		::System::Void SetCursorPosition(::System::Int32 left, ::System::Int32 top)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_SETCURSORPOSITION_OFFSET))(this, left, top);
		}

		::System::Void CreateKeyMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_CREATEKEYMAP_OFFSET))(this);
		}

		::System::Void InitKeys()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_INITKEYS_OFFSET))(this);
		}

		::System::Void AddStringMapping(::System::TermInfoStrings s)
		{
			return ((::System::Void(*)(::PVOID, ::System::TermInfoStrings))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_ADDSTRINGMAPPING_OFFSET))(this, s);
		}
	};
}
