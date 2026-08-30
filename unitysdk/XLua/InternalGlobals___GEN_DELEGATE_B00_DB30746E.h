#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DB30746E_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14B1EDA0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DB30746E_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14B1EDF0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DB30746E_INVOKE_OFFSET UNITYSDK_OFFSET(0x14B1ED90)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DB30746E__CTOR_OFFSET UNITYSDK_OFFSET(0x14B1ED20)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_DB30746E_TypeDefinitionIndex = 50525;

	class InternalGlobals___GEN_DELEGATE_B00_DB30746E : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DB30746E__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::GameCore::TurnBasedModifierEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierEvent))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DB30746E_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::TurnBasedModifierEvent a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierEvent, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DB30746E_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DB30746E_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
