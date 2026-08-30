#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournGameScoreSettleResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_352C8EE2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12B21700)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_352C8EE2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12B21730)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_352C8EE2_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B216F0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_352C8EE2__CTOR_OFFSET UNITYSDK_OFFSET(0x12B21600)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_352C8EE2_TypeDefinitionIndex = 50496;

	class InternalGlobals___GEN_DELEGATE_B00_352C8EE2 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_352C8EE2__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::Client::IRogueTournGameScoreSettleResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournGameScoreSettleResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_352C8EE2_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournGameScoreSettleResult* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournGameScoreSettleResult*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_352C8EE2_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_352C8EE2_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
