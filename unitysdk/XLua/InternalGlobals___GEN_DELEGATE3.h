#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class ActivityRewardCountData; }
namespace RPG::Client { class ActivityRewardCountItemData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE3_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1121CBE0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE3_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1121CC10)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE3_INVOKE_OFFSET UNITYSDK_OFFSET(0x1121C680)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE3__CTOR_OFFSET UNITYSDK_OFFSET(0x11212B60)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE3_TypeDefinitionIndex = 46329;

	class InternalGlobals___GEN_DELEGATE3 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE3__CTOR_OFFSET))(this, object, method);
		}

		::RPG::Client::ActivityRewardCountItemData* Invoke(::RPG::Client::ActivityRewardCountData* rewardCount)
		{
			return ((::RPG::Client::ActivityRewardCountItemData*(*)(::PVOID, ::RPG::Client::ActivityRewardCountData*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE3_INVOKE_OFFSET))(this, rewardCount);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::ActivityRewardCountData* rewardCount, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::ActivityRewardCountData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE3_BEGININVOKE_OFFSET))(this, rewardCount, callback, object);
		}

		::RPG::Client::ActivityRewardCountItemData* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::RPG::Client::ActivityRewardCountItemData*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE3_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
