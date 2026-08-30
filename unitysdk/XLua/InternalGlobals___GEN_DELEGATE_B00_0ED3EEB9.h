#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class ActivityRewardCountData; }
namespace RPG::Client { class ActivityRewardCountItemData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0ED3EEB9_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14B1B240)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0ED3EEB9_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14B1B270)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0ED3EEB9_INVOKE_OFFSET UNITYSDK_OFFSET(0x14B1B230)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0ED3EEB9__CTOR_OFFSET UNITYSDK_OFFSET(0x14B1B1C0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_0ED3EEB9_TypeDefinitionIndex = 50470;

	class InternalGlobals___GEN_DELEGATE_B00_0ED3EEB9 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0ED3EEB9__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ActivityRewardCountItemData* Invoke(::RPG::Client::ActivityRewardCountData* a1)
		{
			return ((::RPG::Client::ActivityRewardCountItemData*(*)(::PVOID, ::RPG::Client::ActivityRewardCountData*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0ED3EEB9_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::ActivityRewardCountData* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::ActivityRewardCountData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0ED3EEB9_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ActivityRewardCountItemData* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::Client::ActivityRewardCountItemData*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0ED3EEB9_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
