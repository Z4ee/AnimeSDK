#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournDifficulty; }
namespace RPG::Client { class IRogueTournDifficultyWithDifficultyComp; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE16_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12E87110)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE16_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12E87140)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE16_INVOKE_OFFSET UNITYSDK_OFFSET(0x12E87100)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE16__CTOR_OFFSET UNITYSDK_OFFSET(0x12E87010)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE16_TypeDefinitionIndex = 46932;

	class InternalGlobals___GEN_DELEGATE16 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE16__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IRogueTournDifficultyWithDifficultyComp* Invoke(::RPG::Client::IRogueTournDifficulty* a1)
		{
			return ((::RPG::Client::IRogueTournDifficultyWithDifficultyComp*(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE16_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournDifficulty* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE16_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::IRogueTournDifficultyWithDifficultyComp* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::Client::IRogueTournDifficultyWithDifficultyComp*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE16_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
