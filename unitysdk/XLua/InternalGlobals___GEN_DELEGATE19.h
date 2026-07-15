#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournDifficultyWithDifficultyComp; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE19_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11CE8D20)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE19_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11CE8D50)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE19_INVOKE_OFFSET UNITYSDK_OFFSET(0x11CE8D10)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE19__CTOR_OFFSET UNITYSDK_OFFSET(0x11CE8C20)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE19_TypeDefinitionIndex = 47900;

	class InternalGlobals___GEN_DELEGATE19 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE19__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Invoke(::RPG::Client::IRogueTournDifficultyWithDifficultyComp* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournDifficultyWithDifficultyComp*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE19_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournDifficultyWithDifficultyComp* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournDifficultyWithDifficultyComp*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE19_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE19_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
