#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournGameLevelLayerLinear; }
namespace RPG::Client { class IRogueTournGameLevelLinear; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE22_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF50C20)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE22_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF50C50)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE22_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF506C0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE22__CTOR_OFFSET UNITYSDK_OFFSET(0xFF49C30)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE22_TypeDefinitionIndex = 40439;

	class InternalGlobals___GEN_DELEGATE22 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE22__CTOR_OFFSET))(this, object, method);
		}

		::RPG::Client::IRogueTournGameLevelLayerLinear* Invoke(::RPG::Client::IRogueTournGameLevelLinear* level)
		{
			return ((::RPG::Client::IRogueTournGameLevelLayerLinear*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLinear*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE22_INVOKE_OFFSET))(this, level);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournGameLevelLinear* level, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLinear*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE22_BEGININVOKE_OFFSET))(this, level, callback, object);
		}

		::RPG::Client::IRogueTournGameLevelLayerLinear* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::RPG::Client::IRogueTournGameLevelLayerLinear*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE22_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
