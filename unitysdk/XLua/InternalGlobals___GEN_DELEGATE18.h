#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournDifficulty; }
namespace RPG::Client { class IRogueTournDifficultyWithDivision; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE18_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF4EFA0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE18_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF4EFD0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE18_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF4EA40)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE18__CTOR_OFFSET UNITYSDK_OFFSET(0xFF49BB0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE18_TypeDefinitionIndex = 40435;

	class InternalGlobals___GEN_DELEGATE18 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE18__CTOR_OFFSET))(this, object, method);
		}

		::RPG::Client::IRogueTournDifficultyWithDivision* Invoke(::RPG::Client::IRogueTournDifficulty* difficulty)
		{
			return ((::RPG::Client::IRogueTournDifficultyWithDivision*(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE18_INVOKE_OFFSET))(this, difficulty);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournDifficulty* difficulty, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE18_BEGININVOKE_OFFSET))(this, difficulty, callback, object);
		}

		::RPG::Client::IRogueTournDifficultyWithDivision* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::RPG::Client::IRogueTournDifficultyWithDivision*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE18_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
