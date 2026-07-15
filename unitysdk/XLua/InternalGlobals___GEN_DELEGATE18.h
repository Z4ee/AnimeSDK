#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournDifficulty; }
namespace RPG::Client { class IRogueTournDifficultyWithDivision; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE18_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11CE8BE0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE18_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11CE8C10)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE18_INVOKE_OFFSET UNITYSDK_OFFSET(0x11CE8BD0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE18__CTOR_OFFSET UNITYSDK_OFFSET(0x11CE8AE0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE18_TypeDefinitionIndex = 47899;

	class InternalGlobals___GEN_DELEGATE18 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE18__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IRogueTournDifficultyWithDivision* Invoke(::RPG::Client::IRogueTournDifficulty* a1)
		{
			return ((::RPG::Client::IRogueTournDifficultyWithDivision*(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE18_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournDifficulty* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE18_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::IRogueTournDifficultyWithDivision* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::Client::IRogueTournDifficultyWithDivision*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE18_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
