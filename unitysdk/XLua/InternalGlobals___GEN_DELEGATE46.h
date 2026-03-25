#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE46_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF592A0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE46_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF592F0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE46_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF58F90)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE46__CTOR_OFFSET UNITYSDK_OFFSET(0xFF49F10)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE46_TypeDefinitionIndex = 40463;

	class InternalGlobals___GEN_DELEGATE46 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE46__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::RPG::GameCore::TurnBasedModifierEvent evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierEvent))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE46_INVOKE_OFFSET))(this, evt);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::TurnBasedModifierEvent evt, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierEvent, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE46_BEGININVOKE_OFFSET))(this, evt, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE46_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
