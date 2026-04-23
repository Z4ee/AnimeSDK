#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournDifficulty; }
namespace RPG::Client { class IRogueTournDifficultyWithDifficultyComp; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE16_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11217670)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE16_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x112176A0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE16_INVOKE_OFFSET UNITYSDK_OFFSET(0x11217110)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE16__CTOR_OFFSET UNITYSDK_OFFSET(0x11212D20)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE16_TypeDefinitionIndex = 46342;

	class InternalGlobals___GEN_DELEGATE16 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE16__CTOR_OFFSET))(this, object, method);
		}

		::RPG::Client::IRogueTournDifficultyWithDifficultyComp* Invoke(::RPG::Client::IRogueTournDifficulty* difficulty)
		{
			return ((::RPG::Client::IRogueTournDifficultyWithDifficultyComp*(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE16_INVOKE_OFFSET))(this, difficulty);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournDifficulty* difficulty, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE16_BEGININVOKE_OFFSET))(this, difficulty, callback, object);
		}

		::RPG::Client::IRogueTournDifficultyWithDifficultyComp* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::RPG::Client::IRogueTournDifficultyWithDifficultyComp*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE16_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
