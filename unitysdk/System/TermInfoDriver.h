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

#define SYSTEM_TERMINFODRIVER_ADDSTRINGMAPPING_OFFSET UNITYSDK_OFFSET(0x185EC7C0)
#define SYSTEM_TERMINFODRIVER_ADDTOBUFFER_OFFSET UNITYSDK_OFFSET(0x185E8200)
#define SYSTEM_TERMINFODRIVER_ADJUSTBUFFER_OFFSET UNITYSDK_OFFSET(0x185E8550)
#define SYSTEM_TERMINFODRIVER_CHECKWINDOWDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x185E82C0)
#define SYSTEM_TERMINFODRIVER_CREATEKEYINFOFROMINT_OFFSET UNITYSDK_OFFSET(0x185E7DB0)
#define SYSTEM_TERMINFODRIVER_CREATEKEYMAP_OFFSET UNITYSDK_OFFSET(0x185EA460)
#define SYSTEM_TERMINFODRIVER_ECHOFLUSH_OFFSET UNITYSDK_OFFSET(0x185E9420)
#define SYSTEM_TERMINFODRIVER_ECHO_OFFSET UNITYSDK_OFFSET(0x185E9310)
#define SYSTEM_TERMINFODRIVER_GETCURSORPOSITION_OFFSET UNITYSDK_OFFSET(0x185E7490)
#define SYSTEM_TERMINFODRIVER_GETKEYFROMBUFFER_OFFSET UNITYSDK_OFFSET(0x185E8580)
#define SYSTEM_TERMINFODRIVER_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x185E6970)
#define SYSTEM_TERMINFODRIVER_GET_WINDOWHEIGHT_OFFSET UNITYSDK_OFFSET(0x185E7680)
#define SYSTEM_TERMINFODRIVER_GET_WINDOWWIDTH_OFFSET UNITYSDK_OFFSET(0x185E7650)
#define SYSTEM_TERMINFODRIVER_INCREMENTX_OFFSET UNITYSDK_OFFSET(0x185E75A0)
#define SYSTEM_TERMINFODRIVER_INITKEYS_OFFSET UNITYSDK_OFFSET(0x185E8F30)
#define SYSTEM_TERMINFODRIVER_INIT_OFFSET UNITYSDK_OFFSET(0x185E6980)
#define SYSTEM_TERMINFODRIVER_INPUTPENDING_OFFSET UNITYSDK_OFFSET(0x185E9170)
#define SYSTEM_TERMINFODRIVER_ISSPECIALKEY_1_OFFSET UNITYSDK_OFFSET(0x185E8070)
#define SYSTEM_TERMINFODRIVER_ISSPECIALKEY_OFFSET UNITYSDK_OFFSET(0x185E7F80)
#define SYSTEM_TERMINFODRIVER_QUEUEECHO_OFFSET UNITYSDK_OFFSET(0x185E91B0)
#define SYSTEM_TERMINFODRIVER_READKEYINTERNAL_OFFSET UNITYSDK_OFFSET(0x185E8C90)
#define SYSTEM_TERMINFODRIVER_READKEY_OFFSET UNITYSDK_OFFSET(0x185E9C50)
#define SYSTEM_TERMINFODRIVER_READLINE_OFFSET UNITYSDK_OFFSET(0x185E9EA0)
#define SYSTEM_TERMINFODRIVER_READTOEND_OFFSET UNITYSDK_OFFSET(0x185EA450)
#define SYSTEM_TERMINFODRIVER_READUNTILCONDITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x185E9EB0)
#define SYSTEM_TERMINFODRIVER_READ_OFFSET UNITYSDK_OFFSET(0x185E94E0)
#define SYSTEM_TERMINFODRIVER_SEARCHTERMINFO_OFFSET UNITYSDK_OFFSET(0x185E5CF0)
#define SYSTEM_TERMINFODRIVER_SETCURSORPOSITION_OFFSET UNITYSDK_OFFSET(0x185E79E0)
#define SYSTEM_TERMINFODRIVER_TRYTERMINFODIR_OFFSET UNITYSDK_OFFSET(0x185E5B10)
#define SYSTEM_TERMINFODRIVER_WRITECONSOLE_OFFSET UNITYSDK_OFFSET(0x185E6040)
#define SYSTEM_TERMINFODRIVER_WRITESPECIALKEY_1_OFFSET UNITYSDK_OFFSET(0x185E7C20)
#define SYSTEM_TERMINFODRIVER_WRITESPECIALKEY_OFFSET UNITYSDK_OFFSET(0x185E76B0)
#define SYSTEM_TERMINFODRIVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x185EC910)
#define SYSTEM_TERMINFODRIVER__CTOR_OFFSET UNITYSDK_OFFSET(0x185E60E0)

namespace System
{
	inline static constexpr unsigned int TermInfoDriver_TypeDefinitionIndex = 423;

