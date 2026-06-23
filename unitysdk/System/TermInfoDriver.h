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

#define SYSTEM_TERMINFODRIVER_ADDSTRINGMAPPING_OFFSET UNITYSDK_OFFSET(0x1B9449C0)
#define SYSTEM_TERMINFODRIVER_ADDTOBUFFER_OFFSET UNITYSDK_OFFSET(0x1B940510)
#define SYSTEM_TERMINFODRIVER_ADJUSTBUFFER_OFFSET UNITYSDK_OFFSET(0x1B940790)
#define SYSTEM_TERMINFODRIVER_CHECKWINDOWDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x1B940600)
#define SYSTEM_TERMINFODRIVER_CREATEKEYINFOFROMINT_OFFSET UNITYSDK_OFFSET(0x1B9400C0)
#define SYSTEM_TERMINFODRIVER_CREATEKEYMAP_OFFSET UNITYSDK_OFFSET(0x1B942640)
#define SYSTEM_TERMINFODRIVER_ECHOFLUSH_OFFSET UNITYSDK_OFFSET(0x1B941770)
#define SYSTEM_TERMINFODRIVER_ECHO_OFFSET UNITYSDK_OFFSET(0x1B941630)
#define SYSTEM_TERMINFODRIVER_GETCURSORPOSITION_OFFSET UNITYSDK_OFFSET(0x1B93F670)
#define SYSTEM_TERMINFODRIVER_GETKEYFROMBUFFER_OFFSET UNITYSDK_OFFSET(0x1B9407C0)
#define SYSTEM_TERMINFODRIVER_GET_WINDOWHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B93F890)
#define SYSTEM_TERMINFODRIVER_GET_WINDOWWIDTH_OFFSET UNITYSDK_OFFSET(0x1B93F860)
#define SYSTEM_TERMINFODRIVER_INCREMENTX_OFFSET UNITYSDK_OFFSET(0x1B93F7B0)
#define SYSTEM_TERMINFODRIVER_INITKEYS_OFFSET UNITYSDK_OFFSET(0x1B941210)
#define SYSTEM_TERMINFODRIVER_INIT_OFFSET UNITYSDK_OFFSET(0x1B93EE20)
#define SYSTEM_TERMINFODRIVER_INPUTPENDING_OFFSET UNITYSDK_OFFSET(0x1B941420)
#define SYSTEM_TERMINFODRIVER_ISSPECIALKEY_1_OFFSET UNITYSDK_OFFSET(0x1B940380)
#define SYSTEM_TERMINFODRIVER_ISSPECIALKEY_OFFSET UNITYSDK_OFFSET(0x1B940290)
#define SYSTEM_TERMINFODRIVER_QUEUEECHO_OFFSET UNITYSDK_OFFSET(0x1B941460)
#define SYSTEM_TERMINFODRIVER_READKEYINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B940F30)
#define SYSTEM_TERMINFODRIVER_READKEY_OFFSET UNITYSDK_OFFSET(0x1B941EB0)
#define SYSTEM_TERMINFODRIVER_READLINE_OFFSET UNITYSDK_OFFSET(0x1B942140)
#define SYSTEM_TERMINFODRIVER_READTOEND_OFFSET UNITYSDK_OFFSET(0x1B942630)
#define SYSTEM_TERMINFODRIVER_READUNTILCONDITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B942150)
#define SYSTEM_TERMINFODRIVER_READ_OFFSET UNITYSDK_OFFSET(0x1B941850)
#define SYSTEM_TERMINFODRIVER_SEARCHTERMINFO_OFFSET UNITYSDK_OFFSET(0x1B93E440)
#define SYSTEM_TERMINFODRIVER_SETCURSORPOSITION_OFFSET UNITYSDK_OFFSET(0x1B93FCA0)
#define SYSTEM_TERMINFODRIVER_TRYTERMINFODIR_OFFSET UNITYSDK_OFFSET(0x1B93E270)
#define SYSTEM_TERMINFODRIVER_WRITECONSOLE_OFFSET UNITYSDK_OFFSET(0x1B93E750)
#define SYSTEM_TERMINFODRIVER_WRITESPECIALKEY_1_OFFSET UNITYSDK_OFFSET(0x1B93FF30)
#define SYSTEM_TERMINFODRIVER_WRITESPECIALKEY_OFFSET UNITYSDK_OFFSET(0x1B93F8C0)
#define SYSTEM_TERMINFODRIVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B944A10)
#define SYSTEM_TERMINFODRIVER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B93E900)
#define SYSTEM_TERMINFODRIVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B93E810)

namespace System
{
	inline static constexpr unsigned int TermInfoDriver_TypeDefinitionIndex = 411;

	class TermInfoDriver : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_locations()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TermInfoDriver_TypeDefinitionIndex)->GetStaticField(0xBE0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__consoleColorToAnsiCode()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TermInfoDriver_TypeDefinitionIndex)->GetStaticField(0xBE8);
		}
		static ::System::Int32** StaticGet_native_terminal_size()
		{
			return (::System::Int32**)Il2CppClass::FromTypeDefinitionIndex(TermInfoDriver_TypeDefinitionIndex)->GetStaticField(0x2B0);
		}
		static ::System::Int32* StaticGet_terminal_size()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TermInfoDriver_TypeDefinitionIndex)->GetStaticField(0x2B8);
		}
		::System::String* bell; // 0x10
		::Il2CppArray<::System::Byte>* control_characters; // 0x18
		::System::String* csrVisible; // 0x20
		::System::String* cursorAddress; // 0x28
		::System::String* title; // 0x30
		::System::String* titleFormat; // 0x38
		::System::String* setfgcolor; // 0x40
		::System::String* keypadLocal; // 0x48
		::System::IO::StreamReader* stdin; // 0x50
		::System::String* setbgcolor; // 0x58
		::System::String* csrInvisible; // 0x60
		::System::Collections::Hashtable* keymap; // 0x68
		::System::TermInfoReader* reader; // 0x70
		::System::String* clear; // 0x78
		::Il2CppArray<::System::Char>* buffer; // 0x80
		::System::Object* initLock; // 0x88
		::System::String* term; // 0x90
		::System::String* origPair; // 0x98
		::System::ByteMatcher* rootmap; // 0xA0
		::System::String* origColors; // 0xA8
		::Il2CppArray<::System::Char>* echobuf; // 0xB0
		::System::String* keypadXmit; // 0xB8
		::System::IO::CStreamWriter* stdout; // 0xC0
		::System::Int32 maxColors; // 0xC8
		::System::Int32 windowHeight; // 0xCC
		::System::Int32 bufferWidth; // 0xD0
		::System::Int32 cursorLeft; // 0xD4
		::System::Int32 readpos; // 0xD8
		::System::Int32 windowWidth; // 0xDC
		::System::Int32 cursorTop; // 0xE0
		::System::Int32 rl_startx; // 0xE4
		::System::Int32 writepos; // 0xE8
		::System::Boolean inited; // 0xEC
		::System::Boolean cursorVisible; // 0xED
		::System::Boolean noGetPosition; // 0xEE
		::System::Boolean initKeys; // 0xEF
		::System::Int32 bufferHeight; // 0xF0
		::System::Int32 rl_starty; // 0xF4
		::System::ConsoleColor fgcolor; // 0xF8
		::System::Int32 echon; // 0xFC

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
