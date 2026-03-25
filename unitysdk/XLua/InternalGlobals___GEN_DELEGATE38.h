#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE38_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF56B60)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE38_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF56BB0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE38_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF56850)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE38__CTOR_OFFSET UNITYSDK_OFFSET(0xFF49E10)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE38_TypeDefinitionIndex = 40455;

	class InternalGlobals___GEN_DELEGATE38 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE38__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::RPG::GameCore::AliveState state)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE38_INVOKE_OFFSET))(this, state);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::AliveState state, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::AliveState, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE38_BEGININVOKE_OFFSET))(this, state, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE38_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
