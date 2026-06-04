#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournGameLevelLinear; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE25_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12E87E30)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE25_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12E87E60)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE25_INVOKE_OFFSET UNITYSDK_OFFSET(0x12E87E20)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE25__CTOR_OFFSET UNITYSDK_OFFSET(0x12E87D30)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE25_TypeDefinitionIndex = 46941;

	class InternalGlobals___GEN_DELEGATE25 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE25__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Invoke(::RPG::Client::IRogueTournGameLevelLinear* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLinear*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE25_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournGameLevelLinear* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLinear*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE25_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE25_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
