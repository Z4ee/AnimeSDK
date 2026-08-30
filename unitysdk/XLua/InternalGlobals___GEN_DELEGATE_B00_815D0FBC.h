#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_815D0FBC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14B1D260)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_815D0FBC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14B1D2B0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_815D0FBC_INVOKE_OFFSET UNITYSDK_OFFSET(0x14B1D250)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_815D0FBC__CTOR_OFFSET UNITYSDK_OFFSET(0x14B1D1E0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_815D0FBC_TypeDefinitionIndex = 50509;

	class InternalGlobals___GEN_DELEGATE_B00_815D0FBC : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_815D0FBC__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::GameCore::AliveState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_815D0FBC_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::AliveState a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::AliveState, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_815D0FBC_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_815D0FBC_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
