#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournPersonaRoomCard; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE31_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11CE9F30)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE31_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11CE9F60)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE31_INVOKE_OFFSET UNITYSDK_OFFSET(0x11CE9F20)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE31__CTOR_OFFSET UNITYSDK_OFFSET(0x11CE9E30)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE31_TypeDefinitionIndex = 47912;

	class InternalGlobals___GEN_DELEGATE31 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE31__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Invoke(::RPG::Client::IRogueTournPersonaRoomCard* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCard*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE31_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournPersonaRoomCard* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCard*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE31_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE31_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
