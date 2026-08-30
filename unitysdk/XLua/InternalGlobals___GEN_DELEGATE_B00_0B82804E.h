#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournGameLevelLayerLinear; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0B82804E_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14B1AE90)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0B82804E_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14B1AEC0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0B82804E_INVOKE_OFFSET UNITYSDK_OFFSET(0x14B1AE80)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0B82804E__CTOR_OFFSET UNITYSDK_OFFSET(0x14B1AD90)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_0B82804E_TypeDefinitionIndex = 50489;

	class InternalGlobals___GEN_DELEGATE_B00_0B82804E : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0B82804E__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Invoke(::RPG::Client::IRogueTournGameLevelLayerLinear* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLayerLinear*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0B82804E_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournGameLevelLayerLinear* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLayerLinear*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0B82804E_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0B82804E_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
