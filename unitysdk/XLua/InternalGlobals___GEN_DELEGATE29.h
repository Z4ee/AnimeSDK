#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournGameLevelLayerLinear; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE29_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1121C620)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE29_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1121C650)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE29_INVOKE_OFFSET UNITYSDK_OFFSET(0x1121C0C0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE29__CTOR_OFFSET UNITYSDK_OFFSET(0x11212EC0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE29_TypeDefinitionIndex = 46355;

	class InternalGlobals___GEN_DELEGATE29 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE29__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::RPG::Client::IRogueTournGameLevelLayerLinear* layer)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLayerLinear*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE29_INVOKE_OFFSET))(this, layer);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournGameLevelLayerLinear* layer, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLayerLinear*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE29_BEGININVOKE_OFFSET))(this, layer, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE29_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
