#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournGameLevelLinear; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE24_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12E87CD0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE24_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12E87D00)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE24_INVOKE_OFFSET UNITYSDK_OFFSET(0x12E87CC0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE24__CTOR_OFFSET UNITYSDK_OFFSET(0x12E87BD0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE24_TypeDefinitionIndex = 46940;

	class InternalGlobals___GEN_DELEGATE24 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE24__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Invoke(::RPG::Client::IRogueTournGameLevelLinear* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLinear*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE24_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournGameLevelLinear* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLinear*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE24_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE24_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
