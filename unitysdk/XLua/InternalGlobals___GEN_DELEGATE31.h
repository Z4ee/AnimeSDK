#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournPersonaRoomCard; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE31_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF54510)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE31_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF54540)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE31_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF53FB0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE31__CTOR_OFFSET UNITYSDK_OFFSET(0xFF49D50)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE31_TypeDefinitionIndex = 40448;

	class InternalGlobals___GEN_DELEGATE31 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE31__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::RPG::Client::IRogueTournPersonaRoomCard* card)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCard*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE31_INVOKE_OFFSET))(this, card);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournPersonaRoomCard* card, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCard*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE31_BEGININVOKE_OFFSET))(this, card, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE31_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