	class TermInfoDriver : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_locations()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TermInfoDriver_TypeDefinitionIndex)->GetStaticField(0x106B0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__consoleColorToAnsiCode()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TermInfoDriver_TypeDefinitionIndex)->GetStaticField(0x106B8);
		}
		static ::System::Int32* StaticGet_terminal_size()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TermInfoDriver_TypeDefinitionIndex)->GetStaticField(0x5050);
		}
		static ::System::Int32** StaticGet_native_terminal_size()
		{
			return (::System::Int32**)Il2CppClass::FromTypeDefinitionIndex(TermInfoDriver_TypeDefinitionIndex)->GetStaticField(0x5058);
		}
		::System::String* cursorAddress; // 0x10
		::System::Collections::Hashtable* keymap; // 0x18
		::System::String* bell; // 0x20
		::System::String* title; // 0x28
		::System::IO::StreamReader* stdin; // 0x30
		::System::Object* initLock; // 0x38
		::System::ByteMatcher* rootmap; // 0x40
		::System::String* keypadXmit; // 0x48
		::System::TermInfoReader* reader; // 0x50
		::Il2CppArray<::System::Char>* echobuf; // 0x58
		::System::String* term; // 0x60
		::System::IO::CStreamWriter* stdout; // 0x68
		::System::String* csrInvisible; // 0x70
		::System::String* titleFormat; // 0x78
		::Il2CppArray<::System::Char>* buffer; // 0x80
		::System::String* csrVisible; // 0x88
		::System::String* setfgcolor; // 0x90
		::System::String* setbgcolor; // 0x98
		::System::String* origPair; // 0xA0
		::System::String* keypadLocal; // 0xA8
		::System::String* origColors; // 0xB0
		::System::String* clear; // 0xB8
		::Il2CppArray<::System::Byte>* control_characters; // 0xC0
		::System::Int32 maxColors; // 0xC8
		::System::Int32 windowWidth; // 0xCC
		::System::Int32 rl_starty; // 0xD0
		::System::Boolean initKeys; // 0xD4
		::System::Boolean cursorVisible; // 0xD5
		::System::Boolean noGetPosition; // 0xD6
		::System::Boolean inited; // 0xD7
		::System::Int32 readpos; // 0xD8
		::System::Int32 bufferHeight; // 0xDC
		::System::Int32 bufferWidth; // 0xE0
		::System::Int32 cursorLeft; // 0xE4
		::System::Int32 rl_startx; // 0xE8
		::System::Int32 windowHeight; // 0xEC
		::System::ConsoleColor fgcolor; // 0xF0
		::System::Int32 echon; // 0xF4
		::System::Int32 cursorTop; // 0xF8
		::System::Int32 writepos; // 0xFC

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER__CCTOR_OFFSET))();
		}

		static ::System::String* TryTermInfoDir(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_TRYTERMINFODIR_OFFSET))(a1, a2);
		}

		static ::System::String* SearchTerminfo(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_SEARCHTERMINFO_OFFSET))(a1);
		}

		::System::Void WriteConsole(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_WRITECONSOLE_OFFSET))(this, a1);
		}

		::System::Boolean get_Initialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_GET_INITIALIZED_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_INIT_OFFSET))(this);
		}

		::System::Void IncrementX()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_INCREMENTX_OFFSET))(this);
		}

		::System::Void WriteSpecialKey(::System::ConsoleKeyInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ConsoleKeyInfo))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_WRITESPECIALKEY_OFFSET))(this, a1);
		}

		::System::Void WriteSpecialKey_1(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_WRITESPECIALKEY_1_OFFSET))(this, a1);
		}

		::System::Boolean IsSpecialKey(::System::ConsoleKeyInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ConsoleKeyInfo))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_ISSPECIALKEY_OFFSET))(this, a1);
		}

		::System::Boolean IsSpecialKey_1(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_ISSPECIALKEY_1_OFFSET))(this, a1);
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

		::System::Void AddToBuffer(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_ADDTOBUFFER_OFFSET))(this, a1);
		}

		::System::Void AdjustBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_ADJUSTBUFFER_OFFSET))(this);
		}

		::System::ConsoleKeyInfo CreateKeyInfoFromInt(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::ConsoleKeyInfo(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_CREATEKEYINFOFROMINT_OFFSET))(this, a1, a2);
		}

		::System::Object* GetKeyFromBuffer(::System::Boolean a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_GETKEYFROMBUFFER_OFFSET))(this, a1);
		}

		::System::ConsoleKeyInfo ReadKeyInternal(::System::Boolean& a1)
		{
			return ((::System::ConsoleKeyInfo(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_READKEYINTERNAL_OFFSET))(this, a1);
		}

		::System::Boolean InputPending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_INPUTPENDING_OFFSET))(this);
		}

		::System::Void QueueEcho(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_QUEUEECHO_OFFSET))(this, a1);
		}

		::System::Void Echo(::System::ConsoleKeyInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ConsoleKeyInfo))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_ECHO_OFFSET))(this, a1);
		}

		::System::Void EchoFlush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_ECHOFLUSH_OFFSET))(this);
		}

		::System::Int32 Read(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_READ_OFFSET))(this, a1, a2, a3);
		}

		::System::ConsoleKeyInfo ReadKey(::System::Boolean a1)
		{
			return ((::System::ConsoleKeyInfo(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_READKEY_OFFSET))(this, a1);
		}

		::System::String* ReadLine()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_READLINE_OFFSET))(this);
		}

		::System::String* ReadToEnd()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_READTOEND_OFFSET))(this);
		}

		::System::String* ReadUntilConditionInternal(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_READUNTILCONDITIONINTERNAL_OFFSET))(this, a1);
		}

		::System::Void SetCursorPosition(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_SETCURSORPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void CreateKeyMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_CREATEKEYMAP_OFFSET))(this);
		}

		::System::Void InitKeys()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_INITKEYS_OFFSET))(this);
		}

		::System::Void AddStringMapping(::System::TermInfoStrings a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::TermInfoStrings))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_ADDSTRINGMAPPING_OFFSET))(this, a1);
		}
	};
}
