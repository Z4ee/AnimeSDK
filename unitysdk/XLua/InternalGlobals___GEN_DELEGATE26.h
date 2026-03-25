#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournGameLevelLinear; }
namespace RPG::Client { class IRogueTournGameLevelRoom; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE26_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF522E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE26_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF52340)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE26_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF51D80)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE26__CTOR_OFFSET UNITYSDK_OFFSET(0xFF49CB0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE26_TypeDefinitionIndex = 40443;

	class InternalGlobals___GEN_DELEGATE26 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE26__CTOR_OFFSET))(this, object, method);
		}

		::RPG::Client::IRogueTournGameLevelRoom* Invoke(::RPG::Client::IRogueTournGameLevelLinear* level, ::System::UInt32 progress)
		{
			return ((::RPG::Client::IRogueTournGameLevelRoom*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLinear*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE26_INVOKE_OFFSET))(this, level, progress);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournGameLevelLinear* level, ::System::UInt32 progress, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLinear*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE26_BEGININVOKE_OFFSET))(this, level, progress, callback, object);
		}

		::RPG::Client::IRogueTournGameLevelRoom* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::RPG::Client::IRogueTournGameLevelRoom*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE26_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
