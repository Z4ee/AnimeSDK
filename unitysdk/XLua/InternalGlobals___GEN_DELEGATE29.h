#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournGameLevelLayerLinear; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE29_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11CE9BB0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE29_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11CE9BE0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE29_INVOKE_OFFSET UNITYSDK_OFFSET(0x11CE9BA0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE29__CTOR_OFFSET UNITYSDK_OFFSET(0x11CE9AB0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE29_TypeDefinitionIndex = 47910;

	class InternalGlobals___GEN_DELEGATE29 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE29__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Invoke(::RPG::Client::IRogueTournGameLevelLayerLinear* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLayerLinear*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE29_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournGameLevelLayerLinear* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLayerLinear*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE29_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE29_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
