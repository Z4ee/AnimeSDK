#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class RogueTournAreaGroupData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE13_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12E86CF0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE13_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12E86D20)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE13_INVOKE_OFFSET UNITYSDK_OFFSET(0x12E86CE0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE13__CTOR_OFFSET UNITYSDK_OFFSET(0x12E86BF0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE13_TypeDefinitionIndex = 46929;

	class InternalGlobals___GEN_DELEGATE13 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE13__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::Client::RogueTournAreaGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournAreaGroupData*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE13_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::RogueTournAreaGroupData* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::RogueTournAreaGroupData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE13_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE13_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
