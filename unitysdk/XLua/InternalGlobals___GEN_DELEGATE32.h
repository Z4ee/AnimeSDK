#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournGameScoreSettleResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE32_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF54AD0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE32_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF54B00)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE32_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF54570)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE32__CTOR_OFFSET UNITYSDK_OFFSET(0xFF49D70)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE32_TypeDefinitionIndex = 40449;

	class InternalGlobals___GEN_DELEGATE32 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE32__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::RPG::Client::IRogueTournGameScoreSettleResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournGameScoreSettleResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE32_INVOKE_OFFSET))(this, result);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournGameScoreSettleResult* result, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournGameScoreSettleResult*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE32_BEGININVOKE_OFFSET))(this, result, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE32_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
