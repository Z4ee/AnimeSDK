#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournGameLevel; }
namespace RPG::Client { class IRogueTournGameLevelRoom; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE20_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF500C0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE20_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF500F0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE20_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF4FB60)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE20__CTOR_OFFSET UNITYSDK_OFFSET(0xFF49BF0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE20_TypeDefinitionIndex = 40437;

	class InternalGlobals___GEN_DELEGATE20 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE20__CTOR_OFFSET))(this, object, method);
		}

		::RPG::Client::IRogueTournGameLevelRoom* Invoke(::RPG::Client::IRogueTournGameLevel* level)
		{
			return ((::RPG::Client::IRogueTournGameLevelRoom*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevel*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE20_INVOKE_OFFSET))(this, level);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournGameLevel* level, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevel*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE20_BEGININVOKE_OFFSET))(this, level, callback, object);
		}

		::RPG::Client::IRogueTournGameLevelRoom* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::RPG::Client::IRogueTournGameLevelRoom*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE20_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
