#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE49_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12E89EB0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE49_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12E89F00)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE49_INVOKE_OFFSET UNITYSDK_OFFSET(0x12E89EA0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE49__CTOR_OFFSET UNITYSDK_OFFSET(0x12E89E30)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE49_TypeDefinitionIndex = 46965;

	class InternalGlobals___GEN_DELEGATE49 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE49__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::GameCore::TurnBasedModifierEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierEvent))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE49_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::TurnBasedModifierEvent a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierEvent, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE49_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE49_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
