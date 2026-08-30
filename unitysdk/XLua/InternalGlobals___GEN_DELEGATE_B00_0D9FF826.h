#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournGameLevelLayerLinear; }
namespace RPG::Client { class IRogueTournGameLevelRoomLinear; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0D9FF826_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12B20850)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0D9FF826_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12B20880)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0D9FF826_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B20840)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0D9FF826__CTOR_OFFSET UNITYSDK_OFFSET(0x12B20750)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_0D9FF826_TypeDefinitionIndex = 50487;

	class InternalGlobals___GEN_DELEGATE_B00_0D9FF826 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0D9FF826__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IRogueTournGameLevelRoomLinear* Invoke(::RPG::Client::IRogueTournGameLevelLayerLinear* a1)
		{
			return ((::RPG::Client::IRogueTournGameLevelRoomLinear*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLayerLinear*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0D9FF826_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournGameLevelLayerLinear* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLayerLinear*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0D9FF826_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::IRogueTournGameLevelRoomLinear* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::Client::IRogueTournGameLevelRoomLinear*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0D9FF826_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
