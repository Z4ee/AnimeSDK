#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournGameLevelLayerLinear; }
namespace RPG::Client { class IRogueTournGameLevelRoomLinear; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE27_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1121BAE0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE27_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1121BB10)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE27_INVOKE_OFFSET UNITYSDK_OFFSET(0x1121B580)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE27__CTOR_OFFSET UNITYSDK_OFFSET(0x11212E80)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE27_TypeDefinitionIndex = 46353;

	class InternalGlobals___GEN_DELEGATE27 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE27__CTOR_OFFSET))(this, object, method);
		}

		::RPG::Client::IRogueTournGameLevelRoomLinear* Invoke(::RPG::Client::IRogueTournGameLevelLayerLinear* layer)
		{
			return ((::RPG::Client::IRogueTournGameLevelRoomLinear*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLayerLinear*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE27_INVOKE_OFFSET))(this, layer);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournGameLevelLayerLinear* layer, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLayerLinear*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE27_BEGININVOKE_OFFSET))(this, layer, callback, object);
		}

		::RPG::Client::IRogueTournGameLevelRoomLinear* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::RPG::Client::IRogueTournGameLevelRoomLinear*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE27_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
